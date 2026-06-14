
/*
	Example 4.: As stated, even though public members of a base class become private members of a derived class when inherited using
	the 'private' specifier, they are still accesible 'within' the derived class. For example, here is a *fixed* version of the
	preceding program:
*/

// This program is fixed.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
	int x;
public:
	void setx(int n){ x = n; }
	void showx(){ cout << x << '\n'; }
};

// Inherit 'base' as private
class derived : private base{
	int y;
public:
	void setxy(int n, int m){ setx(n); y = m; }
	void showxy(){ showx(); cout << y << '\n'; }
};

int main(){
	derived ob;

	ob.setxy(10, 20);

	ob.showxy();

	return EXIT_SUCCESS;
}

/*
	In this case, the functions 'setx()' and 'showx()' are accessed inside the derived class, which is perfectly legal because they
	are private members of that class.
*/
