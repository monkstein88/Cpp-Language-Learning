
/*
	Intro 1.: It is possible for the base class, the derived class, or both to have constructor and/or destructor functions. Several
	issues that relate to these situations are examined in this section.

	When a base class and a derived class both have constructor and destructor functions, the constructor functions are executed in
	order of derivation. The destructor functions are executed in reverse order. That is, the base class constructor is executed
	before the constructor in the derived class. The reverse is true for destructor functions: the derived class's destructor is
	executed before the base class's destructor.

	If you think about it, it makes sense that constructor functions are executed in order of derivation. Because a base class has
	no knowledge of any derived class, any initialization it perofrs is separate from and possibly prerequisite to any
	initialization performed by the derived class. Therefore, it must be executed first.

	On the other hand, a derived class's destructor must be executed before the destructor of the base class because the base class
	underlies the derived class. If the base class's destructor were executed first, it would imply the destruction of the derived
	class. Thus, the derived class's destructor must be called before the object goes out of existence.

	So far, none of the preceding examples have passed arguments to either a derived or base class constructor. However, it is
	possible to do this. When only the derived class takes an initialization, arguments are passed to the derived class's
	constructor in the normal fashion. However, if you need to pass an argument to the constructor of the base class, a little more
	effort is needed. To accomplish this, a chain of argument passing is established. First, all necessary arguments to both the
	base class and the derived class are passed to the derived class's constructor. Using an expanded form of the derived class's
	constructor declaration, you then pass the appropriate arguments along to the base class. The syntax for passing along an
	argument from the derived class to the base class is shown here:

	derived_constructor(arg_list) : base(arg_list){
		// body of dervied class constructor
	}

	Here 'base' is the name of the base class. It is permissible for both the derived class and the base class to use the same
	argument. It is also possible for the derived class to ignore all arguments and just pass them along to the base.
*/
