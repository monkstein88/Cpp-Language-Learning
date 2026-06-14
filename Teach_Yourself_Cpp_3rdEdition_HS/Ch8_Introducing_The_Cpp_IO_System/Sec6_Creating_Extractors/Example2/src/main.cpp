
/*
	Example 2. Here an inventory class is created that stores the name of an item, the number on hand, and its cost. The program
	includes both an inserter and an extractor for this class.
*/

// Use a friend inserter for objects of type 'coord'.
#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class inventory{
	char item[40]; // name of item
	int onhand; // number on hand
	double cost; // cost of item
public:
	inventory(const char *i, int o, double c){
		strcpy(item, i);
		onhand = o;
		cost = c;
	}
	friend ostream& operator<<(ostream& stream, inventory ob);
	friend istream& operator>>(istream& stream, inventory& ob);
};

ostream& operator<<(ostream& stream, inventory ob){

	stream << ob.item << ": " << ob.onhand;
	stream << " on hand at $" << ob.cost << '\n';

	return stream;
}

istream& operator>>(istream& stream, inventory& ob){

	cout << "Enter item name: ";
	stream >> ob.item;
	cout << "Enter number on hand: ";
	stream >> ob.onhand;
	cout << "Enter cost: ";
	stream >> ob.cost;

	return stream;
}

int main(){
	inventory ob("hammer", 4, 12.55);

	cout << ob;

	cin >> ob;

	cout << ob;

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	hammer: 4 on hand at $12.55
	Enter item name: nails
	Enter number on hand: 1000
	Enter cost: 9.95
	nails: 1000 on hand at $9.95



*/




























//
