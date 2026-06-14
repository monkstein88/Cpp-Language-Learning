/*
 * ops.h - Header file
 *
 *  Created on: 13.01.2014
 *      Author: Joro
 *
 *
 *
 */

#ifndef OPS_H_
#define OPS_H_

// Declaring a class named "Calculator"
class Calculator{
	public: // In the public section - declare the class methods
		Calculator(); // (Constructor) To set initial status.
		void launch(); // To display initial instructions
		void readInput() ; // To get expression
		void writeOutput(); // To display result.
		bool run();			// (Accessor) To get current status
	private: // In the private section - declare variables (private)
		double num1, num2; // To store input numbers.
		char oper; // To store input operator.
		bool status; // To store current
};




#endif /* OPS_H_ */
