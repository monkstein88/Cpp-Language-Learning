/*
 * vector.cpp
 *
 *  Created on: 18.12.2013
 *      Author: Joro
 */

/* Preprocessor Directives: */
// Include C++ library classes
#include <iostream> // Object oriented library that provides input and output functionality using streams
#include <vector> // Object oriented library that provides functionality to use dynamic arrays (vectors)

// Specify the namespace prefix to use
using namespace std;


/* Program's Entry Point - main function (method) */
int main(){

	vector <int> vec(3, 100); // initialize a vector array of the three elements of the value 100
	// vector arrays have the advantage over regular arrays, that their size can be changed 
	// as the program requires

	cout << "Vector size: " << vec.size() << endl;
	cout << "Is empty?: " << vec.empty() << endl;
	cout << "Front (1st) element: " << vec.front() << endl;
	cout << "First element: " << vec.at(0) << endl; 
	cout << "Second element: " << vec[1] << endl; 

	vec.pop_back(); // Remove final element
	cout << "Vector size: " << vec.size() << endl;
	cout << "Final element: " << vec.back() << endl;

	vec.clear(); // Remove all emenents
	cout << "Vector size: " << vec.size() << endl;

	vec.push_back(200); // Add (append at the end) an element
	cout << "Vector size: " << vec.size() << endl;
	cout << "First element: " << vec.front() << endl;
	return 0;
}


