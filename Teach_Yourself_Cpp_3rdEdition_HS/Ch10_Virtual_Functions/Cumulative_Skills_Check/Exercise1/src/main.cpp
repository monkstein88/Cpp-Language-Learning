/*
	Exercise 1.: Enhance the list exaple from Section 10.4, Example 1, so that it overloads the '+' and '-' operators. Have the
	'+' store an element and the '-' retrieve an element.
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class list{
public:
	list* head; // pointer to start of list
	list* tail; // pointer to end of list
	list* next; // pointer to next item.
	int num; // value to be stored
	// Constructor:
	list(){head = tail = next = NULL; }
	// Pure virtual functions:
	virtual void store(int i) = 0;
	virtual int retrieve() = 0;
};

// Create a queue-type list
class queue : public list{
public:
	// Overriding:
	void store(int i);
	int retrieve();
	// Overloading operators
	queue operator+(int i);
	int operator-(int i);
};

void queue::store(int i){
	list* item;

	item = new queue;
	if(!item){
		cout << "Allocation error!" << endl;
		exit(EXIT_FAILURE);
	}

	item->num = i;
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
		cout << "Queue empty!" << endl;
		return 0;
	}

	// remove from start of list
	i = head->num;
	p = head;
	head = head->next;
	delete p;

	return i;
}

// Overloaded operators for 'queue'
queue queue::operator+(int i){
	this->store(i);
	return *this;
}

int queue::operator-(int i){
	return((this->retrieve())-i);
}

// Create a stack-type list.
class stack : public list{
public:
	// Overriding:
	void store(int i);
	int retrieve();
	// Overloading operators:
	stack operator+(int i);
	int operator-(int i);
};


void stack::store(int i){
	list* item;

	item = new stack;
	if(!item){
		cout << "Allocation error!" << endl;
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
		cout << "Stack empty!" << endl;
		return 0;
	}

	//remove from start of list
	i = head->num;
	p = head;
	head = head->next;
	delete p;

	return i;
}

// Overloaded operators for 'stack'
stack stack::operator+(int i){
	this->store(i);
	return *this;
}

int stack::operator-(int i){
	return((this->retrieve())-i);
}


int main(){
	list* p;

	// demonstrate 'queue'
	queue q_ob;
	p = &q_ob;

	// Store some numbers:
	p->store(1);
	p->store(2);
	p->store(3);
	q_ob+4;
	*((queue*)p)+5;
	q_ob+6;
	// Retrieve the numbers:
	cout << "Queue:" << '\n';
	cout << p->retrieve(); // '1'
	cout << p->retrieve(); // '2'
	cout << p->retrieve(); // '3'
	cout << q_ob-0; // '4'
	cout << p->retrieve(); // '5'
	cout << (*(queue*)p)-0; // '6'
	cout << endl;

	// demonstrate 'stack'
	stack s_ob;
	p = &s_ob;

	// Store some numbers:
	p->store(1);
	p->store(2);
	p->store(3);
	s_ob+4;
	*((stack*)p)+5;
	s_ob+6;
	// Retrieve the numbers:
	cout << "Stack:" << '\n';
	cout << p->retrieve(); // '1'
	cout << p->retrieve(); // '2'
	cout << p->retrieve(); // '3'
	cout << s_ob-0; // '4'
	cout << p->retrieve(); // '5'
	cout << (*(stack*)p)-0; // '6'
	cout << endl;

	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	Queue:
	123456
	Stack:
	654321

*/
