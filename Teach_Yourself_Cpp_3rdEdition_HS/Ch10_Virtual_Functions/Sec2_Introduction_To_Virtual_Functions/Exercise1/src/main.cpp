
/*
	Exercise 1.: Write a program that creates a base class called 'num'. Have this class hold an integer value and contain a
	virtual function called 'shownum()'. Create two derived classes called 'outhex' and 'ouoct' that inherit 'num'. Have the
	derived class override 'shownum()' so that it displays the value in hexadecimal and octal, respectively.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class num{
protected:
	int val;
public:
	num(int x){ val = x;}
	virtual void shownum(){ // Show number in the default (dec) format
		cout.setf(ios::dec, ios::basefield); //
		cout.unsetf(ios::showbase);
		cout << val;
	}
};

class outhex : public num{
public:
	outhex(int x) : num(x) {}
	void shownum(){
		cout.setf(ios::hex, ios::basefield); //
		cout.setf(ios::showbase);
		cout << val;
	}
};

class outoct : public num{
public:
	outoct(int x) : num(x) {}
	void shownum(){
		cout.setf(ios::oct, ios::basefield); //
		cout.setf(ios::showbase);
		cout << val;
	}
};

int main(){
	num* p;
	num d_num(16);
	outhex d_hex(16);
	outoct d_oct(16);

	p = &d_num;
	cout << " Value in decimal: "; p->shownum();  cout << '\n';

	p = &d_hex;
	cout << " Value in hexadecimal: "; p->shownum(); cout << '\n';

	p = &d_oct;
	cout << " Value in octal: "; p->shownum(); cout << '\n';

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch10_Sec2_Exercise1
	 Value in decimal: 16
	 Value in hexadecimal: 0x10
	 Value in octal: 020

	 Official answer:

 	# include <iostream>
 	using namespace std;

 	class num
 	{
 		public :
 		int i ;
 		num ( int x ) { i = x ; }
 		virtual void shownum () { cout << i << ’\ n ’; }
 	};

 	class outhex : public num
 	{
 		public :
 		outhex ( int n ) : num ( n ) {}
 		void shownum () { cout << hex << i << ’\ n ’; }
 	};

 	class outoct : public num
 	{
 		public :
 		outoct ( int n ) : num ( n ) {}
 		void shownum () { cout << oct << i << ’\ n ’; }
 	};

 	int main ()
 	{
 		outoct o (10) ;
 		outhex h (20) ;
 		o.shownum () ;
 		h.shownum () ;
 		return 0;
 	}

 	// My comment: In this official answer - what is used is the simplest case of overriding a virtual function - where a member
 	// function that is declared within a base class, is later redefined by a derived class. Where a class containing a virtual
 	// function is inherited, the derived class redefines the virtual function relative to the derived class. And each class has
 	// its own version of the of the same function and uses it when called in conjuction with its own class - statically and at a
 	// compile time (no pointer run-time polymorphism here)
*/
