/*
 * manipulate.cpp
 *
 *  Created on: 24.12.2013
 *      Author: Joro
 *
 *	   @Tittle: Manipulating input & output
 *		@Brief:	The behavior of input and output streams can be modified using "insertion operators" with the cout and cin functions. Specifying an
 *				integer argument to their width() function sets the steam character width. Where the content does not fill the entire stream width,
 *				a fill character may be specified as the argument to their fill() function to indicate the empty portion. Similarly, the default
 *				precision of six decimal places for floating point numbers can be changed by specifying an integer to their precision() function.
 *				Statements using insertion operators to modify a stream should be made before those using the << or >> operators.
 *
 *				The <iostream> library provides the "manipulators" listed in the table below, which modify a stream using the << or >> operators.
 *
 *				Manipulator:			|		Display:
 *				----------------------------------------------------------------------------------------------------------------------------------
 *				nooboolalpha*			|		Boolean values as 1 or 0
 *				boolalpha				|		Boolean values as "true" or "false
 *				dec*					|		Integers as base 10 (decimal)
 *				hex						|		Integers as base 16 (hexadecimal)
 *				oct						|		Integers as base 8 (octal)
 *				right*					|		Text right-justified in the output width
 *				left					|		Text left-justified in the output width
 *				internal				|		Sign left-justified, number right justified
 *				noshowbase*				|		No prefix indicating numeric base
 *				showbase				|		Prefix indicating numeric base
 *				noshowpoint*			|		Whole number only when a fraction is zero
 *				showpoint				|		Decimal point for all floating point numbers
 *				noshowpos*				|		No + prefix before positive numbers
 *				showpos					|		Prefix positive numbers with a + sing
 *				noskipws*				|		Do not skip whitespace for >> input
 *				skipws					|		Skip whitespace for >> input
 *				fixed*					|		Floating point numbers to six decimal places
 *				scientific				|		Floating point numbers in scientific notation
 *				nouppercase*			|		Scientific as e an hexadecimal number as ff
 *				uppercase				|		Scientific as E an hexadecimal number as FF
 *
 *
 *
 *	   @HotTip: Manipulators marked with an * are the default behaviors.
 *
 *	   @Rember: Insertion operators modify just one stream object - subsequent stream objects use the defaults, unless they too get modified first by
 *	   			insertion operators
 *
 *	   @Beware: Manipulators affect all input or output on that stream. For example, the boolalpha manipulator will display all boolean values on that
 *	   			stream in written form
 *
 */

// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support

// Specify the namespace(s) prefix to use
using namespace std;

/* Program's Entry Point - main function (method) */
int main(){
	// Declare two initialized variables
	bool isTrue = 1;
	int num = 255;

	// Set the width adn fill of an output stream then output a text string on it
	cout.width( 40 );
	cout.fill('.' );
	cout << "Output" << endl; // The filling and width operators (functions work only on this stream) , So this is one stream
	cout << "Output" << endl; // This subsequent object is again on its defaults. This is a seperate (other) stream
	cout << "Output" << endl; // This subsequent object is again on its defaults. Again, this is a seperate (other) stream

	// SEt the precision of an output stream to stop truncation of decimal places - then output a floating point number showing all its decimal places
	cout.precision( 11 );
	cout << "Pi: " << 3.1415926536 << endl;// So this is one stream (seperate from the others)

	// Use manipulators to output the variable values in modified formats
	cout << isTrue << ": " << boolalpha << isTrue << endl;// So this is one stream
	cout << num << ": " << hex << uppercase << showbase << num << endl; //This is a seperate (other) stream


	// Every stream is an individual

	return 0; // Final return statement - returns zero integer to the operating system
	  	  // as required by the main function declaration.
}
