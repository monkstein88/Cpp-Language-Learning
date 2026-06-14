
/*
	Intro 1.: Class member functions can be declared as 'const'. When this is done, that function cannot modify the object that invokes it.
	Also, a 'const' object cannot invoke a non-'const' member function. However, a 'const' member function can be called by either 'const'
	or non-'const' objects.

	To specify a member function as 'const', use the form shown in the following example:
*/
class X
{
	int some_var;
public:
	int f1() const; // 'const' member function
};
/*
	As you can see, the 'const' follows the function's parameter declaration.

	Sometimes there will be one or more members of a class that you want a 'const' function to be able to modify even though you don't want
	the function to be able to modify any of its other members. You can accomplish this through the use of 'mutable', which overrides
	'const'-ness. That is, a 'mutable' member can be modified by a 'const' member function.
*/
