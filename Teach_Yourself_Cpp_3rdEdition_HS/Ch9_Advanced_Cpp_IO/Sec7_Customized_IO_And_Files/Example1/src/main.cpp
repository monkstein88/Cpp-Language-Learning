
/*
	Example 1.: In the following program, the 'coord' class overloads the '<<' and '>>' operators. Notice that you can use the
	operator functions to write both to the screen and to a file.
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class coord{
	int x, y;
public:
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	friend ostream& operator <<(ostream& stream, coord ob);
	friend istream& operator >>(istream& stream, coord& ob);
};

ostream& operator <<(ostream& stream, coord ob){

	stream << ob.x << ' ' << ob.y << '\n';

	return stream;
}

istream& operator >>(istream& stream, coord& ob){

	stream >> ob.x >> ob.y;

	return stream;
}

int main(){
	coord o1(1, 2), o2(3, 4);

	ofstream out("test");
	if(!out){
		cout << "Cannot open output file.\n";
		return EXIT_FAILURE;
	}

	out << o1 << o2;

	out.close();

	ifstream in("test");
	if(!in){
		cout << "Cannot open input file.\n";
		return EXIT_FAILURE;
	}

	coord o3, o4;

	in >> o3 >> o4;

	cout << o3 << o4;

	in.close();

	return EXIT_SUCCESS;
}


/*

	This program displays the following when ran:

	$ ./Ch9_Sec7_Example1.exe
	1 2
	3 4


*/
