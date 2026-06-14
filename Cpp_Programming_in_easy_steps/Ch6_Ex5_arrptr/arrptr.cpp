/*
 * arrptr.cpp
 *
 *  Created on: 27.12.2013
 *      Author: Joro
 *
 *
 *	  @Chapter: 6 - Pointing to data
 *		@Descr: This chapter demonstrates how to produce efficient C++ programs utilizing pointers and references.
 *	 @Exercise: 5
 *	    @Title: Making arrays of pointers
 *		@Brief: A variable of the regular char data type can be assigned a single character value, but a pointer to constant char array can usefully
 *				be assigned a string of characters. The string is actually stored as an array of characters, with one character per element, but
 *				referencing the char pointer will automatically retrieve the entire string.
 *
 *				This ability to retrieve a string value from a char pointer using just its variable name resembles the way that a string can be
 *				retrieved from a regular char array using its variable name.
 *
 *				Multiple strings can be stored in a constant char pointer array with one string per element. You can event store mutlipple char
 *				pointers arrays in a "master" char pointer - one array per element.
 *
 *	   @Beware: Remember that the final lement of a char array must contain the special "\0" character to designate that array as a string.
 *
 *	   @Rember:	-	Character values must be enclosed in single quotes, but string values must be enclosed in double quotes - even when it is being
 *	   			assigned to char pointer.
 *	   			-	To include a space in char array the assignment must have a space between the quotes as ' ' - two single quotes together ( '' )
 *	   			is regarded as an empty element and causes compile error.
 *
 *
 */


#include <iostream>

using namespace std;

int main(){
	// Declaring two initialized variables - a regular character array, and a character pointer with identical string values
	char letters[8] = {'C','+','+',' ','F','u','n','\0'};
	const char* text = "C++ Fun";

	//Declare and initialize two further character pointer variables, with unique string values
	const char* term = "Element";
	const char* lang = "C++";

	//Declare a character pointer array initialized with three strings values
	const char* ap1[3] = {"Great","Program","Code"};

	//Declare a second character pointer array initialized with three string values - making one of the pointer variables its first element value
	const char* ap2[3] = {lang,"is","Fun"};

	// Declare two "master" character pointer arrays, each initialized with three elements of the char pointer arrays
	const char* ap3[3] = {ap2[0], ap2[1], ap1[0]};
	const char* ap4[3] = {ap1[2], ap2[1], ap2[2]};

	// Output the identical string values of the first wto variables
	cout << letters << endl;
	cout << text << endl;

	// Loop containign a statement to output the value within a character pointer and the iteration number
	for(int i = 0 ; i < 3 ; i++ ){
		cout << term << i << "	";
		// Ouptuut each element value of the four character pointer arrays
		cout << ap1[i] << "	";
		cout << ap2[i] << "	";
		cout << ap3[i] << "	";
		cout << ap4[i] << endl;
	}


	return 0;
}


