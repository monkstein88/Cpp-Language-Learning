
/*
	Intro 1.: As you have seen, the class is syntactically similar to the structure.
	You might be surprised to learn, however, that the class and the structure have
	virtually identical capabilities. In C++, the definition of structure has been
	expanded so that it can also include member functions, including constructor
	and destructor functions, in just the same way that a class can. In fact, the
	only difference between a structure and a class is that, by default, the member
	of a class are private, but the members of a structure are public.
	The expanded (in C++) syntax of a structure is shown here:

	struct type_name{
		// public function and data members
	private:
		// private function and data memebers
	} object_list;

	In fact, according to the formal C++ syntax, both 'struct' and 'class' create
	new class types.

	Another revelation about C++: unions and classes are also related. In C++, a
	union defines a class type that can contain both functions and data as members.
	A union is like a structure in that, by default, all members are public until
	the 'private' specifier is used. In a union, however, all data members share
	the same memory location (just as in C). The unions ability to link code and
	data allows you to create class types in which all data uses a shared location.
	Something that you cannot do using a 'class'.
	Unions can contain constructor and destructor functions.

	There are several restrictions that apply to unions as they relate to C++.
	 	-	they cannot inherit any other class and they cannot be used as a base
			class for any other type.
		- unions must not have any 'static' members.
	 	- they must not contain any object that has a constructor or destructor,
			though, the union itself, can have a constructor and destructor (for itself).
	 	- unions cannot have virtual member functions.

	There is a special type of union in C++ called an anonymous union. An anonymous
	union does not have a type name, and no variables can be declared for this of
	union. Instead, an anonymous union tells the compiler that its members will
	share the same memory location. However, in all other, respects, the members fact
	and are treated like normal variales. That is, the members are accessed directly,
	without he dot operator syntax. For example, examine this fragment:

	union{ // an anonymous union
		int i;
		char ch[4];
	};

	i = 10; // access 'i' and 'ch' directly
	ch[0] = 'X';

	'i' and 'ch' can be accessed directly because they are not part of any object.
	They do, however, share the same memory space.
	Anonymous unions have all of the restrictions that apply to normal unions, plus
	the following additions:
	 	- A global anonymous union must be declared 'static'
		- An anonymous union cannot contain private members.
		- The names of the members of an anonymous union must not conflict with other
		identifiers within the same scope.

*/
