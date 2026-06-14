
/*
	Intro 1.: Perhaps the single most important feature of C++ is the 'class'. The class is mechanism that is used to create objects. As
	such, the class is at the heart of many C++ features. Although the subject of clases is covered in great detail throughout this book,
	classes are so fundamental to C++ programming that a brief overview is necessart here.

	A class is declared using the 'class' keyword. The syntax of a 'class' declaration is similaro to that of a 'structure'. Its general
	form is shown here:
*/
	class class_name
	{
		// private functions and variables
		// ...
		public:
		// public functions and variables
		// ...
	}objects_list;
/*
	In a class declaration, the 'object_list' is optional. As with a structure, you can declare class objects later, as needed. While the
	'class_name' is also optional, from a practical point of view it is virtually always needed. The reason for this is that the 'class_name'
	becomes a new type name that is used to declare objects of the class.

	Functions and variables declared inside a class declaration are said to be 'members' of that class. By default, all functions and
	variables declared inside a class are private to that class. This means that they are accessible, only by other members of that class.
	To declare public class members, the 'public' keyword is used, followed by a colon. All functions and variables declared after the
	'public' specifier are accessible both by other members of the class and by any other part of the program that contains the class.

	Here is a simple class declaration:
*/
	class myclass
	{
		// private to 'myclass'
		int a;
	public:
		void set_a(int num);
		int get_a();
	};
/*
	This class has one private variable, called 'a', and two public functions, 'set_a()' and 'get_a()'. Notice that functions are declared
	within a clss using their prototype forms. Functions that are declared to be part of a class a called 'member functions'.

	Since 'a' is private, it is not accessoble by any ocde outside 'myclass'. However, since 'set_a()' and 'get_a()' are members of
	'myclass', they can access 'a'. Further, 'get_a()' and 'set_a()' are declared as public members of 'myclass' and can be called by any
	other part of the program that contains 'myclass'.

	Although the functions 'get_a()' and 'set_a()' are declared by 'myclass', they are not yet defined. To define a member function, you
	must link the type name of the class with the name of the function. You do this by preceding the function name with the class name
	followed by two collons. The two colons are called the 'scope resolution operator'. For example , here is the way the member functions
	'set_a()' and 'get_a()' are defined:
*/
	void myclass::set_a(int num)
	{
		a = num;
	}

	int myclass::get_a()
	{
		return a;
	}
/*
	Notice that both 'set_a()' and 'get_a()' have access to 'a', which is private to 'myclass'. Because 'set_a()' and 'get_a()' are members
	of 'myclass', they can directly access its private data.

	In genera, to define a member function you must use this form:
*/
	ret_type class_name::func_name(parameter_list)
	{
		// body of function
	}
/*
	Here 'class_name' is the name of the class to which the function belongs.

	The declaration of 'myclass' did not define any objects of type 'myclass' - it only defines the type of object that will be created when
	one is actually declared. To create an object, use the class name as a type specifier. For example, this line declares two objects of
	type 'myclass':
*/
	myclass ob1, ob2; // these are objects of type myclass
/*
	Remember: A class declaration is a logical abstration that defines a new type. It determines what an object of that type will look like.
	An object declaration creates a physical entity of that  type. That is an object occupies memory space, but a type definition does not.

	Once an object of a class has been created, your program can reference its public members by using the dot (period - '.') operator in
	much the same way that a structure members are accessed.

	Assuming the preceding object declaration, the following statement calls 'set_a()' for objects 'ob1' and 'ob2':
*/
	ob1.set(10); // sets ob1's version of 'a' to 10
	ob2.set(99); // sets ob2's version of 'a' to 99
/*
	As the comments indicate, these statements set 'ob1's copy of 'a' to 10 and 'ob2's copy to 99. Each object contains its own copy of all
	data declared within the class. This means that 'ob1's 'a' is distinct and different from the 'a' linked to 'ob2'.

	Remember: Each object of a class has its own copy of every variable declared with the class.
*/
