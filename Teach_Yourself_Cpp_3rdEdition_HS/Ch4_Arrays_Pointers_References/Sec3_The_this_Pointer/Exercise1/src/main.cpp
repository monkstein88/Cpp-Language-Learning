
/*
	Exercise 1.: Given the following program, convert all appropriate references to class members to
	explicit 'this' pointer references.

	#include <iostream>
	#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
	using namespace std;

	class myclass{
		int a, b;
	public:
		myclass(int n, int m){ a = n; b = m; }
		int add(){ return a+b; }
		void show();
	};

	void myclass:show(){
		int t;

		t = add(); // call member function
		cout << t << "\n";
	}

	int main(){
		myclass ob(10, 14);

		ob.show();

		return EXIT_SUCCESS;
	}


*/


#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass{
	int a, b;
public:
	myclass(int n, int m){ this->a = n; this->b = m; }
	int add(){ return (this->a + this->b); }
	void show();
};

void myclass::show(){
	int t;

	t = this->add(); // call member function
	cout << t << "\n";
}

int main(){
	myclass ob(10, 14);

	ob.show();

	return EXIT_SUCCESS;
}
