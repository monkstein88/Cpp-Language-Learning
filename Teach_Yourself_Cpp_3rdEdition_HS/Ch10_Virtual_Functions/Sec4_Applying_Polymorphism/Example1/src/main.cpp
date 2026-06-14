
/*
	Example 1.: Here is a program that illustrates "one interface, multiple methods". It defines an abstract list class for
	integer values. The interface to the list is defined by the pure virtual functions 'store()' and 'retrieve()'. The base class
	'list' does not define any default methods for these actions. Instead, each derived class defines exactly what type of list
	will be maintained. In the program, two types of lists are implemented: a queue and a stack. Although the two lists operate
	completely differently, each is accessed using the same interface. You should study this program carefully.
*/

// Demonstrate virtual functions.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class list{
public:
	list* head; // pointer to start of list
	list* tail; // pointer to end of list
	list* next; // pointer to next item
	int num; // value to be stored
	// Constructor:
	list(){ head = tail = next = NULL; }
	// Pure virtual functions:
	virtual void store(int i) = 0;
	virtual int retrieve() = 0;
};

// Create a queue-type list.
class queue : public list{
public:
	void store(int i);
	int retrieve();
};

void queue::store(int i){
	list* item;

	item = new queue;
	if(!item){
		cout << "Allocation error.\n";
		exit(EXIT_FAILURE);
	}

	item->num = i;

	// put on end of 'list'
	if(tail)
		tail->next = item;
	tail = item;
	item->next = NULL;
	if(!head)
		head = tail;
}

int queue::retrieve(){
	int i;
	list* p;

	if(!head){
		cout << "List empty.\n";
		return 0;
	}

	// remove from start of list
	i = head->num;
	p = head;
	head = head->next;
	delete p;

	return i;
}


// Create a stack-type list.
class stack : public list{
public:
	void store(int i);
	int retrieve();
};

void stack::store(int i){
	list* item;

	item = new stack;
	if(!item){
		cout << "Allocation error.\n";
		exit(EXIT_FAILURE);
	}
	item->num = i;

	// put on front of list for stack-like operation
	if(head)
		item->next = head;
	head = item;
	if(!tail)
		tail = head;
}

int stack::retrieve(){
	int i;
	list* p;

	if(!head){
		cout << "List empty.\n";
		return EXIT_FAILURE;
	}

	// remove from start of list
	i = head->num;
	p = head;
	head = head->next;
	delete p;

	return i;
}


int main(){
	list* p;

	// demonstrate queue
	queue q_ob;
	p = &q_ob; // point to queue

	p->store(1);
	p->store(2);
	p->store(3);

	cout << "Queue: ";
	cout << p->retrieve();
	cout << p->retrieve();
	cout << p->retrieve();

	cout << '\n';

	// demonstrate stack
	stack s_ob;
	p = &s_ob; // point to stack

	p->store(1);
	p->store(2);
	p->store(3);

	cout << "Stack: ";
	cout << p->retrieve();
	cout << p->retrieve();
	cout << p->retrieve();

	cout << '\n';

	return EXIT_SUCCESS;
}

/*

	This program displays the following output when ran:

	$ ./Ch10_Sec4_Example1.exe
	Queue: 123
	Stack: 321

*/
