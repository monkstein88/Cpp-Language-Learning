/*
	Exercise 3.: Create a generic class, called 'input', that does the following when its constructor is called:
		> prompts the user for input,
		> inputs the data entered by the user, and
		> reprompts if the data is not within a predetermined range.

	Objects of type 'input' should be declared like this:

	input ob("prompt message", min_value, max_value)

	Here 'prompt message' is message that prompt for input. The minimun and maximum acceptable values are specified by 'min_value' and
	'max_value', respectively. (Note: the type of data entered by the user will be the same as the type of 'min_value' and 'max_value'.)

*/

// A simple generic type 'queue' class
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <cstring>
using namespace std;

template <class val_type>
class input{
	val_type value;
public:
	// Constructor
	input(const char* user_prompt, val_type min_val, val_type max_val);
	// Destructor
	~input();
};

// Constructor definition - for 'input'
template <class val_type>
input<val_type>::input(const char* usr_temp, val_type min_value, val_type max_value){
	val_type temp;

	do{
		cout << usr_temp;
		cin >> temp;
	}while((temp < min_value) || (temp > max_value));
}

// Destructor definiton - for 'input'
template <class val_type>
input<val_type>::~input(){
	; // Do nothing.
}

int main(){

	input<int> ob_int("Enter an integer between -100 and 200: ", -100, 200);
	input<char> ob_char("Enter an character between 'a' and 'z': ", 'a', 'z');

	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	$ ./Ch11_Sec2_Exercise3.exe
	Enter an integer between -100 and 200: -330
	Enter an integer between -100 and 200: -220
	Enter an integer between -100 and 200: -101
	Enter an integer between -100 and 200: +3000
	Enter an integer between -100 and 200: 300
	Enter an integer between -100 and 200: 200
	Enter an character between 'a' and 'z': 1
	Enter an character between 'a' and 'z': 2
	Enter an character between 'a' and 'z': 3
	Enter an character between 'a' and 'z': !
	Enter an character between 'a' and 'z': '
	Enter an character between 'a' and 'z': ;
	Enter an character between 'a' and 'z': ''
	Enter an character between 'a' and 'z': Enter an character between 'a' and 'z': \
	Enter an character between 'a' and 'z': g


*/
