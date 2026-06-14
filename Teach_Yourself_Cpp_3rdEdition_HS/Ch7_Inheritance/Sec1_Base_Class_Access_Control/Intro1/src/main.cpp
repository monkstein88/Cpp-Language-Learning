
/*
	Intro 1.: When one class inherits another, it uses this general form:

	class derived_class_name:access base_class_name{
		// ...
	}

	Here 'access' is one of three keywords: 'public', 'private', or 'protected'. A discussion of the 'protected' access specifier is
	is deferred until the next section of this chapter. The other two are discussed here.

	The access specifier determines how elements of the base class are inherited by the derived class. When the access specifier for
	the inherited base class is 'public', all public members of the base become public members of the derived class. If the access
	specifier is 'private', all public members of the base class become private members of the derived class. In either case, any
	private members of the base class, remain private to it and are inaccessible by the derived class.

	It is important to understand that if the access specifier is 'private', public members of the base become private members of
	the derived class, but these members are still accessible by member functions of the derived class.

	Technically, 'access' is optional. If the specifier is not present, it is 'private' by default if the derived class is a class.
	If the derived class is a 'struct', 'public' is the default in the absence of an explicit access specifier. Frankly, most
	programmers specify 'access' for the sake of clarity.
*/
