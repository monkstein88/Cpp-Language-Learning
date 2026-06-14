
/*
	Example 1.: Here is an example that illustrates the attributes of a namespace.
*/

// Namespace Demo
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// define a namespace
namespace firstNS
{
	class demo
	{
		int i;
	public:
		demo(int x){ i = x; }
		void seti(int x){ i = x; }
		int geti(){ return i; }
	};

	char str[] = "Illustrating namespaces\n";
	int counter;
}

// define another namespace
namespace secondNS
{
	int x, y;
}

int main(){
	// use scope resolution
	firstNS::demo ob(10);
	/*
		Once 'ob' has been declared, its member functions can be used without namespace qualification,
	*/
	cout << "Valube of 'ob' is: " << ob.geti();
	cout << endl;

	ob.seti(99);
	cout << "Value of 'ob' is now: " << ob.geti();
	cout << endl;

	// bring 'str' into current scope
	using firstNS::str;
	cout << str;

	// bring all of 'firstNS' into current scope
	using namespace firstNS;
	for(counter = 10; counter; counter--)
		cout << counter << " ";
	cout << endl;

	// use 'secondNS'
	secondNS::x = 10;
	secondNS::y = 20;
	cout << "x y: " << secondNS::x;
	cout << ", " << secondNS::y << endl;

	// bring another namespace into view
	using namespace secondNS;
	demo xob(x), yob(y);

	cout << "xob, yob: " << xob.geti() << ", ";
	cout << yob.geti() << endl;

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	Valube of 'ob' is: 10
	Value of 'ob' is now: 99
	Illustrating namespaces
	10 9 8 7 6 5 4 3 2 1
	x y: 10, 20
	xob, yob: 10, 20

	The program illustrates one important point: using one namespace does not override another. When you bring a namespace into view, it
	simply adds its names to whatever other namespaces are currently in effect. Thus, by the end of this program the 'std', 'firstNS',
	'secondNS' namespaces have been added to the global namespace.
*/
