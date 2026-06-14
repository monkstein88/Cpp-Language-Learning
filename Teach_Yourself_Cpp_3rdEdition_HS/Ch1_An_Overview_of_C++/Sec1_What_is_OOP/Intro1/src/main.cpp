
/*
	Intro 1.: Object-oriented programming is a powerful way to approach the task of programming. Since its early beginnings, programming has
	been governed by various methodologies. At each critical point in the evolution of programming, a new appraoch was created to help the
	programmer handle increasingly complex programs. The first programs were created by toggling switches on the front panel of the computer.
	Obviously, this approach is suitable for only the smallest programs. Next, assembly language was invented, which allowed longer programs
	to be written. The next advance happened in the 1950s when first high-level language (FORTRAN) was invented.

	By using a high-level language, a programmer was able to write programs that were several thousand lines long. However, the method of
	programming used early on was an ad-hoc, anything-goes approach. While this is fine for relatively short programs, it yields unreadable
	(and unmanageable) "spaghetti code" when applied to larger programs. The elimination of "spaghetti code" became fasible with the
	invention of structured programming languages in the 1960s. These languages include Algol and Pascal. In loose terms, C is a structured
	language and most likely the type of programing you have  been doing would be called structured programming. Structured programming
	relies on well-defined control structures, code blocks, the absence (or at least minimal use) of the GOTO, and stand-alone subroutines
	that support recursion and local variables. The essence of structured programming, the average programmer can create and maintain
	programs that are up to 50 000 lines long.

	Although strcutured programming has yielded excellent results when applied to moderatelt complex programs, even it fails at some point,
	after a program reaches a certain size. To allow more complex programs to be written, a new approach to the  of programming was needed.
	Towards this end, object-oriented programming was invented. OOP takes the best ideas embodied in structurd programming and combines them
	with powerful new concepts that allow you  to organize your programs more effectively. Object-oriented programming encourages you to
	decompose a problem into its constituent parts. Each component becomes a self-contained object that contains its own instructions and
	data that relate to that object. In this way, complexity is reduced and the programmer can manage larger programs.

	All OOP languages, including C++, share three common defining traits: encapsulation, polymorphism, and inheritance. Let's look at these
	concepts now.

	ENCAPSULATION
	Encapsulation is the mechanism that binds togheter code and the data it manipulates, and keeps both safe from outside interference and
	misuse. In an object-oriented language code and data can be combined in such a way that a self-contained "black box" is created. When
	code and data are linked together in this fashion, an 'object' is created. In other words, an object is the devie that supports
	encapsulation.

	Within an object, code, data or both may be 'private' to that object or 'public'. Private code or data is known to and accessible only by
	another part of the object. That is, private code or data  cannot be accessed by a piece of the program that exists outside the object.
	When code or data is public, other parts of your program can access it even though it is defined within an object.Typically, the public
	parts of an object are used to provide a controlled interface to the private elements of the object.

	For all intents and purposes, an object is a variable of a user-defined type. It may seem strange that an object that links both code
	and data can be thought of as a variable. However, in object-oriented programming, this is precisely the case. Each time you define a
	new type of object, you are creating a new data type. Each specific instance of this data type is a compund variable.

	POLYMORPHISM
	Polymorphism (from the Greek, meaning "many forms") is the quality that allows one name to be used for two or more related but
	technically different purposes. As it relates to OOP, polymorphism allows one name to specify a general class of actions. Within a
	general class of actions, the specific action to be applied is determined by the type of data. For example, in C, which does not
	significantly support polymorphism, the absolute value action requires three distinct function names: 'abs()', 'labs()' and 'fabs()'.
	These fuctions compute and return the absolute value of an integer, a long integer, and a floating-point value, respectively. However,
	in C++, which supports polymorphism each function can be called by the same name, such as 'abs()'. (One way this can be accomplised is
	shown later in this chapter.) The type of data used to call the function determines which specfic version of the function is actually
	executed. As you will see, in C++, it is possible to use one function name for many different purposes. This is caled 'function
	overloading'.

	More generally, the concept of polymoprhism is characterized by the idea of "one interface, multiple methods," which means using a
	generic interface for a group of related activities. The advantage of polymoprhism is that it helps to reduce complexity by allowing
	one interface to specify a 'general class of action'. It is the compiler's job to select the 'specific action' as it applies to each
	situation. You, the programmer, don't need to do this selection manually. You need only remember and utilize the general interface. As
	the example in the preceding paragraph illustrates, having three names for the absolute value function instead of just one makes the
	general activity of obtaining the absolute value of number more complex than it actually is.

	Polymorphism an be applied to operators, too. Virtually all programming languages contain a limited application of polymoprhism as it
	relates to the arithmetic operators. For example, in C, the + sign is used to add integers, long integers, characters and floating-point
	values. In these cases, the compiler automatically knows which type of arithmetic to apply. In C++, you can extend this concept to other
	types of data that you define. This type of polymoprhism is called 'operator overloading'.

	They key point to remember about polymoprhism is that it allows you to handle greater complexity by allowing the creation of standard
	interfaces to related activities.

	INHERITANCE
	Inheritance is the process by which one object can acquire the properities of another. More specifically, an object can inherit a
	general set properties to which it can add those features that are specific only to itself. Inheritance is important because it allows
	an object to support the concept of 'hierarchical classification'. Most information is made manageable by hierarchical classification.
	For example, think about the description of a hoiuse. A house is apart of the general class called 'building'. In turn, 'building' is a
	part of the more general class 'structure', which is part of the even more general class of objects that we call 'man-made'. In each
	case, the child class inherits all those qualities associated with the parent and adds to them its own defining characteristics. Without
	the use of ordered classificiations, each object would have to define all characteristics that relate to it explicitly. However, through
	inheritance, it is possible to describe an object by stating what general class (or classes) it belongs to along with those specific
	traits that make it unique. As you will see, inheritance plays a very important role in OOP.
*/
