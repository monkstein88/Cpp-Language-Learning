/*
 * sub.cpp
 *
 *  Created on: 23.12.2013
 *      Author: Joro
 *
 *		@Theme: Replacing substrings
 *      @Brief: The <string> library contains a number of useful functions to manipulate substrings. A string can be inserted into another string
 *      		using the insert() function. This requires the index position at which the string should be inserted as its first argument, and the
 *      		string value to be inserted as its second argument.
 *
 *				Conversely, a substring can be removed from a string using the erase() function. This requires the index position at which it should
 *				begin erasing as its first argument, and the number of characters to be erased as its second argument.
 *
 *				The replace() function neatly combines the erase() and insert() functions to both remove a substring and insert a replacement. It
 *				requires three arguments specifying the position at which it should begin erasing, the number of characters to be erased, and the
 *				replacement string to be inserted at that position.
 *
 *				A substqring can be copied from a string using the substr() function, stating the index position at which it should begin copying
 *				as its first argument, and the number of characters to be copied as its second argument.
 *
 *				The character at any specified position within a string can be copied using the at() function, which requires the index position
 *				as its argument. The final character in a string always has an element index number one less than the lenght of the string - because
 *				index  numbering starts at zero, not one.
 *
 *	    @HotTip: -	The insert() function can optionally have a third and fourth argument - specifying the position in the substring at which to begin
 *	  			copying, and the number of characters to be copied.
 *	  			 -	The replace() function can optionally have a forth and fifth argument - specifying the position in the substring at which to begin
 *	  			copying, and the number of characters to be copied.
 *
 *
 */


// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support
#include <string> // Object oriented library (class library) providing string functionality (it is a part of the std namespace) - Include string support

// Specify the namespace(s) prefix to use
using namespace std;

/* Program's Entry Point - main function (method) */
int main(){
	// Initialize string variable declaration, and a statement outputing the string variable value
	string text = "I do like the seaside";
	cout << "Original: " << text << endl;

	// Insert  a substring into the variable string (starting) at position ten , then output the modifed string
	text.insert(10,"to be beside ");
	cout << "Inserted: " << text << endl;

	// Erase th characters from the modified string starting at index position two, then output the revised string
	text.erase(2,3 );
	cout << "Erased: " << text << endl;

	// Remove 25 characters at index position seven, insert a replacement substring, then output the reviesed string again
	text.replace(7, 25, "strolling by the sea");
	cout << "Replaced: " << text << endl;

	// Output copied (extract) nine characters starting at position seven. Output the last character in the string
	cout << "Copy: " << text.substr(7,9) << endl;
	cout << "Last character: " << text.at(text.length()-1);

	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}

