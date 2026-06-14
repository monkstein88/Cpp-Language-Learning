/*
 * object.cpp
 *
 *  Created on: 29.12.2013
 *      Author: Joro
 *
 *
 *
 *	  @Chapter: 7 - Creating classes and objects
 *		@Descr: This chapter introduces the topics of encapsulation and inheritance - the first two principles of C++ Object Oriented Programming
 *	 @Exercise: 1
 *	    @Title: Encapsulating data
 *		@Brief: A class is a data structure that can contain both variables and functions in a single entity. These are collectively known as its
 *				"members", and the functions are known as its "methods".
 *
 *				Access to class members from outside the class is controlled by "access specifiers" in the class declaration. Typically these will
 *				deny access to the variable members but allow access to methods that can store and retrieve data from those variable members. This
 *				technique of "data hiding" ensures that stored data is safely encapsulated within the class variable members and is the form
 *				principle of Object Oriented Programming (OOP).
 *
 *				A class declaration begins with the "class" keyword, followed by a space, then a programmer-specified name -adhering to the usual C++
 *				naming conventions but beginning in uppercase. Next come the access specifiers and class members, contained within a pair of braces.
 *				Every class declaration must end with  semicolon after the closing brace - so the class declaration syntax looks like this:
 *
 *				class ClassName{
 *					access specifier:
 *						member1 ;
 *						member2 ;
 *					access specifier:
 *						member3 ;
 *						member4 ;
 *				};
 *
 *
 *				An access specifier may be one of the keywords "public", "private" or "protected" to specify access rights for its listed members:
 *					- Public members are accessible from any place where the class is visible
 *					- Private members are accessible only to other members of the of the same class
 *					- Protected members are accessible only to other members of the same class and to members of classes derived from that class
 *
 *
 *				By default, all class members have private access - so any members that appear in the class declaration without an access specifier
 *				will have private access
 *
 *				Any real-world object can be defined by its attributes and by its actions. For example, a dog has attributes such as age, weight, and
 *				color and actions it can perform such as bark. The class mechanism in C++ provides a way to create a virtual dog object within a
 *				program, where the variable members of a class can represent its attributes and the methods represent its actions:
 *
 *				class Dog{
 *					private: // The default access level
 *						int age, weight;
 *						string color;
 *					public:
 *						void bark();
 *						// ... Plus methods to store/retrieve data.
 *				}
 *
 *				It is important to recognize that a class declaration only defines a data structure - in order to create an object you must you must
 *				declare an "instance" of that data structure. This is achieved in just the same way that instances are  declared of regular C++ data
 *				types:
 *
 *				int num; // Creates an instance named "num" of the regular C++ int data type
 *
 *				Dog fido; // Creates an instance named "fido" of the programmer-defined Dog data structure.
 *
 *				Alternatively, an instance object can be created by specifying its name between the class declaration's closing brace and its final
 *				semicolon. Multiple instances can be created this way by specifying a comma-seperated list of object names. For example, the class
 *				declaration listed below creates four instance objects of the Dog class named "fido", "pooch', "rex", and "sammy".
 *
 *
 *				class Dog{
 *						int age, weight;
 *						string color;
 *					public:
 *						void bark();
 *						// ... Plus methods to store/retrieve data
 *				} fido, pooch , rex, sammy;
 *
 *				The principle of encapsulating in C++ programming describes the grouping together of data and functionality in class members - age,
 *				weight, color attributes and bark action in the Dog class.
 *
 *
 *
 *
 *
 *	   @HotTip: - It is conventional to begin class names with an uppercase character and object names with lowercase.
 *
 *
 *	   @Rember:	- Derived classes, which use the protected access specifier, are introduced later in this chapter.
 *	   			- While a program class cannot perfectly emulate a real-world object the aim is to encapsulate all relevant attributes and actions.
 *
 *
 *
 */

// There's no code for this exercise

