
/*
	Exercise 1.: Overload the '<' and '>' operaotr relative to the 'coord' class:
*/

// Overload the '==' and '&&' relative to coord class.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class coord{
	int x, y; // coordinate values
public:
	// Constructors
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	// Overloading - of relational and logic operators
	int operator==(coord ob2);
	int operator&&(coord ob2);
	int operator>(coord ob2);
	int operator<(coord ob2);
	// Member functions
	void get_xy(int& i, int& j){ i = x; j = y; }
};
// Overload the '==' operator for 'coord'.
int coord::operator==(coord ob2){
	return (x == ob2.x) && (y == ob2.y);
}
// Overload the '&&' operator for 'coord'.
int coord::operator&&(coord ob2){
	return (x && ob2.x) && (y && ob2.y);
}
// Overload the '<' operator for 'coord'.
int coord::operator<(coord ob2){
	return (x < ob2.x) && (y < ob2.y);
}
// Overload the '>' operator for 'coord'.
int coord::operator>(coord ob2){
	return (x > ob2.x) && (y > ob2.y);
}

int main(){
	coord o1(10, 10), o2(5, 3), o3(10,10), o4(0,0);

	if(o1 < o2)
		cout << "o1 < o2\n";
	else if(o1 > o2)
		cout << "o1 > o2\n";
	else if(o1 == o2)
		cout << "o1 = o2\n";
	else
		cout << "o1 != o2\n";

	if(o1 < o3)
		cout << "o1 < o3\n";
	else if(o1 > o3)
		cout << "o1 > o3\n";
	else if(o1 == o3)
		cout << "o1 = o3\n";
	else
		cout << "o1 != o3\n";

	if(o1 < o4)
		cout << "o1 < o4\n";
	else if(o1 > o4)
		cout << "o1 > o4\n";
	else if(o1 == o4)
		cout << "o1 = o4\n";
	else
		cout << "o1 != o4\n";

	if(o2 < o3)
		cout << "o2 < o3\n";
	else if(o2 > o3)
		cout << "o2 > o3\n";
	else if(o2 == o3)
		cout << "o2 = o3\n";
	else
		cout << "o2 != o3\n";

	if(o2 < o4)
		cout << "o2 < o4\n";
	else if(o2 > o4)
		cout << "o2 > o4\n";
	else if(o2 == o4)
		cout << "o2 = o4\n";
	else
		cout << "o2 != o4\n";

	return EXIT_SUCCESS;
}

/*

*/
