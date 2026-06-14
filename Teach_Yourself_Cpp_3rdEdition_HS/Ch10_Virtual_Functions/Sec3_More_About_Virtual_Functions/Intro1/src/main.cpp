
/*
	Intro 1.: As Example 4 from the preceding section illustrates, sometimes when a virtual function is declared in the base class
	there is no meaningful operation for it to perform. This situation is common because often a base class does not define a
	complete class by itself. Instead, it simply supplies a core set of member functions and variables to which the derived class
	supplies remainder. When there is no meaningful action for a base class virtual function to perform, the implication is that
	any derived class 'must' override this function. To ensure that this will occur, C++ supports 'pure virtual functions'.

	A pure virtual function has no definition relative to the base class. Only the function's prototype is included. To make a
	pure virtual function; use this general form:
*/
	virtual type func_name(parameter_list)=0;
/*
	The key part of this declaration is the setting of the function equal to 0. This tells the compiler that no body exists for
	this function relative to the base class. When a virtual function is made pure, it forces any derived class to override it. If
	a derived class does not, a compile-time error results. Thus, making a virtual function pure is a way to guarantee that a
	derived class wil provide its own redefinition.

	When a class contains a t least one pure virtual function, it is referred to as an 'abstract class'.

	Since an abstract class contains at least one function for which no body exists, it is technically, an inclomplete type, and
	no objects of that class can be created. Thus, abstract classes exist only to be inherited. They are neither intended nor able
	to stand alone. It is aimportant to undestand, however, that you can still create a pointer to an abstract class, since it is
	through the use of base class pointers that that run-time polymorphism is achieved. (It is also permissible to have a
	reference to an abstract class.)

	When a virtual function is inherited, so is its virtual nature. This means that when a derived class inherits a virtual
	function from a base class and then the derived class is used as a base for yet another derived class, the virtual function can
	be overriden by the final derived class (as well as the first derived class). For example, if base class 'B' contains a
	virtual function called 'f()', and 'D1' inherits 'B' and 'D2' inherits 'D1', both 'D1' and 'D2' can override 'f()' relative to
	their respective classes.
*/
