
/*
	Example 3.: You must exerise some care when assigning one object to another. For example, here is
	the 'strtype' class developed in Chapter 2, along with a short 'main()'. See if you can find an
	error in this program
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
#include <cstring>
using namespace std;

class strtype{
	char *p;
	int len;
public:
	strtype(char *ptr);
	~strtype();
	void show();
};

strtype::strtype(char *ptr){
	len = strlen(ptr);
	p = (char *) malloc(len+1);
	if(!p){
		cout << "Allocation error\n";
		exit(EXIT_FAILURE);
	}
	strcpy(p, ptr);
}

strtype::~strtype(){
	cout << "Freeing p\n";
	free(p);
}

void strtype::show(){
	cout << p << " - length: " << len;
	cout << "\n";
}

int main(){
	strtype s1((char *)"This is a test."), s2((char *)"I like C++.");
	s1.show();
	s2.show();

	// assign s1 to s2 - - this generates an error (when executed)
	s2 = s1;

	s1.show();
	s2.show();

	return EXIT_SUCCESS;
}

/*
	The problem with this program is quite insidious. When 's1' and 's2' are created, both
	allocate memory to hold their respective strings. A pointer to each object's allocated
	memory is stored in 'p'. When a 'strtype' object is destroyed, this memory is released.
	However, when 's1' is assigned to 's2', 's2's' 'p' now points  to the same memory as
	's1's' 'p'. Thus, when these objects are destroyed, the memory pointed to by 's2's' 'p'
	is freed twice and the memor originally pointed to by 's2's 'p' is not freed at all.

	While benign in this context, this sort of problem occuring in real program will cause
	the dynamic allocation system to fail, and possibly even cause a program crash. Ass you
	can see from the preceding example, when assigning one object to another, you must make
	sure you are not destroying information that may be needed later.
*/
