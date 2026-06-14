
/*
	Intro 1.: Namespaces were briefly introduced in Chapter 1. Now it is time to look at them in detail. Namespaces are relatively recent
	addition to C++ (ref. to 1997). Their puprose is to localize the names of identifiers to avoid name collisions. In the C++ programming
	environment, there has been an explosion of variable, function, and class names. Prior to the invention of namespaces, all of these
	names competed for slots in the global namespace, and many conflicts arose. For example, if your program defined a function called
	'toupper()' , it could (depending upon its parameter list) override the standard library function 'toupper()' because both names would be
	stored in the global namespace. Name collisions were compounded when two or more third-party libraries were used by the same program. In
	this case, it was possible - even likely - that a name defined by one library would conflict with the same name defined by another
	library.

	The creation of the 'namespaces' keyword was a response to these problems. Because it localizes the visibility of names declared within
	it, a namespace allows the same name to be used in different contexts without giving rise to conflicts. Perhaps the most noticeable
	beneficiary of namespaces is the C++ standard library. In early versions of C++, the entire C++ library was defined within the global
	namespaces (which was, of course, the only namespace). Now, however, the C++ library is defined within its own namespace 'std', which
	reduces the chance of name collisions. You can also create your own namespaces within your program to localize the visibility of any
   names that you think might cause conflicts. This is especially important if you are creating class or function libraries.

 	The 'namespace' keyword allows you to partition the global namespace by creating a declarative region. In, essence a namespace defines a
	scope. The general form of 'namespace' is shown here:
*/
   namespace name{
      // declarations
   }
/*
	Anything defined within a 'namespace' statement is within the scope of that namespace.

	Here is an example of a namespace:
*/
   namespace MyNameSpace{
      int i, k;

      void myfunc(int j){ cout << j; }

      class myclass{
      public:
         void seti(int x){ i = x; }
         int geti(){ return i; }
      };
   }
/*
	Here 'i', 'k', 'myfunc()', and the class 'myclass' are part of the scope defined by the 'MyNameSpace' namespace.

	Identifiers declared within a namespace can be referred to directly within that namespace. For example, in 'MyNameSpace' the 'return i'
	statement uses 'i' directly. However, since 'namespace' defines a scope, you need to use the scope resolution operator to refer to
	objects declared within a namespace from outside that namespace. For example, to assign the value 10 to 'i' from code outside
	'MyNameSpace', you musst use this statement:
*/
	MyNameSpace::i = 10;
/*
	Or, to declare an object of type 'myclass' from outside 'MyNameSpace', you use a statement like this:
*/
	MyNameSpace::myclass ob;
/*
	In general, to access a member of a namespace from outside its namespace, precede the member's name with the name of the namespace
	followed by the scope resolution operator.

	As you can imagine, if your program includes frequent references to the members of a namespace, the need to specify the namespace and
	the scope resolution operator each time you need to refer to one quickly becomes a tedious chore. The 'using' statement was invented to
	alleviate this problem. The 'using' statement has these two general forms:
*/
	using namespace name;
	using name::member;
/*
	In the first form, 'name' specifies the name of the namespace you want to access. When you use this form, all of the members defined
	within the specified namespace are brought into the current namespace and can be used without qualification. If you use the second form,
	If you use the second form, only a specific member of the namespace is made visible. For example, assuming 'MyNameSpace' as shown above,
	the following 'using' statements and assignments are valid:
*/
	using MyNameSpace::k; // only 'k' is made visible
	k = 10; // OK vecause 'k' is visible

	using namespace MyNameSpace; // all members are visible
	i = 10; // OK because all members of 'MyNameSpace' are visible
/*
	There can be more than one namespace declaration of the same name. This allows a namespace to be split over several files or even
	separated within the same file. Consider the following example:
*/
	namespace NS{
		int i;
	}

	// ...

	namespace NS{
		int j;
	}
/*
	Here 'NS' is split into two pieces. However, the contents of each piece are still within the same namespace, 'NS'.

	A namespace must be declared outside of all other scopes, with one exception: a namespace can be nested within another. This means that
	you cannot declare namespaces that are localized to a function, for example.

	There is a special type of namespace, called an 'unnamed namespace', that allows you to create identifiers that are unique within a file.
	It has this general form:
*/
	namespace{
		// declarations
	}
/*
	Unnamed namespaces allow you to establish unique identifiers that are known only within the scope of a single file. That is, within the
	file that contains the unnamed napespace, the members of that namespace can be used directly, without qualification. But outside the
	file, the identifiers are unknown.

	You will not usually need to create namespaces for most small- to medium-sized programs. However, if you will be creating libraries of
	reusable code or if you want to ensure the widest portability, consider wrapping your code within a namespace.
*/
