
/*
	Intro 1.: Although constructors were described early on in this book, there are still a few points that need to be made. Consider the
	following program:
*/
	#include <iostream>
	using namespace std;


	class myclass
	{
		int a;
	public:
		myclass(int x){ a = x; }
		int geta(){ return a; }
	};

	int main()
	{
		myclass ob(4);

		cout << ob.geta();

		return 0;
	}
/*
	Here the constructor for 'myclass' takes one parameter. Pay special attention to how 'ob' is declared in 'main()'. The value 4,
	specified in the parentheses following 'ob', is the argument that is passed to 'myclass()'s parameter 'x', which is used to initialize
	'a'. This is the form of initialization that we have been usign since the start of this book. However, there is an alternative. For
	example, the following statement also initializes 'a' to 4:
*/
	myclass ob = 4; // automatically converts into 'myclass(4)'
/*
	As the comment suggests, this form of initialization is automatically converted into a call to the 'myclass' constructor with 4 as the
	argument. That is , the preceding statement is handled by the compiler as if it were written like this:
*/
	myclass ob(4);
/*
	In general, any time that you have a constructor that requires only one argument, you can use either 'ob(x)' or 'ob = x' to initialize
	an object. The reason for this is that whenever you create a constructor that takes one argument, you are also implicitly creating a
	conversion from the type of that argument to the type of the class.

	If you do not want implicit conversions to be made, you can prevent them by using 'explicit'. The 'explicit' specifier applies only to
	constructors. A constructor specified as 'explicit' will be used only when an initialization uses the normal constructor syntax. It will
	not perform any automatic conversion. For example, if the 'myclass' constructor is declared as 'explicit', the automatic conversion will
	not be supplied. Here is 'myclass()' declared as 'explicit':
*/
	#include <iostream>
	using namespace std;

	class myclass
	{
		int a;
	public:
		explicit myclass(int x){ a = x; }
		int geta(){ return a; }
	};
/*
	Now only constructors of the form
*/
	myclass ob(110);
/*
	will be allowed.
*/
