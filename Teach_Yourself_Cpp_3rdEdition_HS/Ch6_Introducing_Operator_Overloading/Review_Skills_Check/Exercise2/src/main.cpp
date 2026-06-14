
/*
	Exercise 2.: Using the class from Question 1, show how you can avoid overloading 'myclass()' by using default arguments.
*/

class myclass{
	int x, y;
public:
	// myclass(){ x = 0; y = 0; }  - this is no longer needed , because default arguments below
	myclass(int i = 0, int j = 0){ x = i; y = j; }
	// ...
};
