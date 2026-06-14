/*
	Exercise 2.: Create and demonstrate a generic queue class.
*/

// A simple generic type 'queue' class
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define Q_SIZE (100)

template <class q_type>
class queue{
	q_type* q_ptr;
	int head; // this index holds the start of the queue
	int tail; // thi index holds the end of the queue
public:
	queue();
	~queue();
	void enqueue(q_type val);
	q_type dequeue();
};

template <class q_type>
queue<q_type>::queue(){

	q_ptr = new q_type [100];
	if(!q_ptr){
		cout << "Queue allocation error!\n";
		exit(EXIT_FAILURE);
	}
	head = tail = 0;
}

template <class q_type>
queue<q_type>::~queue(){

	cout << "Deallocating queue.\n";
	delete [] q_ptr;
}

// Put a value in the queue
template <class q_type>
void queue<q_type>::enqueue(q_type val){

	if((tail+1 == head) ||( (head==0) && (tail+1 == Q_SIZE)) ){
		cout << "Cannot enqueue - queue is full!\n";
		return;
	}
	tail++;
	if(tail == Q_SIZE) tail = 0; // roll around the queue
	q_ptr[tail] = val;
}

// Extract a value from the queue
template <class q_type>
q_type queue<q_type>::dequeue(){

	if( head == tail ){
		cout << "Cannot enqueue - queue is empty!\n";
		return EXIT_FAILURE; // signal an error here
	}
	head++;
	if(head == Q_SIZE) head = 0; // roll around the queue
	return q_ptr[head];
}


int main(){
	queue<char> q_ch;
	queue<int> q_int;
	int i;

	// Put stuff in the queues
	for(i=0; i<3; i++)
		q_ch.enqueue('a' + i);

	for(i=1; i<=99; i++)
		q_int.enqueue(i);

	// Extracting and displaying the queued content
	//
	for(i=0; i<3; i++)
		cout << q_ch.dequeue() << ' ';
	cout << endl;

	for(i=1; i<=99; i++)
		cout << q_int.dequeue() << ' ';
	cout << endl;

	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	$ ./Ch11_Sec2_Exercise2.exe
	a b c
	1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99
	Deallocating queue.
	Deallocating queue.


*/
