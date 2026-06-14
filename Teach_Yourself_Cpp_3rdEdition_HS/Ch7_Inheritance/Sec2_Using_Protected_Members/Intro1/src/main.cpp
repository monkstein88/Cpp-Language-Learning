
/*
	Intro 1.: As you know from the preceding section, a derived class does not have access to the private members of the base class.
	This means that if the derived class needs access to some member of the base, that member must be public. However, there will
	be times when you want to keep a member of a base class private but still allow a derived class access to it. To accomplish this
	goal, C++ includes the 'protected' access specifier.

	The 'protected' access specifier is equivalent to the 'private' specifier with the sole exception that the protected members of
	the base class are accessible to the members of any class derived from that base. Outside of the base or derived classes,
	protected members are not accessible.

	The 'protected' access specifier can occur anywhere in the class declaration, although typically it occurs after the (default)
	private members are declared and before the public members. The full general form of a class declaration is shown here:

	class class_name{
		// private members
	protected: // optional
		// protected members
	public:
		// public members
	};

	When a protected member of a base class is inherited as public by the derived class, it becomes a protected member of the
	derived class. If the base is inherited as private, a protected member of the base becomes a private member of the derived
	class.

	A base class can also be inherited as protected by a derived class.  When this is the case, public and protected members of the
	base class become protected members of the derived class. (Of course, private members of the base class remain private to it and
	are not accessible by the derived class.)

	The 'protected' access specifier can also be used with strtuctures.
*/
