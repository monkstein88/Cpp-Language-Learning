/*
 * optimize.cpp - Functions can call themselves recursively, to repeatedly execute the statements statements contained in their
 * function body - much like a loop. As with loops, a recursive function must contain an incrementer and a conditional test to call
 * itself again or stop repeating when a condition is met. The syntax of a recursive function look like this
 *
 * return-data-type function-name(argument-list){
 * 		statments-to-be-executed;
 * 		incrementer;
 * 		conditional-test-to-recall-or-exit;
 *
 * }
 *
 *  Created on: 22.12.2013
 *      Author: Joro
 */

// Include C++ library classes
#include <iostream> // Object oriented library that provides input and output functionality using streams

// Specify the namespace(s) prefix to use
using namespace std ;

// Declare two function prototypes that will both be recursive functions
int computeFactorials(int, int);
inline int factorial_opt(int n){ return ( (n == 1) ? 1 : (factorial_opt(n-1) * n) ); }
int factorial(int);

/* Program's Entry Point - main function (method) */
int main(){

	computeFactorials(1,8);



	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}

// Definition of the first function prototype - a recursive function
int computeFactorials(int num, int max){
	cout << "Factorial of " << num << ": ";
	cout << factorial_opt(num) << endl; // Statements
	num++;							// Incrementer
	if(num > max) return 0;			// Exit...
	else computeFactorials(num, max);// or call again
	return 0;
}

// Define the second (recursive) function for the second prototype, looping recursively to find the factorial of just one value
int factorial(int n){
	int result;
	if(n == 1) result = 1; // Exit or...
	else result = (factorial(n-1) * n);
	return result;
}


// Optimizing upon the factorial function, The function does not need a variable if written with ternaty operator
// It then contains just one line (one statement) so its definition can replace the prototype declaration as an "inline"
//inline int factorial_opt(int n){
//	return ( (n == 1) ? 1 : (factorial_opt(n-1) * n) );
//}


