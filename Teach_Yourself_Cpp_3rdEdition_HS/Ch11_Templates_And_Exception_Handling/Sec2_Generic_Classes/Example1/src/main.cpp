/*
	Example 1.: This program creates a very simple generic singly linked list class. It then demonstrates the class by creating a linked
	list that stores characters.
*/

// A simple generic linked list.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

template <class data_t> class list{
	data_t data;
	list* next;
public:
	list(data_t d);
	void add(list* node){ node->next = this; next = 0; }
	list* getnext() { return next; }
	data_t getdata() { return data; }
};

template <class data_t> list<data_t>::list(data_t d){
	data = d;
	next = 0;
}

int main(){
	list<char> start('a');
	list<char>* p;
	list<char>* last;
	int i;

	// build a list
	last = &start;
	for(i=1; i<26; i++){
		p = new list<char>('a' + i);
		p->add(last);
		last = p;
	}

	// follow the list
	p = &start;
	while(p){
		cout << p->getdata();
		p = p->getnext();
	}
	cout << endl;

	return EXIT_SUCCESS;
}

/*
	As you can see, the declaration of a generic class is similar to that of a generic function. The actual type of data stored by the list
	is generic in the class declaration. It is not until an object of the list is declared that the actual data type is determined. In this
	example, objects and pointers are created inside 'main()' that specify that the data type of the list will be 'char'. Pay special
	attention to this declaration:
*/
	list<char> start('a');
/*
	Notice how the desired data type is passed inside the angle brackets.

	You should enter and execute this program. It builds a linked list that contains the characters of the alphabet and then displays them.
	However, by simply changing the type of data specified when 'list' objects are created, you can change the type of data stored by the
	list. For example, you could create another object that stores integers by using this declaration:
*/
	list<int> int_start(1);
/*
	You can also use 'list' to store data types that you create. For example, if you want to store address information, use this structure:
*/
	struct addr{
		char name[40];
		char street[40];
		char city[30];
		char state[3];
		char zip[12];
	};
/*
	Then, to use 'list' to generate objects that will store objects of type 'addr', use a declaration like this (assuming that 'structvar'
	contains a valid 'addr' structure):
*/
	list<addr> obj(structvar);
/*
	This program displays the following when ran:

	$ ./Ch11_Sec2_Example1.exe
	abcdefghijklmnopqrstuvwxyz


*/
