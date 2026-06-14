
/*
	Example 2.: Given the following class, write a program that outputs the contents of the class to a file. Create an inserter
	function for this purpose.

	class account{
		int custnum; // customer number
		char name[80];
		double balance;
	public:
		account(int c, char* n, double b){
			custnum = c;
			strcpy(name, n);
			balance = b;
		}
		// create inserter here
	};

*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

static char db_str[80];

class account{
	int custnum; // customer number
	char name[80];
	double balance;
public:
	account(){ memset(this, 0, sizeof(account) );}
	account(int c, const char* n, double b){
		custnum = c;
		strcpy(name, n);
		balance = b;
	}
	// create inserter here
	friend ostream& operator<<(ostream& stream, account& ob){

		stream.write((char* )&ob, sizeof(ob));

		return stream;
	}
	void show(){
		cout << "Customer #: " << right << setw(6) << custnum << " ";
		cout << "Full Name: " << name << " ";
		cout << "Balance: " << fixed << setprecision(2) << balance << " ";
	}
};


int main(int argc, char *argv[]){
	account o1(12345, "Simon S. Cherkesky", 25007.35), o2(3445, "Marina G. Simmons", 250000.0), o3(6666, "Tyresse S. Jackson", -5755.25);
	account otemp;
	int records_num=0;

	if(argc != 2){
		cout << "Usage: STORE CUSTOMER DATA: <outputfile>\n";
		exit(EXIT_FAILURE);
	}
	strcpy(db_str, argv[1]); // Establish the name of the database (file) that we want to store data into.
	ofstream fout(db_str, ios::out | ios::binary | ios::app | ios::ate);
	if(!fout){
		cout << "Cannot open output file - " << db_str << endl;
		exit(EXIT_FAILURE);
	}

	fout << o1;
	fout << o2;
	fout << o3;

	fout.close();

	ifstream fin(db_str, ios::in | ios::binary);
	if(!fin){
		cout << "Cannot open input file - " << db_str << endl;
		exit(EXIT_FAILURE);
	}

	while(!fin.eof()){
		fin.read((char* ) &otemp, sizeof(account));
		if(!fin.eof()){
			otemp.show();
			cout << endl;
			records_num++;
		}
	}

	cout << endl << "Total retrieved: " << records_num << " records." << endl;

	fin.close();

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch9_Sec3_Exercise2.exe database
	Customer #:  12345 Full Name: Simon S. Cherkesky Balance: 25007.35
	Customer #:   3445 Full Name: Marina G. Simmons Balance: 250000.00
	Customer #:   6666 Full Name: Tyresse S. Jackson Balance: -5755.25

	Total retrieved: 3 records.


*/
