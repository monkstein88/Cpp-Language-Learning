
/*
	Exercise 1.: Following is a reworked version of the 'inventory' class presented in the preceding chapter. Write a program that
	fills in the functions 'store()' and 'retrieve()'. Next, create a small inventory file on disk containing a few entries. Then,
	using random I/O, allow the user to display the information about any item by specifying its record number.

	#include <iostream>
	#include <fstream>
	#include <cstring>
	using namespace std;

	#define SIZE 40

	class inventory{
		char item[SIZE]; // name of item
		int onhand; // number on onhand
		double cost; // cost of item
	public:
		inventory(){ memset(item,'\0', sizeof(item)); onhand = 0; cost = 0.0; }
		inventory(char* i, int o, double c){
			strcpy(item, i);
			onhand = o;
			cost  = c;
		}
		void store(fstream &stream);
		void retrieve(fstream &strea);
		friend ostream& operator <<(ostream& stream, inventory ob);
		friend istream& operator >>(istream& stream, inventory& ob);
	};

	ostream& operator <<(ostream& stream, inventory ob){

		stream << ob.item << ": " << ob.onhand;
		stream << " on hand at $" << ob.cost << '\n';

		return stream;
	}

	istream& operator >>(istream& stream, inventory& ob){

		cout << "Enter item name: ";
		stream >> ob.item;
		cout << "Enter number on hand: ";
		stream >> ob.onhand;
		cout << "Enter cost: ";
		stream >> ob.cost;

		return stream;
	}

*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define MAX_STR_SIZE (80)

class inventory{
	char item[MAX_STR_SIZE]; // name of item
	int onhand; // number on onhand
	double cost; // cost of item
public:
	inventory(){ memset(item, 0 , sizeof(item)); onhand = 0; cost = 0.0; }
	inventory(const char* i, int o, double c){
		strcpy(item, i);
		onhand = o;
		cost  = c;
	}
	void store(ofstream& stream);
	void retrieve(ifstream& stream);
	friend ostream& operator <<(ostream& stream, inventory ob);
	friend istream& operator >>(istream& stream, inventory& ob);
};

ostream& operator <<(ostream& stream, inventory ob){

	stream << ob.item << ": " << ob.onhand;
	stream << " on hand at $" << ob.cost << '\n';

	return stream;
}

istream& operator >>(istream& stream, inventory& ob){

	cout << "Enter item name: ";
	stream >> ob.item;
	cout << "Enter number on hand: ";
	stream >> ob.onhand;
	cout << "Enter cost: ";
	stream >> ob.cost;

	return stream;
}

void inventory::store(ofstream& stream){

	stream.write((char* ) this, sizeof(*this));

//	stream.write((char*) item, sizeof(item));
//	stream.write((char*) &onhand, sizeof(onhand));
//	stream.write((char*) &cost, sizeof(cost));

}

void inventory::retrieve(ifstream& stream){

	stream.read((char*) this, sizeof(*this));

//	stream.read((char*) item, sizeof(item));
//	stream.read((char*) &onhand, sizeof(onhand));
//	stream.read((char*) &cost, sizeof(cost));
}

int main(){
	inventory ob1("hammer", 4, 12.55), ob2("nails", 100, 4.95), ob3("poker", 10, 9.85), ob4("axe", 2, 15.99);
	inventory ob5("pliers", 12, 2.95), ob6("wrenches", 22, 13.90);
	inventory temp;
	int item_cnt = 0;

	ofstream fout("inv_db", ios::out | ios::binary);
	if(!fout){
		cout << "Cannot open output file - " << "inv_db" << endl;
		exit(EXIT_FAILURE);
	}

	ob1.store(fout);
	ob2.store(fout);
	ob3.store(fout);
	ob4.store(fout);
	ob5.store(fout);
	ob6.store(fout);

	fout.close();

	ifstream fin("inv_db", ios::in | ios::binary);
	if(!fin){
		cout << "Cannot open input file - " << "inv_db" << endl;
		exit(EXIT_FAILURE);
	}

	while(!fin.eof()){
		fin.read((char*) &temp, sizeof(inventory));
		if(!fin.eof()){
			item_cnt++;
		}
	}
	fin.clear();
	fin.seekg(0, ios::beg);

	if(item_cnt==0){
		cout << "No records found. Exiting..." << endl;
		fin.close();
		exit(EXIT_SUCCESS);
	}else{
		cout << item_cnt << " item records found." << endl;
	}
	int i;
	do{
		cout << "Display record (or enter -1 to quit) #: ";
		cin >> i;
		if(i==-1){
			cout << "Exiting..." << endl;
			break;
		}if(i > item_cnt || i<=0){
			cout << "Wrong record # !" << endl;
			continue;
		}else{
			fin.seekg((i-1)*sizeof(inventory), ios::beg);
			temp.retrieve(fin);
			cout << temp;
		}
	}while(fin.good() && !fin.eof());

	fin.close();

	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	$ ./Ch9_Cumulative_Skills_Check_Exercise1.exe
	6 item records found.
	Display record (or enter -1 to quit) #: 1
	hammer: 4 on hand at $12.55
	Display record (or enter -1 to quit) #: 2
	nails: 100 on hand at $4.95
	Display record (or enter -1 to quit) #: 3
	poker: 10 on hand at $9.85
	Display record (or enter -1 to quit) #: 6
	wrenches: 22 on hand at $13.9
	Display record (or enter -1 to quit) #: 6
	wrenches: 22 on hand at $13.9
	Display record (or enter -1 to quit) #: 7
	Wrong record # !
	Display record (or enter -1 to quit) #: 7
	Wrong record # !
	Display record (or enter -1 to quit) #: 0
	Wrong record # !
	Display record (or enter -1 to quit) #: -1
	Exiting...


*/
