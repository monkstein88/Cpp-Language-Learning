
/*
	Intro 1.: A potential problem exists when multiple base classes are directly inherited by a derived class. To understand what
	this problem is, consider the following class hierarchy:

		 Base                     Base
			^                        ^
			|                        |
	Derived1								 Derived2
		  ^                        ^
			|                        |
			|------------------------|
			           |
								 |
						  Derived3


	Here the base class 'Base' is inherited by both 'Derived1' and 'Derived2'. 'Derived3' directly inherits both 'Derived1' and
	'Derived2'. However, this implies that 'Base' is actually inherited twice by 'Derived3' - fist it is inherited through
	'Derived1', and then again through 'Derived2'. This causes ambiguity when a member of 'Base' is used by 'Derived3'. Since two
	copies of 'Base' are included in 'Derived3', is a reference to a member of 'Base' referring to the 'Base' inherited indirectly
	through 'Derived1' or to the 'Base' inherited indirectly through 'Derived2'? To resolve this ambiguity. C++ includes a mechanism
	by which only one copy of 'Base' will be included in 'Derived3'. This feature is called a 'virtual base class'.

	In situations like the one just described, in which a derived class indirectly inherits the same base class more than once, it
	is possible to prevent two copies of the base from being present in the derived object by having that base inherited as virtual
	by any derived clases. Doing this prevent two (or more) copies of the base from being present in any subsequent derived derived
	class that inherits the base class indictly. This 'virtual' keyword precedes the base class access specifier when it is
	inherited by a derived class.
*/
