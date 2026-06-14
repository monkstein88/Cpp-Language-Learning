
/*
	Intro 1.: Run-time type information might be new to you because it is not found in non-polymorphic languages such as C. In non-
	polymorphic languages, there is no need for run-time type information because the type of each object is known at compile time (i.e.,
	when the program is written). However, in polymorphic languages such as C++, there can be situations in which the type of an object is
	unknown at compile time because the precise nature of that object is not determined until the program is executed. As you know, C++
	implements polymorphism through the use of class hierarchies, virtual functions, and base class pointers. In this approach, a base class
	pointer can be used to point to objects of the base class or to 'any object derived from that base'. Thus, it is not always possible to
	know in advance what type of object will be pointed to by a base pointer at any given moment in time. This determination must be made at
	run time, using run-time type identification.

	To obtain an object's type, use 'typeid', You must include the header <typeinfo> in order to use 'typeid'. The most common form of
	'typeid' is shown here:
*/
	typeid(object)
/*
	Here 'object' is the object whose type you will be obtaining. 'typeid' returns a reference to an object of type 'type_info' that
	describes the type of object defined by 'object.' The 'type_info' that describes the type of object defined by 'object'. The 'type_info'
	class defines the following public members:
*/
	bool operator==(const type\_info &ob);
	bool operator!=(const type\_info &ob);
	bool before(const type\_info &ob);
	const char *name();
/*
	The overloaded '==' and '!=' provide for the comparison of types. The 'before()' function returns true if the invoking object is before
	the object used as a parameter in collation order. (This function is mostly for internal use only. Its return value has nothing to do
	with inheritance or class hierarchies.) The 'name()' function returns a pointer to the name of the type.

	While 'typeid' will obtain the type of any object, its most important use is its application through a pointer of a polymorphic base
	class. In this case, it will automatically return the type of the actual object being pointed to, which can be a base class object or
	an object derived from that base. (Remember, a base class pointer can point to an object of the base class or of any class derived from
	that base.) Thus, using 'typeid' you can determine at run time the type of the object that is being pointed to by a base class pointer.
	The same applies to references. When 'typeid' is applied to a reference to an object of a polymorphic class, it will return the type of
	the object actually being referred to, which can be of a derived type. When 'typeid' is applied to a non-polymorphic class, the base
	type of the pointer or reference is obtained.

	There is a second form of 'typeid', one that takes a type name as its argument. This form is shown here:
*/
	typeid(type_name)
/*
	The main use of this form of 'typeid' is to obtain a 'type_info' object that describes the specified type so that it can be used in a
	type comparison statement.

	Because 'typeid' is commonly applied to a dereferenced pointer (i.e., one to which the * operator has been applied), a special exception
	has been created to handle the situation in which the pointer being dereferenced is null. In this case, 'typeid' throws a 'bad_typeid'
	exception.

	Run-time type identification is not something that every program will use. However, when you are working with polymorphic types, it
	allows you to know what type of object is being operated upon in any given situation.
*/
