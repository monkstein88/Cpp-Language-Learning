
/*
	Exercise 3.: A good candidate for a template function is called 'find()'. This function searches an array for an object. It returns
 	either the index of the matching object (if one is found) or -1 if no match is found. Here is the prototype for a specific version of
 	'find()'. Convert 'find()' into a generic function and demonstrate your solution within a program. (The 'size' parameter specifies the
 	number of elements in the array.)

  int find(int object, int *list, int size){
    // ...
  }

*/
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

#define COUNTOF(x) (sizeof(x)/sizeof(x[0]))

template<class t_obj>
int find(t_obj object,  t_obj* list, int size){ // Need to use 'minimum()', as the 'min()' is present already in the C++ library (-lm option)
	int index = -1;

	for(int i=0; i< size; i++){
		if(list[i] == object){
			index = i;
			break;
		}
	}

	return index;
}

int main(){
	char str[] = "This is a string!";
	int int_arr[] = {-3,-2,-1,0,1,2,3,4,5,6,7};
	double dbl_arr[] = {-0.4, -0.33, -0.1, 2.5, 3.14159265 , 115.5435};

	cout << "Find 'a' in 'str[]': " << find('a',str,strlen(str)) << " index" << endl;
	cout << "Find '0' in 'int_arr[]': " << find(0,int_arr,COUNTOF(int_arr)) << " index" << endl;
	cout << "Find '3.1415' in 'int_arr[]': " << find(3.1415,dbl_arr,COUNTOF(dbl_arr)) << " index" << endl;

  return EXIT_SUCCESS;
}


/*
  This program displays the following when ran:

  $ ./Ch11_Sec1_Exercise3.exe
  Find 'a' in 'str[]': 8 index
  Find '0' in 'int_arr[]': 3 index
  Find '3.1415' in 'int_arr[]': -1 index


*/
