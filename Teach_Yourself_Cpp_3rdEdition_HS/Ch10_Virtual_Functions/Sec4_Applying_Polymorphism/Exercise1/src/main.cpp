
/*
	Exercise 1.: Add another type of list to the program Example 1. Have this version maintain a sorted list (in ascending order).
	Call this list 'sorted'.
*/

// Demonstrate virtual functions.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class list{
public:
	list* head; // pointer to start of list
	list* tail; // pointer to end of list
	list* next; // pointer to the next item in respect to the list
	int num; // value to be stored
	// Constructor:
	list() { head = tail = next = NULL; }
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
		cout << "Error: cannot allocate queue item!\n";
		exit(EXIT_FAILURE);
	}
	item->num = i;

	// put on end of list
	if(tail){
		tail->next = item;
	}
	tail = item;
	item->next = NULL;
	if(!head){
		head = tail;
	}
}

int queue::retrieve(){
	int i;
	list* p;

	if(!head){
		cout << "Queue empty.\n";
		return EXIT_FAILURE;
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
		cout << "Error: Cannot allocate stack item!\n";
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
		cout << "Stack empty.\n";
		return EXIT_FAILURE;
	}

	// remove from start of list
	i = head->num;
	p = head;
	head = head->next;
	delete p;

	return i;
}

// Create a sorted-type (in ascending order) list.
class sorted : public list{
public:
	void store(int i);
	int retrieve();
};

void sorted::store(int i){
	list* item;
	list* p;

	item = new sorted;
	if(!item){
		cout << "Error: Cannot allocate sorted item!\n";
		exit(EXIT_FAILURE);
	}
	item->num = i;

	if(head==NULL){ // Check if this is the 1st time a value is put
		head = tail = item;
		item->next = NULL;
		return; // end the function call here, for the 1st time
	}
	if(head==tail){ // Check If it's the 2nd time a value is put
		if(item->num < head->num){
			head = item;
			head->next = tail;
		}else{
			tail = item;
			head->next = tail;
			tail->next = NULL;}
		return; // end the function call here, for the 2nd time
	}

	// For the 3rd, and subsequent times
	p = head;
	do{
		if(item->num < p->num){
			item->next = head;
			head = item;
			break;
		}else{
			p = p->next;
		}

	}while(!item->next);
}




int main(){
	list* p;

	// demonstrate 'queue'
	queue q_ob;
	p = &q_ob; // point to queue

	p->store(1);
	p->store(2);
	p->store(3);

	cout << "Queue: ";
	cout << p->retrieve();
	cout << ' ';
	cout << p->retrieve();
	cout << ' ';
	cout << p->retrieve();
	cout << ' ';

	cout << '\n';

	// demonstrate 'stack'
	stack s_ob;
	p = &s_ob; // point to stack

	cout << "Stack: ";
	cout << p->retrieve();
	cout << ' ';
	cout << p->retrieve();
	cout << ' ';
	cout << p->retrieve();
	cout << ' ';

	cout << '\n';

	return EXIT_SUCCESS;
}

/*

	This program displays the following output when ran:

	$ ./Ch10_Sec4_Example1.exe
	Queue: 123
	Stack: 321

*/
