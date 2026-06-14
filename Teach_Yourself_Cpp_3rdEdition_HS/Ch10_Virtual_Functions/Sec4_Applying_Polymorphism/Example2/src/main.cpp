
/*
	Example 2.: The main() function in the list program just shown simply illustrates that the list classes do, indeed, work.
	However, to begin to see why run-time polymorphism is so powerful, try using this 'main()' instead:
*/

// Demonstrate virtual functions.
#include <iostream>
#include <cctype>
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

	queue q_ob;
	stack s_ob;
	char ch;
	int i;

	for(i=0; i<10; i++){
		cout << "Stack or Queue? (S/Q): ";
		cin >> ch;
		ch = tolower(ch);
		if(ch=='q'){
			p = &q_ob;
		}else if(ch=='s')
			p = &s_ob;
		else
			continue;
		p->store(i);
	}

	cout << "Enter 'T' to terminate\n";
	for(;;){
		cout << "Remove from Stack or Queue? (S/Q): ";
		cin >> ch;
		ch = tolower(ch);
		if(ch=='t')
			break;
		if(ch=='q')
			p = &q_ob;
		else if(ch=='s')
			p = &s_ob;
		cout << p->retrieve() << '\n';
	}

	cout << '\n';

	return EXIT_SUCCESS;
}

/*
	This 'main()' illustrates how random events that occur at run time can be easily handled by using virtual function and run-
	time polymorphism. This program executes a 'for' loop running from 0 to 9. Each iteration through the loop, you are asked to
	choose into which type of list-stack or the queue - you want to put a value. According to your answer, the base pointer 'p' is
	set to point to the correct object and the current value of 'i' is stored. Once the loop is finished, another loop begins that
	prompts you to indicate you from which list to remove a value. Once again, it is your response that determines which list is
	selected.

	While this example is trivial, you should be able to see how run-time to polymorphism can simplify a program that must respond
	to random events. For instance, the Windows operating system interfaces to a program by sending it messages. As far as the
	program is concerned, these messages are generated at random, and your program must respond to each as it is received. One way
	to respond to these messages is through the use of virtual functions.

	This program displays the following output when ran:

	$ ./Ch10_Sec4_Example2.exe
	Stack or Queue? (S/Q): s
	Stack or Queue? (S/Q): s
	Stack or Queue? (S/Q): s
	Stack or Queue? (S/Q): s
	Stack or Queue? (S/Q): q
	Stack or Queue? (S/Q): q
	Stack or Queue? (S/Q): q
	Stack or Queue? (S/Q): q
	Stack or Queue? (S/Q):
	s
	Stack or Queue? (S/Q): s
	Enter 'T' to terminate
	Remove from Stack or Queue? (S/Q): s
	9
	Remove from Stack or Queue? (S/Q): s
	8
	Remove from Stack or Queue? (S/Q): s
	3
	Remove from Stack or Queue? (S/Q): q
	4
	Remove from Stack or Queue? (S/Q): q
	5
	Remove from Stack or Queue? (S/Q): q
	6
	Remove from Stack or Queue? (S/Q): q
	7
	Remove from Stack or Queue? (S/Q): q
	List empty.
	0
	Remove from Stack or Queue? (S/Q): s
	2
	Remove from Stack or Queue? (S/Q): s
	1
	Remove from Stack or Queue? (S/Q): s
	0
	Remove from Stack or Queue? (S/Q): s
	List empty.
	1
	Remove from Stack or Queue? (S/Q): s
	List empty.
	1
	Remove from Stack or Queue? (S/Q): q
	List empty.
	0
	Remove from Stack or Queue? (S/Q): q
	List empty.
	0
	Remove from Stack or Queue? (S/Q): q
	List empty.
	0
	Remove from Stack or Queue? (S/Q): s
	List empty.
	1
	Remove from Stack or Queue? (S/Q): s
	List empty.
	1
	Remove from Stack or Queue? (S/Q): t



*/
