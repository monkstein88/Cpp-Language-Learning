
/*
	Example 1.: As you have seen, when a member function refers to another member of a class, it does
	so directly without qualifying the member with either a class or an object specification. For example,
	examine this short program, which creates a simple inventory class:
*/
#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class inventory{
	char item[20];
	double cost;
	int on_hand;
public:
		inventory(char* i, double c, int o){
		strcpy(item, i);
		cost = c;
		on_hand = o;
	}
	void show();
};

void inventory::show(){
	cout << item;
	cout << " : $" << cost;
	cout << " On hand: " << on_hand << "\n";
}

int main(){
	inventory ob((char*)"wrench", 4.95, 4); // ISO C++11 and above, forbids converting a string constant to ‘char*’ , thus the '(char*)' type casting

	ob.show();

	return EXIT_SUCCESS;
}

/*
	As you can see, within the constructor 'inventory()' and and the member function show(), the member
	variables 'item', 'cost' and 'on_hand' are referred directly. This is because a member funtion can
	be called only in conjuction with an object. Therefore, the compiler knows which object's data is
	being referred to.
*/
