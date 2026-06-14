/*
	Exercise 3.: Special Challenge: On your own, create a class hierarchy that has at its top an abstract class called 'DataStruct'. Create
	two concrete subclasses. Have one implement a stack, the other a queue. Create a function called 'DataStructFactory' that has this
	prototype.

	DataStruct *DataStructFactory(char what);

	Have 'DataStructFactory()' create a stack if 'what' is 's' and a queue if 'what' is 'q'. Return a pointer to the object created.
	Demonstrate that your factory function works.
*/

#include <iostream>
#include <new>			// for the 'new' operator exceptions
#include <typeinfo> // for 'typeid()', 'type_info' and so on.
#include <cctype>   // for 'tolower()' , 'toupper()'
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define SIZE (10) // This will determine the 'stack' or 'queue' maximum size

template <class T>
class DataStruct{
protected:
	T* p;
public:
	DataStruct(){
		try{
			p = new T (SIZE);
		}
		catch(bad_alloc&){ // Catch the 'new' exceptions by (constant) reference ('catch(bad_alloc&)'), and not by a value ('catch(bad_alloc)')
			throw ; // rethrow the exception reference 'bad_alloc&', to be propagated to an outer 'catch' statement
		}
	}
	~DataStruct(){ delete [] p; }
	virtual void init() {}
};

//=====================
//	Stack type
//=====================
template <class T>
class DataStack : public DataStruct<T>{
protected:
	int tos;
public:
	DataStack() : DataStruct<T>() {tos = 0;}
	void init(){ tos = 0; } // have an explicit way initialize stack
	void push(T val); // push object on stack
	T pop(); // pop object from stack
};

// Push an object in
template <class T>
void DataStack<T> :: push(T val){

	if(tos==SIZE){
		cerr << "Cannot push - stack is full!\n";
		return;
	}

	this->p[tos] = val;
	tos++;
}

// Pop an object out
template <class T>
T DataStack<T> :: pop(){

		if(tos == 0){
			cerr << "Cannot pop - stack is empty!\n";
			return 0; // return null on empty stack
		}

		tos--;
		return this->p[tos];
}


//=====================
//	Queue type
//=====================
template <class T>
class DataQueue : public DataStruct<T>{
protected:
	int head; // this index holds the start of the queue
	int tail; // this index holds the end of the queue
public:
	DataQueue() : DataStruct<T>() { tail = head = 0; }
	void init() { tail = head = 0; } // have an explicit way initialize stack
	void enqueue(T val);
	T dequeue();
};

// Put a value in the queue
template <class T>
void DataQueue<T> :: enqueue(T val){

	if((tail+1 == head) ||( (head==0) && (tail+1 == SIZE)) ){
		cerr << "Cannot enqueue - queue is full!\n";
		return;
	}
	tail++;
	if(tail == SIZE) tail = 0; // roll around the queue
	this->p[tail] = val;

}

// Extract a value from the queue
template <class T>
T DataQueue<T> :: dequeue(){

	if( head == tail ){
		cerr << "Cannot enqueue - queue is empty!\n";
		return EXIT_FAILURE; // signal an error here
	}
	head++;
	if(head == SIZE) head = 0; // roll around the queue
	return this->p[head];
}

//===========================
// Object factory/generator
//===========================
template <typename T>
DataStruct<T>* DataStructFactory(char what){

	try{
		if(tolower(what) == 's'){
			return new DataStack<T>;
		}
		if(tolower(what) == 'q'){
			return new DataQueue<T>;
		}
		// else
		cerr << "unknown type generation request!\n";
		return NULL;
	}
	catch(bad_alloc&){ // Catch the an exception by reference 'bad_alloc&' and not by value, either:
		 							   //  - from the 'new' statements just above, or,
										 //  - from the the rethrow from 'DataStruct'
		cerr << "Error - cannot allocate memory for ";
		if(tolower(what) == 's' )
			cerr << "stack!" << endl;
		if(tolower(what) == 'q' )
			cerr << "queue!" << endl;
		exit(EXIT_FAILURE);
	}
	catch(...){ // Catch any other exception that is not of 'bad_alloc' nature
		cerr << "Error - other/unknown" << endl;
		exit(EXIT_FAILURE);
	}

	return NULL;
}



int main(){
	const int cnts = 10;
	DataStruct<double>* p_data[cnts];

	cout << "Generating objects... " ;
	for(int i=0;i < cnts;i++){
		switch(rand() % 2){
			case 0: p_data[i] = DataStructFactory<double>('s'); break;
			case 1: p_data[i] = DataStructFactory<double>('q'); break;
		}
	}
	cout << "Done!\n";
	cout << "Listing objects:\n";

	for(int i=0;i < cnts;i++){
		cout << "Object #"<< i << " : ";// << typeid(*p_data[i]).name() << "\n";
		if(p_data[i] == NULL)
			cout << "NULL pointer!\n";
		else if(typeid(*(p_data[i])) == typeid(DataStruct<double>))
			cout << "DataStruct<double>" << '\n';
		else if(typeid(*(p_data[i])) == typeid(DataStack<double>))
			cout << "DataStack<double>" << '\n';
		else if(typeid(*(p_data[i])) == typeid(DataQueue<double>))
			cout << "DataQueue<double>" << '\n';
		else{
			cout << "Unknown type." << '\n';
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	$ ./Ch12_Cumulative_Skills_Check_Exercise3 | c++filt -t
	Generating objects... Done!
	Listing objects:
	Object #0 : DataStruct<double>
	Object #1 : DataStruct<double>
	Object #2 : DataStruct<double>
	Object #3 : DataStruct<double>
	Object #4 : DataStruct<double>
	Object #5 : DataStruct<double>
	Object #6 : DataStruct<double>
	Object #7 : DataStruct<double>
	Object #8 : DataStruct<double>
	Object #9 : DataStruct<double>

	// Note that 'dynamic_cast' is working only with polymorphic types, it won't work with other.
*/
