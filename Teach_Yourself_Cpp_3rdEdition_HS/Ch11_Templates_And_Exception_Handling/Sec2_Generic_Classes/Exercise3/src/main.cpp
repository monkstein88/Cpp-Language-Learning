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

#define MAX_STR_SIZE (80)

template <class val_type>
class input{
	char user_prompt[MAX_STR_SIZE];
	val_type min_value;
	val_type max_value;
	val_type curr_value;
public:
	// Constructor
	input(const char* user_prompt, val_type min_val, val_type max_val);
	// Destructor
	~input();
};

// Constructor definition - for 'input'
template <class val_type>
input<val_type>::input(const char* usr_temp, val_type min_val, val_type max_val){

	strcpy(user_prompt, usr_temp);
	min_value = min_val;
	max_value = max_val;
	do{
		cout << user_prompt;
		cin >> curr_value;
	}while((curr_value < min_value) || (curr_value > max_value));
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
	Enter an integer between -100 and 200: 220
	Enter an integer between -100 and 200: 333
	Enter an integer between -100 and 200: -120
	Enter an integer between -100 and 200: 100
	Enter an character between 'a' and 'z': K
	Enter an character between 'a' and 'z': Z
	Enter an character between 'a' and 'z': !
	Enter an character between 'a' and 'z': :
	Enter an character between 'a' and 'z': ""
	Enter an character between 'a' and 'z': Enter an character between 'a' and 'z': `
	Enter an character between 'a' and 'z': g

*/
