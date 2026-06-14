
/*
	Example 3.: Although the previous examples have used constants, you can pass
	an objects's constructor any valid expression, including variables. For example,
	this program uses user input to construct an object:
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class myclass{
	int i, j;
public:
	myclass(int a, int b);
	void show();
};

myclass::myclass(int a, int b){
	cout << "In constructor\n";
	i = a;
	j = b;
}

void myclass::show(){
	cout << i << ' ' << j << "\n";
}

int main(){

	int x, y;

	cout << "Enter two integers: ";
	cin >> x >> y;

	// use variables to construct ob
	myclass ob(x, y);

	ob.show();

	return EXIT_SUCCESS;
}

/*
	This program illustrates an important point about objects. They can be constructed
	as needed to fit the exact situation at the time of their creation. As you learn
	more about  C++, you will see how useful constructing objects "on the fly" is.
*/
