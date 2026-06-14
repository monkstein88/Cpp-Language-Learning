
/*
 	Example 4.: The following program creates a Boolean variable called 'outcome' and assigns it the value 'false'. It then uses this
	variable in an if statement.
*/

#include <iostream>
using namespace std;

int main(){
	bool outcome;

	outcome = false;

	if(outcome)
		cout << "true";
	else
		cout << "false";

	return 0;
}
/*
	 As you should expect , the program displays 'false'
*/
