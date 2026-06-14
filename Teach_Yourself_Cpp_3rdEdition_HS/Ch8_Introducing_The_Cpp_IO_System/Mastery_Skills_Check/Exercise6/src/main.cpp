
/*
	Exercise 6.: Create a class called 'box' that stores the dimensions of a square. Create an inserter that displays a square box
	on the screen. (Use any method you like to display the box.)
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class box{
	int x, y;
public:
	// Constructors:
	box(){ x = 0; y = 0;}
	box(int a, int b){ x = a; y = b;}
	// Overloading - via friend functions:
	friend ostream& operator<<(ostream& stream, box ob);
	friend istream& operator>>(istream& stream, box& ob);
};

ostream& operator<<(ostream& stream, box ob){
	int i, j;

	for(j=0;j<ob.y; j++){
		if(j==0 || j == ob.y-1){ // If we are at either the 'top' or 'bottom' ...
			for(i=0; i<ob.x; i++ ) // ... print the entire 'top' or 'bottom' depending on the case.
				stream << '*';
			stream << '\n';
		}else{				// Otherwise, if we're somewhere in the 'middle' ...
			for(i=0; i<ob.x; i++){			// ... print the 'medium' (left and right) sides only
				if(i==0 || i==ob.x-1)
					stream << '*';
				else
					stream << ' ';
			}
			stream << '\n';
		}
	}

	return stream;
}

istream& operator>>(istream& stream, box& ob){

	stream >> ob.x >> ob.y;

	return stream;
}

int main(){
	box b1(3,4), b2(8,5), b3(2,2);

	cout << b1 << endl;
	cout << endl;
	cout << b2 << endl;
	cout << endl;
	cout << b3 << endl;
	cout << endl;


	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:



*/
