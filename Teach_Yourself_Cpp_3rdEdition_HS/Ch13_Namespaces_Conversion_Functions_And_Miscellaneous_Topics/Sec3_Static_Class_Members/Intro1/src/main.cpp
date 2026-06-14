
/*
	Intro 1.: It is possible for a class member variable to be declared as 'static'. By using 'static' member variables, you can bypass a
	number of rather tricky problems. When you declare a member variable as 'static', you cause only one copy of that varriable to exist -
	no matter how many objects of that class are created. Each object simply shares that one variable. Remember, for a normal member
	variable, each time an object is created, a new copy of that variable is created, and that copy is accessible only by that object. (That
	is, when normal variables are used, each object possesses its own copies.) However, there is only one copy of a 'static' member variable,
	and all objects of its class share it. Also, the same 'static' variable will be used by any classes derived from the class that contains
	the 'static' member.

	Although it might seem odd when you first think about it, a 'static' member variable exists 'before' any object of its class is created.
	In essence, a 'static' class member is a global variable that simply has its scope restricted to the class in which it is declared. In
	fact, as you will see in one of the following examples, it is actually possible to access a 'static' member variable independent of any
	object.

	When you declare a 'static' data member within a class, you are not defining it. Instead, you must provide a definiton for it elsewhere,
	outside the class. To do this, you redeclare the 'static' variable, using the scope resolution operator to identify which class it
	belongs to.

	All 'static' member variables are initializaed to 0 by default. However, you can give a 'static' class variable an initial value of your
	choosing, if you like.

	Keep in mind that the principal reason 'static' member variables are supported by C++ is to avoid the need for global variables. As you
	can surmise, classes that rely upon global variables almost always violate the encapsulation principle that is so fundamental to OOP and
	C++.

	It is also possible for a member function to be declared as 'static', but this usage is not common. A member function declared as
	'static' can access only other 'static' members of its class (Of course, a 'static' member function can access non-'static' global data
	and functions.) A 'static' member functions cannot be declared as 'const' or 'volatile'. A 'static' member function can be invoked by an
	object of its class, or it can be called independent of any object, via the class name and the scope resolution operator - '::'.
*/
