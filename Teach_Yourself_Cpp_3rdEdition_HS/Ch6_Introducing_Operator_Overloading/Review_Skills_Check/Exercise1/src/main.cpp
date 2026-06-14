
/*
	Exercise 1.: Show how to overload the constructor for the following class so that uninitialized objects can also be created.
	(When creating uninitialized objects, give 'x' and 'y' the value 0.)

	class myclass{
		int x, y;
	public:
		myclass(int i, int j){ x = i; y = j; }
		// ...
	};
*/

class myclass{
	int x, y;
public:
	myclass(){ x = 0; y = 0; }
	myclass(int i, int j){ x = i; y = j; }
	// ...
};
