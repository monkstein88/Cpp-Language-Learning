
/*
	Exercise 3.: Create a queue class that maintains a circular queue of integers. Make the queue size 100 integgers long. Include a shor
	'main()' function that demonstrates its operation.

*/
#include <iostream>
using namespace std;

#define SIZE 100

class q_type{
	int queue[SIZE]; // contains the queue
	int head, tail; // indexes for 'head' (start) and 'tail' (end) of the queue
public:
	void init(); // initialization of the queue
	void enqueue(int val); // store in the queue (at the back/bottom) on tail
	int dequeue(); // extract from the queue (at the front/top)
};

// Initialization (zeroing)
void q_type::init(){
	head = tail = 0;
	return ;
}

// Put a value inside queue
void q_type::enqueue(int val){
	if( (( tail == head) && (head != 0)) || ((tail == SIZE) && (head == 0)) ){
		cout << "Cannot enqueue: queue is full!" << "\n";
		return;
	}
	// The value is put at the current tail value, and then the tail index is increased
	queue[tail++] = val;
	return;
}

// Extract a value from the queue - from the 'head'
int q_type::dequeue(){
 if (head == tail){
	 cout << "Cannot dequeue: queue is empty!" << "\n";
	 return 0; // signal an error here
 }
 if(head == SIZE) head = 0; // re-roll
 return (queue[head++]);
}


int main(){
	int i;
	q_type q1, q2, q3;

	q1.init();
	q2.init();
	q3.init();

	for(i=1; i<=100; i++){
		q1.enqueue(i);
		q2.enqueue(i*i);
		q3.enqueue(i*i*i);
	}

	for(i=1; i<=100; i++){
		cout << "Dequeue 1: "	<< q1.dequeue() << "\n";
		cout <<	"Dequeue 2: " << q2.dequeue() << "\n";
		cout << "Dequeue 3: "	<< q3.dequeue() << "\n";
	}

	return 0;
}
