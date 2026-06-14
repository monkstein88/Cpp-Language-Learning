/*
 * ops.cpp - This is an implementation file - containing definitions for the Calculator class methods declared in the "ops.h" header file
 *
 *  Created on: 13.01.2014
 *      Author: Joro
 *
 *
 */

//
#include  "ops.h" // Reference header file. Use the quotes - "" , not the < > to include the (user-made) header
#include <iostream>


using namespace std;


// Definition for methods in the header file
Calculator::Calculator(){
	status = true; // Initialize status
}

void Calculator::launch(){ // Display instructions
	cout << endl << "*** SUM CALCULATOR ***" << endl;
	cout << "Enter a number, an operator (+,-,*,/), and another number." << endl <<
			"Hit Return to calculate. Etner zero to exit." << endl;
}


void Calculator::readInput(){ 	// Get expression
	cout << ">" ; cin >> num1; 	// Get the 1st number
	if(num1 == 0){ 				// Exit if it's zero.
		status = false;
	}else{ 						// Or get the rest.
		cin >> oper ; cin >> num2;
	}
}

void Calculator::writeOutput(){
	if(status){ 													// If continuing
		switch(oper){												// Show result.
			case '+' : {cout << (num1 + num2) << endl; break;}
			case '-' : {cout << (num1 - num2) << endl; break;}
			case '*' : {cout << (num1 * num2) << endl; break;}
			case '/' : {if(num2 != 0){
						  cout << (num1 / num2) <<endl;
							}else{
						  cout << "Cannot devide by zero" << endl;
							}
							break;
			}
			}
	}
}


bool Calculator::run(){ // Get the current status
	return status;
}

