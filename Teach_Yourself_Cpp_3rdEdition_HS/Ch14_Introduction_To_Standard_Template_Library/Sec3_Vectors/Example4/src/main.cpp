
/*
	Example 4.: Here is an example that uses a vector to store objects of a programmer defined class. Notice that the class defines the
	default constructor and that overloaded versions of '<' and '==' are provided. Remember, depending upon how your compiler implements the
	STL, tother comparison operators might need to be defined.
*/

// Store a class object in a vector
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <vector>
using namespace std;

class Demo
{
	double d;
public:
	Demo() { d = 0.0; }
	Demo(double x) { d = x; }
	Demo &operator=(double x)
	{
		d = x;
		return *this;
	}
	double getd() { return d; }
};

// Note: The overloaded operator declarations and definitions are outside of the class definition.
bool operator<(Demo a, Demo b)
{
	return a.getd() < b.getd();
}

bool operator==(Demo a, Demo b)
{
	return a.getd() == b.getd();
}

int main()
{
	vector<Demo> v;
	int i;

	for(i=0; i<10; i++)
		v.push_back(Demo(i/3.0));

	for(i=0; i<v.size(); i++)
		cout << v[i].getd() << " ";
	cout << endl;

	for(i=0; i<v.size(); i++)
		v[i] = v[i].getd() * 2.1;

	for(i=0; i<v.size(); i++)
		cout << v[i].getd() << " ";

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch14_Sec3_Example4.exe
	0 0.333333 0.666667 1 1.33333 1.66667 2 2.33333 2.66667 3
	0 0.7 1.4 2.1 2.8 3.5 4.2 4.9 5.6 6.3


*/
