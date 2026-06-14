
/*
	Example 6.: Here is an example that uses a list to store objects of type 'Project', which is a class that helps manage software projects.
	Notice that the '<', '>', '!=',  and '==' operators are overloaded for objects of type 'Project'. These are the operators that were
	required by Microsoft's Visual C++5 (the compiler used to test the STL examples in this chapter). Other compilers might require you to
	overload additional operators. The STL uses require you to overload additional operators. The STL uses these functions to determine the
	ordering and equality of objects in a container. Even though a list is not an ordered container, it still needs a way to compare
	elements when searching, sorting, or merging.
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
	list<Project> proj;

	proj.push_back(Project((char *)"Compiler",35));
	proj.push_back(Project((char *)"Spreadsheet", 190));
	proj.push_back(Project((char *)"STL implementation", 1000));

	list<Project>::iterator p = proj.begin();

	// display projects
	while(p != proj.end())
	{
		p->report();
		p++;
	}

	// add 10 days to '1st' project
	p = proj.begin();
	p->add_days(10);

	// move 1st project
	do {
		p->sub_days(5);
		p->report();
	} while(!p->completed());

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch14_Sec4_Example6.exe
	Compiler: 35 days left.
	Spreadsheet: 190 days left.
	STL implementation: 1000 days left.
	Compiler: 40 days left.
	Compiler: 35 days left.
	Compiler: 30 days left.
	Compiler: 25 days left.
	Compiler: 20 days left.
	Compiler: 15 days left.
	Compiler: 10 days left.
	Compiler: 5 days left.
	Compiler: 0 days left.


*/
