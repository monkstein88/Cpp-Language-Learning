
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
	if( ( tail+1 == head) || ((tail+1 == SIZE) && (head == 0)) ){
		cout << "Cannot enqueue: queue is full!" << "\n";
		return;
	}
	// The value is put at the current tail value, and then the tail index is increased
	tail++;
	if(tail == SIZE) tail = 0; // re-roll
	queue[tail] = val;
	return;
}

// Extract a value from the queue - from the 'head'
int q_type::dequeue(){
 if (head == tail){
	 cout << "Cannot dequeue: queue is empty!" << "\n";
	 return 0; // signal an error here
 }
 head++;
 if(head == SIZE) head = 0; // re-roll
 return (queue[head]);
}


int main(){
	int i;
	q_type q1, q2, q3;

	q1.init();
	q2.init();
	q3.init();

	for(i=1; i<100; i++){
		q1.enqueue(i);
		q2.enqueue(i*i);
		q3.enqueue(i*i*i);
	}

	for(i=1; i<=100; i++){
		cout << "Dequeue 1: " << q1.dequeue() << "\n";
		cout << "Dequeue 2: " << q2.dequeue() << "\n";
		cout << "Dequeue 3: " << q3.dequeue() << "\n";
	}

	return 0;
}

/*
	The program has the following output when ran:

	Dequeue 1: 1
	Dequeue 2: 1
	Dequeue 3: 1
	Dequeue 1: 2
	Dequeue 2: 4
	Dequeue 3: 8
	Dequeue 1: 3
	Dequeue 2: 9
	Dequeue 3: 27
	Dequeue 1: 4
	Dequeue 2: 16
	Dequeue 3: 64
	Dequeue 1: 5
	Dequeue 2: 25
	Dequeue 3: 125
	Dequeue 1: 6
	Dequeue 2: 36
	Dequeue 3: 216
	Dequeue 1: 7
	Dequeue 2: 49
	Dequeue 3: 343
	Dequeue 1: 8
	Dequeue 2: 64
	Dequeue 3: 512
	Dequeue 1: 9
	Dequeue 2: 81
	Dequeue 3: 729
	Dequeue 1: 10
	Dequeue 2: 100
	Dequeue 3: 1000
	Dequeue 1: 11
	Dequeue 2: 121
	Dequeue 3: 1331
	Dequeue 1: 12
	Dequeue 2: 144
	Dequeue 3: 1728
	Dequeue 1: 13
	Dequeue 2: 169
	Dequeue 3: 2197
	Dequeue 1: 14
	Dequeue 2: 196
	Dequeue 3: 2744
	Dequeue 1: 15
	Dequeue 2: 225
	Dequeue 3: 3375
	Dequeue 1: 16
	Dequeue 2: 256
	Dequeue 3: 4096
	Dequeue 1: 17
	Dequeue 2: 289
	Dequeue 3: 4913
	Dequeue 1: 18
	Dequeue 2: 324
	Dequeue 3: 5832
	Dequeue 1: 19
	Dequeue 2: 361
	Dequeue 3: 6859
	Dequeue 1: 20
	Dequeue 2: 400
	Dequeue 3: 8000
	Dequeue 1: 21
	Dequeue 2: 441
	Dequeue 3: 9261
	Dequeue 1: 22
	Dequeue 2: 484
	Dequeue 3: 10648
	Dequeue 1: 23
	Dequeue 2: 529
	Dequeue 3: 12167
	Dequeue 1: 24
	Dequeue 2: 576
	Dequeue 3: 13824
	Dequeue 1: 25
	Dequeue 2: 625
	Dequeue 3: 15625
	Dequeue 1: 26
	Dequeue 2: 676
	Dequeue 3: 17576
	Dequeue 1: 27
	Dequeue 2: 729
	Dequeue 3: 19683
	Dequeue 1: 28
	Dequeue 2: 784
	Dequeue 3: 21952
	Dequeue 1: 29
	Dequeue 2: 841
	Dequeue 3: 24389
	Dequeue 1: 30
	Dequeue 2: 900
	Dequeue 3: 27000
	Dequeue 1: 31
	Dequeue 2: 961
	Dequeue 3: 29791
	Dequeue 1: 32
	Dequeue 2: 1024
	Dequeue 3: 32768
	Dequeue 1: 33
	Dequeue 2: 1089
	Dequeue 3: 35937
	Dequeue 1: 34
	Dequeue 2: 1156
	Dequeue 3: 39304
	Dequeue 1: 35
	Dequeue 2: 1225
	Dequeue 3: 42875
	Dequeue 1: 36
	Dequeue 2: 1296
	Dequeue 3: 46656
	Dequeue 1: 37
	Dequeue 2: 1369
	Dequeue 3: 50653
	Dequeue 1: 38
	Dequeue 2: 1444
	Dequeue 3: 54872
	Dequeue 1: 39
	Dequeue 2: 1521
	Dequeue 3: 59319
	Dequeue 1: 40
	Dequeue 2: 1600
	Dequeue 3: 64000
	Dequeue 1: 41
	Dequeue 2: 1681
	Dequeue 3: 68921
	Dequeue 1: 42
	Dequeue 2: 1764
	Dequeue 3: 74088
	Dequeue 1: 43
	Dequeue 2: 1849
	Dequeue 3: 79507
	Dequeue 1: 44
	Dequeue 2: 1936
	Dequeue 3: 85184
	Dequeue 1: 45
	Dequeue 2: 2025
	Dequeue 3: 91125
	Dequeue 1: 46
	Dequeue 2: 2116
	Dequeue 3: 97336
	Dequeue 1: 47
	Dequeue 2: 2209
	Dequeue 3: 103823
	Dequeue 1: 48
	Dequeue 2: 2304
	Dequeue 3: 110592
	Dequeue 1: 49
	Dequeue 2: 2401
	Dequeue 3: 117649
	Dequeue 1: 50
	Dequeue 2: 2500
	Dequeue 3: 125000
	Dequeue 1: 51
	Dequeue 2: 2601
	Dequeue 3: 132651
	Dequeue 1: 52
	Dequeue 2: 2704
	Dequeue 3: 140608
	Dequeue 1: 53
	Dequeue 2: 2809
	Dequeue 3: 148877
	Dequeue 1: 54
	Dequeue 2: 2916
	Dequeue 3: 157464
	Dequeue 1: 55
	Dequeue 2: 3025
	Dequeue 3: 166375
	Dequeue 1: 56
	Dequeue 2: 3136
	Dequeue 3: 175616
	Dequeue 1: 57
	Dequeue 2: 3249
	Dequeue 3: 185193
	Dequeue 1: 58
	Dequeue 2: 3364
	Dequeue 3: 195112
	Dequeue 1: 59
	Dequeue 2: 3481
	Dequeue 3: 205379
	Dequeue 1: 60
	Dequeue 2: 3600
	Dequeue 3: 216000
	Dequeue 1: 61
	Dequeue 2: 3721
	Dequeue 3: 226981
	Dequeue 1: 62
	Dequeue 2: 3844
	Dequeue 3: 238328
	Dequeue 1: 63
	Dequeue 2: 3969
	Dequeue 3: 250047
	Dequeue 1: 64
	Dequeue 2: 4096
	Dequeue 3: 262144
	Dequeue 1: 65
	Dequeue 2: 4225
	Dequeue 3: 274625
	Dequeue 1: 66
	Dequeue 2: 4356
	Dequeue 3: 287496
	Dequeue 1: 67
	Dequeue 2: 4489
	Dequeue 3: 300763
	Dequeue 1: 68
	Dequeue 2: 4624
	Dequeue 3: 314432
	Dequeue 1: 69
	Dequeue 2: 4761
	Dequeue 3: 328509
	Dequeue 1: 70
	Dequeue 2: 4900
	Dequeue 3: 343000
	Dequeue 1: 71
	Dequeue 2: 5041
	Dequeue 3: 357911
	Dequeue 1: 72
	Dequeue 2: 5184
	Dequeue 3: 373248
	Dequeue 1: 73
	Dequeue 2: 5329
	Dequeue 3: 389017
	Dequeue 1: 74
	Dequeue 2: 5476
	Dequeue 3: 405224
	Dequeue 1: 75
	Dequeue 2: 5625
	Dequeue 3: 421875
	Dequeue 1: 76
	Dequeue 2: 5776
	Dequeue 3: 438976
	Dequeue 1: 77
	Dequeue 2: 5929
	Dequeue 3: 456533
	Dequeue 1: 78
	Dequeue 2: 6084
	Dequeue 3: 474552
	Dequeue 1: 79
	Dequeue 2: 6241
	Dequeue 3: 493039
	Dequeue 1: 80
	Dequeue 2: 6400
	Dequeue 3: 512000
	Dequeue 1: 81
	Dequeue 2: 6561
	Dequeue 3: 531441
	Dequeue 1: 82
	Dequeue 2: 6724
	Dequeue 3: 551368
	Dequeue 1: 83
	Dequeue 2: 6889
	Dequeue 3: 571787
	Dequeue 1: 84
	Dequeue 2: 7056
	Dequeue 3: 592704
	Dequeue 1: 85
	Dequeue 2: 7225
	Dequeue 3: 614125
	Dequeue 1: 86
	Dequeue 2: 7396
	Dequeue 3: 636056
	Dequeue 1: 87
	Dequeue 2: 7569
	Dequeue 3: 658503
	Dequeue 1: 88
	Dequeue 2: 7744
	Dequeue 3: 681472
	Dequeue 1: 89
	Dequeue 2: 7921
	Dequeue 3: 704969
	Dequeue 1: 90
	Dequeue 2: 8100
	Dequeue 3: 729000
	Dequeue 1: 91
	Dequeue 2: 8281
	Dequeue 3: 753571
	Dequeue 1: 92
	Dequeue 2: 8464
	Dequeue 3: 778688
	Dequeue 1: 93
	Dequeue 2: 8649
	Dequeue 3: 804357
	Dequeue 1: 94
	Dequeue 2: 8836
	Dequeue 3: 830584
	Dequeue 1: 95
	Dequeue 2: 9025
	Dequeue 3: 857375
	Dequeue 1: 96
	Dequeue 2: 9216
	Dequeue 3: 884736
	Dequeue 1: 97
	Dequeue 2: 9409
	Dequeue 3: 912673
	Dequeue 1: 98
	Dequeue 2: 9604
	Dequeue 3: 941192
	Dequeue 1: 99
	Dequeue 2: 9801
	Dequeue 3: 970299
	Dequeue 1: Cannot dequeue: queue is empty!
	0
	Dequeue 2: Cannot dequeue: queue is empty!
	0
	Dequeue 3: Cannot dequeue: queue is empty!
	0


*/
