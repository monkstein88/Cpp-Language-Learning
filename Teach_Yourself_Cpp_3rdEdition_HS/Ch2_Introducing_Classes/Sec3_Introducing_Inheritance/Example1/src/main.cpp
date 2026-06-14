
/*
	Example 1.: Here is a program that defines a generic base class called 'fruit'
	that describes certain characteristics of fruit. This class is inherited by
	two derived classes 'Apple' and 'Orange'. These classes supply specific information
	to 'fruit' that

	An example of class inheritance.

	A base class is created defining the general traits asociated with all fruit.
	It is left to the derived classes to supply those traits that are specific to
	each individual case.

	This program also illustrates an important fact about inheritance. A base class
	is not exclusively "owned" by a derived class. A base class can be inherited by
	any number of classes.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

enum yn {no, yes};
enum color {red, yellow, green, orange};

void out(enum yn x);

char c[][25] = {"red", "yellow", "green", "orange"}; // change from char "*c[]" to "c[][25]" so it can compile

// Generic fruit class.
class fruit{
// in this base, all elements are public
public:
	enum yn annual;
	enum yn perennial;
	enum yn tree;
	enum yn tropical;
	enum color clr;
	char name[40];
};

// Derive Apple class.
class Apple: public fruit{
	enum yn cooking;
	enum yn crunchy;
	enum yn eating;
public:
	void seta(char *n, enum color c, enum yn ck, enum yn crchy, enum yn e);
	void show();
};

// Derive Orange class
class Orange: public fruit{
	enum yn juice;
	enum yn sour;
	enum yn eating;
public:
	void seto(char *n, enum color c, enum yn j, enum yn sr, enum yn e);
	void show();
};

int main(){
	Apple a1, a2;
	Orange o1, o2;

	a1.seta((char *)"Red Delicious", red, no, yes, yes);
	a2.seta((char *)"Jonathan", red , yes, no, yes);

	o1.seto((char *)"Navel", orange, no, no, yes);
	o2.seto((char *)"Valencia", orange, yes, yes, no);

	a1.show();
	a2.show();

	o1.show();
	o2.show();

	return EXIT_SUCCESS;
}

void Apple::seta(char *n, enum color c, enum yn ck, enum yn crchy, enum yn e){
	strcpy(name, n);
	annual = no;
	perennial = yes;
	tree = yes;
	tropical = no;
	clr = c;
	cooking = ck;
	crunchy = crchy;
	eating = e;
}

void Apple::show(){
	cout << name << " apple is: " << "\n";
	cout << "Annual: "; out(annual);
	cout << "Perenial: "; out(perennial);
	cout << "Tree: "; out(tree);
	cout << "Tropical: "; out(tropical);
	cout << "Color: " << c[clr] << "\n";
	cout << "Good for cooking: "; out(cooking);
	cout << "Crunchy: "; out(crunchy);
	cout << "Good for eating: "; out(eating);
	cout << "\n";
}

void Orange::seto(char *n, enum color c, enum yn j, enum yn sr, enum yn e){
	strcpy(name, n);
	annual = no;
	perennial = yes;
	tree = yes;
	tropical = yes;
	clr = c;
	juice = j;
	sour = sr;
	eating = e;
}

void Orange::show(){
	cout << name << " orange is: " << "\n";
	cout << "Annual: "; out(annual);
	cout << "Perennial: "; out(perennial);
	cout << "Tree: " ; out(tree);
	cout << "Tropical: " ; out(tropical);
	cout << "Color: " << c[clr] << "\n";
	cout << "Good for juice: "; out(juice);
	cout << "Sour: "; out(sour);
	cout << "Good for eating: "; out(eating);
	cout << "\n";
}

void out(enum yn x){
	if(x==no)
		cout << "no\n";
	else
		cout << "yes\n";
}
