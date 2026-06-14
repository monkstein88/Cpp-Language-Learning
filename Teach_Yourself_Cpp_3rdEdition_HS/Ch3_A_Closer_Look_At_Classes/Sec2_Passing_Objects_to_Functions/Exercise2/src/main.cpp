
/*
	Exercise 2.: As you know, when an object is passed to a function, a copy of that object is made.
	Further, when that function returns, the copy's destructor is called. Keeping this in mind, what
	is wrong with the following program?
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

class dyna{
	int *p;
public:
	dyna(int i);
	~dyna(){ free(p); cout << "freeing \n"; }
	int get(){ return *p;}
};

dyna::dyna(int i){
	int *p = (int *) malloc(sizeof(int));
	if(!p){
		cout << "Allocation failure\n";
		exit(EXIT_FAILURE);
	}
	*p = i;
}

// Return negative value of *ob.p
int neg(dyna ob){
	return -ob.get();
}

int main(){
	dyna o(-10);

	cout << o.get() << "\n";
	cout << neg(o) << "\n"; // The 'o' object's '*p' is freed here,

	dyna o2(20);
	cout << o2.get() << "\n";
	cout << neg(o2) << "\n"; // The 'o2' object's '*p' is freed here

	cout << o.get() << "\n"; // The object 'o's' allocated memory for '*p' had been already been freed before. So thi
	cout << neg(o) << "\n";

	return EXIT_SUCCESS;
}

/*
	The problem is that it there is dynamic allocation and freeing of memory that
	occurs in the constructor and destructor sections, respectively, of the 'dyna'
	class. So for the proper functioning & working with the class, both the constructor
	section and destructor (in lesser part) need to happen (execute).

  To be specific here, the issue is not with the passing of the object (when a physical copy of the
	passed object is created inside the scope of the function). Both the function 'neg()' and
	calling the class's own function (.get()), will access the same pointed value '*p' variable.
	The problem is that when 'neg()' finished, it will free the allocated memory for '*p' of object 'o'
	and then in the subsequent calls/references to 'o' will the when the object gets passed to an

	The memory used to hold the integer pointed to by 'p' in object 'o' that is used to call
	'neg()' is freed when the copy of 'o' is destroyed when 'neg()' terminates, even though this
	 memory is still needed by o inside main().
*/
