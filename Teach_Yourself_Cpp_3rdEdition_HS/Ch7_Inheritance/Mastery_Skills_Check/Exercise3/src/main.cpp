
/*
	Exercise 3.: Explain what 'protected' means. (Be sure to explain what it means when referring to members of a class and when it
	is used as an inheritance access specifier.)
*/

/*
	My answer:
		- 'protected' is a keyword, given to either a class member or used when deriving an object, specifying how the
		base class is to be inherited. When used in conjuction with class member, it makes that class member private to the base class
		it belongs to, but also, it allows that class member to be inherited as private member, within the derived class using that
		base, so the derived class will have direct access to this member within itself - something not possible with other access
		specifiers. So long story short, it allows to create pseudo-private members of a base class, so they cabn be inherited
		(accessible) as private members within derived class directly.
		When used as an inheritance specifier - it makes public and protected members of the base class to be inherited within the
		derived class as protected members.

	Official answer:
		- Members declared as protected are private to the base class but can be inherited (and
		accessed) by any derived class. When used as an inheritance access specifier, protected
		causes all public and protected members of the base class to become protected members
		of the derived class.
*/
