
/*
	Intro 1.: A 'virtual function' is a member function that is declared within a base class and redefined by a derived class. To
	create a virtual function, precede the function's declaration with the keyword 'virtual'. When a class containing a virtual
	function is inherited, the derived class redefines the virtual function relative to the derived class. In essence, virtual
	functions implement the "one interface, multiple methods" philosophy that underlies polymorphism. The virtual function within
	the base class defines the 'form' of the 'interface' to that function. Each redefinition of the virtual function by a derived
	class implements its operation as it relates specifically to the derived class. That is, the redifinition creates a 'specific
	method'. When a virtual function is redefined by a derived class, the keyword 'virtual' is not needed.

	A virtual function can be called just like any other member function. However, what makes a virtual function interesting - and
	capable of supporting run-time polymorphism - is what happens when a virtual function is called through a pointer. From the
	preceding section you know that a base class pointer can be used to point to a derived class object. When a base pointer
	points to a derived object that contains a virtual function and that virtual function is called through that pointer, C++
	determines which version of that function will be executed based upon the 'type of object being pointed to' by the pointer.
	And, this determination is made at 'run-time'. Put differently, it is the type of the object pointed to at the time when the
	call occurs that determines which version of the virtual function will be executed. Therefore, if two or more different
	classes are derived from a base class that contains a virtual function, then when different objects are pointed to by a base
	pointer, different versions of the viritual function are executed. This process is the way that run-time polymorphism is
	achieved. In fact, a class that contains a virtual function is referred to as a 'polymorphic class'.
*/
