
/*
	Example 2.: While multiline comments cannot be nested, it is possible to nest a single-line comment within a multiline comment. For
	example, this is perfectly valid:
*/


/*
	This is a multiline comment inside of which // is nested a single-line comment. Here is the end of the multiline comment.
*/
#include <iostream>
using namespace std;

int main(){
	/*
		This a mulililine expression, in which, // a single line comment is inserted.
	 	This is the end of the multiline comment.
	*/

	return 0;
}

// The fact that the single line comments can be inserted in the multiline ones,
// eases the "comenting" of certain sections/lines of codes when debugging.
