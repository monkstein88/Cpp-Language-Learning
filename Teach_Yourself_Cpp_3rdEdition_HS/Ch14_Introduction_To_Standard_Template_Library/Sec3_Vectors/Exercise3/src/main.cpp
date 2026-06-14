
/*
	Exercise 3.: Here is a simple 'Coord' class. Write a program that stores objects of type 'Coord' in a vector. (Hint: Remember to define
	the '<' and '==' operators relative to 'Coord'.)

	class Coord
	{
	public:
		int x, y;
		Coord() { x = y = 0; }
		Coord(int a, int b) {x = a; y = b; }
	};

*/

#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

class Coord
{

public:
	int x, y;
	// Constructors:
	Coord() { x = 0; y = 0; }  // This is a 'default' constructor - a constructor which can be called with no arguments
	Coord(int a, int b) { x = a; y = b; }

	// Overloading operators
	Coord &operator=(Coord obj)
	{
		x = obj.x;
		y = obj.y;

		return *this;
	}
};


// comparisong based on area, encircled by the coords
bool operator<(Coord obj_a, Coord obj_b)
{
	return abs(obj_a.x * obj_a.y) < abs(obj_b.x * obj_b.y);
}

bool operator==(Coord obj_a, Coord obj_b)
{
	return abs(obj_a.x * obj_a.y) == abs(obj_b.x * obj_b.y);
}

int main()
{
	vector<Coord> v1;

	cout << "Inflating a vector with coords.." << '\n';
	for(int i=0;i<10;i++)
		v1.push_back(Coord(i,-i));

	cout << "Listing coords: " << '\n';
	for(int i=0; i< v1.size(); i++)
		cout << "v[" << i << "] : x: " << v1[i].x << " , y: " << v1[i].y << '\n';
	cout << endl;


	cout << "Changing x = 2*x ..." << '\n';
		for(int i=0; i< v1.size(); i++)
			v1[i].x = v1[i].x * 2;

	cout << "Listing new coords: " << '\n';
	for(int i=0; i< v1.size(); i++)
		cout << "v[" << i << "] : x: " << v1[i].x << " , y: " << v1[i].y << '\n';
	cout << endl;

	return EXIT_SUCCESS;
}
/*
	This program displays the following when ran:

	$ ./Ch14_Sec3_Exercise3.exe
	Inflating a vector with coords..
	Listing coords:
	v[0] : x: 0 , y: 0
	v[1] : x: 1 , y: -1
	v[2] : x: 2 , y: -2
	v[3] : x: 3 , y: -3
	v[4] : x: 4 , y: -4
	v[5] : x: 5 , y: -5
	v[6] : x: 6 , y: -6
	v[7] : x: 7 , y: -7
	v[8] : x: 8 , y: -8
	v[9] : x: 9 , y: -9

	Changing x = 2*x ...
	Listing new coords:
	v[0] : x: 0 , y: 0
	v[1] : x: 2 , y: -1
	v[2] : x: 4 , y: -2
	v[3] : x: 6 , y: -3
	v[4] : x: 8 , y: -4
	v[5] : x: 10 , y: -5
	v[6] : x: 12 , y: -6
	v[7] : x: 14 , y: -7
	v[8] : x: 16 , y: -8
	v[9] : x: 18 , y: -9

*/
