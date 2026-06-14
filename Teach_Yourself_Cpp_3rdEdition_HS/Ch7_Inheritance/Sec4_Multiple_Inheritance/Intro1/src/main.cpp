
/*
	Intro 1.: There are two ways that a derived class can inherited more than one base class. First, a derived class can be used as
	a base class for another derived class, creating a multilevel class hierarchy. In this case, the original base class is said to
	be an 'indirect' base class of the second derived class. (Keep in mind that any class - no matter how it is created - can be
	used as a base class.) Second, a derived class can directly inherit more than one base class. In this situation, two or more
	base classes are combined to help create the derived class. There are several issues that arise when multiple base classes are
	involved, and these issues are examined in this section.

	When a base class is used to derive a class that is used as a base class for another derived class, the constructor functions of
	all three classes are called in order of derivation. (This is a generalization of the principle you learned earlier in this
	chapter.) Also, destructor functions are called in reverse order. Thus, if a class 'B1' is inherited by 'D1', and 'D1' is
	inherited by 'D2', 'B1's constructor is called first, followed by 'D1's, followed by 'D2's. The destructors are called in
	reverse order.

	When a derived class directly inherits multiple base classes, it uses this expanded declaration:

	class derived_class_name : access base1, access base2, ..., access baseN{
		// ... body of class
	};

	Here 'base1' through 'baseN' are the base class names and 'access' is the access specifier, which can be different for each base
	class. When multiple base classes are inherited, constructors are executed in the order, left to right, that the base classes
	are specified. Destructors are executed in the opposite order.

	When a class inherits multiple base classes that have constructors that require arguments, the derived class passes the
	necessary arguments to them by using this expanded form of the derived class' constructor function:

	derived_constructor(arg_list) : base1(arg_list), base2(arg_list), ..., baseN(arg_list){
		// body of derived class constructor
	}

	Here 'base1' through 'baseN' are the names of the base classes.

	When a derived class inherits a hierarchy of classes, each derived class in the chain must pass back to its preceding base
	any arguments it needs.
*/
