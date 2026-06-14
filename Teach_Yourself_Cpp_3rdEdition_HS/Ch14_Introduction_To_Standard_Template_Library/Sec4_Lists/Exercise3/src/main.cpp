
/*
	Exercise 3.: Expand Example 6 by creating another list of projects that consits of the following:

	------------------------------------------
	||	Project				Days To Completion ||
	==========================================
	||	Database				780	  				 ||
	||	Mail merged			50 					 ||
	|| COM objects			300					 ||
	------------------------------------------

	Next, sort both lists and then merge them together. Display the final result.
*/


#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <cstring>
#include <list>
using namespace std;

class Project{
public:
	char name[40];
	int days_to_completion;
	Project()
	{
		strcpy(name, "");
		days_to_completion = 0;
	}
	Project(char *n, int d)
	{
		strcpy(name , n);
		days_to_completion = d;
	}
	void add_days(int i)
	{
		days_to_completion += i;
	}
	void sub_days(int i)
	{
		days_to_completion -= i;
	}

	bool completed(){ return !days_to_completion; }
	void report()
	{
		cout << name << ": ";
		cout << days_to_completion;
		cout << " days left.\n";
	}
};

bool operator<(const Project &a, const Project &b)
{
	return a.days_to_completion < b.days_to_completion;
}

bool operator>(const Project &a, const Project &b)
{
	return a.days_to_completion > b.days_to_completion;
}

bool operator==(const Project &a, const Project &b)
{
	return a.days_to_completion == b.days_to_completion;
}

bool operator!=(const Project &a, const Project &b)
{
	return a.days_to_completion != b.days_to_completion;
}


int main()
{
	list<Project> proj_lst1;
	list<Project> proj_lst2;
	list<Project>::iterator p;

	proj_lst1.push_back(Project((char *)"Compiler", 35));
	proj_lst1.push_back(Project((char *)"Spreadsheet", 190));
	proj_lst1.push_back(Project((char *)"STL implementation", 1000));

	proj_lst2.push_back(Project((char *)"Database", 780));
	proj_lst2.push_back(Project((char *)"Mail merge", 50));
	proj_lst2.push_back(Project((char *)"COM objects", 300));

	// sort both lists
	proj_lst1.sort();
	proj_lst2.sort();

	// then, merge them (into the 'lst1')
	proj_lst1.merge(proj_lst2);

	p = proj_lst1.begin();
	// display projects in the merged list
	cout << "Contents of proj_lst1 after merge:\n";
	while(p != proj_lst1.end())
	{
		p->report();
		p++;
	}

	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	$ ./Ch14_Sec4_Exercise3.exe
	Contents of proj_lst1 after merge:
	Compiler: 35 days left.
	Mail merge: 50 days left.
	Spreadsheet: 190 days left.
	COM objects: 300 days left.
	Database: 780 days left.
	STL implementation: 1000 days left.


*/
