
/*
	Exercise 1.: Rework the queue class that you developed as an exercise in Chapter 1
	by replacing its initialization function with a constructor.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

#define Q_SIZE (100)

class q_type{
	int* queue; // contains the pointer to the allocated space for the queue
	int head, tail; // indexes for 'head' (start) and 'tail' (end) of the queue
public:
	q_type(); // constructor
	~q_type(); // destructor
	void enqueue(int val);
	int dequeue();
};

// Constructor - initialize a queue object.
q_type::q_type(){
	queue = (int*) malloc(Q_SIZE * sizeof(int));
	if(!queue){
		cout << "Queue allocation error!\n";
		exit(EXIT_FAILURE);
	}
	head = tail = 0;
}
// Destructor - free the memory occupied by the queue.
q_type::~q_type(){
	cout << "Freeing queue!\n";
	free(queue);
}
// Put a value (at the end 'tail') in the queue
void q_type::enqueue(int val){
	if( ((tail==head) && (head!=0)) || ((head==0) && (tail==Q_SIZE)) ){
		cout << "Cannot enqueue - queue is full!\n";
		return;
	}
	if(tail == Q_SIZE) tail = 0;
	queue[tail++] = val;
	return;
}
// Extract a value (from the start 'head') in the queue.
int q_type::dequeue(){
	if( (head == tail) || ((tail==0)&&(head==Q_SIZE)) ){
		cout << "Cannot deque - queue is empty!\n";
		return 0; // Signal an error here
	}
	if(head == Q_SIZE) head = 0;
	return(queue[head++]);
}

int main(){
	int i;
	q_type q1, q2, q3;

	// Put numbers in the queues - enqueuing
	for(i=1; i<=100; i++){
		q1.enqueue(i);
		q2.enqueue(i*i);
		q3.enqueue(i*i*i);
	}

	// Extract numbers in the queues - dequeuing
	for(i=1; i<=100; i++){
		cout << "Dequeuing q1: " << q1.dequeue() << "\n";
		cout << "Dequeuing q2: " << q2.dequeue() << "\n";
		cout << "Dequeuing q3: " << q3.dequeue() << "\n";
	}

	return EXIT_SUCCESS;
}
