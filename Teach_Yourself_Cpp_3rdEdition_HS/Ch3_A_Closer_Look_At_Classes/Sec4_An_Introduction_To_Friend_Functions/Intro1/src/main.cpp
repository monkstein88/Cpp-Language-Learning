
/*
	Intro 1.: There will be times when you want a function to have access to the private members of a class
	without that function actually being a member of that class. Towards this end, C++ supports friend functions
	A friend is not a member of a class but still has access to its private elements. Two reasons that friend
	functions are useful to have to do with operator overloading and the creation of certain types of I/O functions.
	You will have to wait until later to see these uses of a friend in action. However, a third reason for
	friend functions is that there will be times when you want one function to have access to the private members
	of two or more different classes. It is this use that is examined here.
	A friend function is defined as a regular, nonmember function. However, inside the class declaration for
	which it will be a friend, its prototype is also included, prefaced by the keyword 'friend'. To understand
	how this works, examine this short program:
*/

// An example of a friend function.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE macros and exit() function
using namespace std;

class myclass{
	int n, d;
public:
	myclass(int i, int j){ n = i; d = j; }
	// declare a friend of myclass
	friend int isfactor(myclass ob);
};

/*
	Here is friend function definition. It returns true if 'd' is a factor of 'n'. Notice that the keyword friend is
	not used in the definition of 'isfactor()'
*/
int isfactor(myclass ob){
	if(!(ob.n % ob.d))
		return true;
	else
	 return false;
}

int main(){
	myclass ob1(10,2), ob2(13,3);

	if(isfactor(ob1))
		cout << "2 is a factor of 10\n";
	else
		cout << "2 is not a factor of 10\n";

	if(isfactor(ob2))
		cout << "3 is a factor of 13\n";
	else
		cout << "3 is not a factor of 13\n";

	return EXIT_SUCCESS;
}

/*
	In this example, 'myclass' declares its constructor function and the friend 'isfactor()' inside its class declaration.
	Because 'isfactor()' is a friend of 'myclass', 'isfactor()' has access to its private members. This is why, within
	'isfactor()', it is possible to directly refer to 'ob.n' and 'ob.d'.
	It is important to undestand that a friend function is not a member of the class for which it is a friend. Thus, it
	is not possible to call a friend function by using an object name and a class member access operator (a dot or an arrow).
	For example, given the preceding example, this statemenet is wrong:

	ob1.isfactor(); // wrong; isfactor() is not a member function

	Instead, friends are called just like regular functions.
	Although a friend function has knowledge of the private elements of the class for which it is a friend it can only access
	them through an object of the class. That is, unlike a member function of 'myclass', which can refer to 'n' or 'd' directly,
	a friend can access these variables only in conjuction with an object that is declared within or passed to the friend function.

	Note: The preceding paragraph brings up an important side issue. When a member function refers to a private element, it does
	not directly because a member function is executed only in conjuction with an object of that class. Thus, when a member
	function refers to a private element, the compiler knows which object that private element belongs to by the object that is
	linked to the function when that member function is called. However a friend function is not linked to any object. It simply
	is granted access to the private elements of a class. Thus, inside the friend function, it is meaningless to refer to a
	private member without reference to a specific object.

	Because friends are not members of a class, they will typically be passed one or more objects of the calss for which the are
	friends. This is the case with 'isfactor()' . It is passed an object of 'myclass', called 'ob'. However, because 'isfactor()'
	is a friend of 'myclass', it can access 'ob's private elements. If 'isfactor()' had not been made a friend of 'myclass', it
	would not be able to access 'ob.d' or 'ob.n' since 'n' and 'd' are private members of 'myclass'.

	Remember: A friend function is not a member and cannot be qualified by an object name. It must be called just like a normal funcion.

	N.B! A friend funcion is not inherited. That is, when a base class includes a friend function, that friend function is not a
	friend of a derived class.
	One other important point about friend functions is that a friend function can be friends with more than one class.
*/
