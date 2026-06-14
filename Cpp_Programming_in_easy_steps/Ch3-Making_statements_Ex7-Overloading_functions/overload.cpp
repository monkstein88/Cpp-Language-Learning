/*
 * overload.cpp - function "overloading" allows functions of the same name to coexist in the same program
 * provided their arguments differ in number, data type, or both number and data type.
 *
 *  Created on: 22.12.2013
 *      Author: Joro
 */
// Include C++ library classes
#include <iostream> // Object oriented library that provides input and output functionality using streams

// Specify the namespace(s) prefix to use
using namespace std;

// Declare a single argument variable funcion (prototype)
float computeArea(float);

// Declaring two overloaded function prototypes having different arguments ot the first prototype
float computeArea(float, float);
float computeArea(char, float, float);

/* Program's Entry Point - main function (method) */
int main(){
	// Declare two variables
	float num, area;
	// Prompt the user for input
	cout << "Enter dimension in feet: ";
	cin >> num;

	// Call the first function and output the returned value
	area = computeArea(num);
	cout << "Circle: Area = " << area << " sq.ft" << endl;

	area = computeArea(num,num);
	cout << "Square: Area = " << area << " sq.ft" << endl;

	area = computeArea('T', num,num);
	cout << "Triangle: Area = " << area << " sq.ft" << endl;

	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}






// Define the first function that receives just one argument
float computeArea(float diameter){
	float radius = (diameter /2);
	return(3.141593 * (radius*radius));
}

// Define the overloaded functions that receives different arguments
float computeArea(float width, float height){
	return (width * height);
}

float computeArea(char letter, float width, float height){
	return((width / 2) * height );
}


