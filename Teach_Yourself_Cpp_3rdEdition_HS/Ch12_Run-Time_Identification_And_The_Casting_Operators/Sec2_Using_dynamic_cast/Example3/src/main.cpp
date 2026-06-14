
/*
	Example 3.: The 'dynamic_cast' operator can also be used with template classes. For example, the following program reworks the template
	class from Example 5 in the preceding section so that it uses 'dynamic_cast' to determine the type of object returned by the
	'generator()' function.
*/

// 'dynamic_cast' can be used with templates, too.
#include <iostream>
#include <typeinfo>
#include <cmath>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

template <class T> class Num{
public:
	T x;
	Num(T i){ x = i; }
	virtual T get_val(){ return x; }
};


template <class T> class Square : public Num<T>{
public:
	Square(T i) : Num<T>(i) {};
	T get_val() { return (this->x)*(this->x); }
};

template <class T>
class Sqr_root : public Num<T>{
public:
	Sqr_root(T i) : Num<T>(i) {}
	T get_val(){ return sqrt((double)this->x); }
};

// A factory for objects derived from 'Num'.
Num<double> *generator(){
	switch(rand()%2){
		case(0) : return new Square<double> (rand() % 100);
		case(1) : return new Sqr_root<double> (rand() % 100);
	}
	return NULL;
}


int main(){
	Num<double> ob1(10), *p1;
	Square<double> ob2(100.0), *p2;
	Sqr_root<double> ob3(999.2), *p3;
	int i;

	cout << "Generate some objects.\n";
	for(i=0; i<10; i++){
		p1 = generator();

		p2 = dynamic_cast<Square<double> *> (p1);
		if(p2){
			cout << "Square object: ";
		}
		p3 = dynamic_cast<Sqr_root<double> *> (p1);
		if(p3){
			cout << "Sqr_root object: ";
		}

		cout << "Value is: " << p1->get_val();
		cout << endl;
	}

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch12_Sec2_Example3.exe
	Generate some objects.
	Sqr_root object: Value is: 8.18535
	Square object: Value is: 0
	Sqr_root object: Value is: 4.89898
	Square object: Value is: 3364
	Square object: Value is: 4096
	Sqr_root object: Value is: 6.7082
	Sqr_root object: Value is: 5.19615
	Sqr_root object: Value is: 9.53939
	Sqr_root object: Value is: 6.48074
	Sqr_root object: Value is: 6


*/
