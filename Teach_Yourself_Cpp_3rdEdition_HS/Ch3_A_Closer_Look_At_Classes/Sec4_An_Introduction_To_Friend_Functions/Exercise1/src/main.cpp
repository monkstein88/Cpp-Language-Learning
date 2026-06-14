
/*
	Exercise 1.: Imagine a situation in which two classes, called 'pr1' and 'pr2', shown here, share one
	printer. Further, imagine that the other parts of your program need to know when the printer is in use
	by an object of either of these two classes.  Create a functio called 'inuse()' that returns 'true' when
	the printer is being used by either and 'false' otherwise. Make this function a friend of both 'pr1' and
	'pr2'.

	class pr1{
		int printing;
		// ...
	public:
		 pr1() { printing = 0; }
		 void set_print(int status){ printing = status; }
		 // ...
	};

	class pr2{
		int printing;
		// ...
	public:
		void set_print(int status){ printing = status; }
		// ...
	};



*/
class pr2; // forward declaration (a.k.a. forward reference)

class pr1{
	int printing;
	// ...
public:
	 pr1() { printing = 0; }
	 void set_print(int status){ printing = status; }
	 friend bool inuse(pr1 stat1, pr2 stat2);
	 // ...
};

class pr2{
	int printing;
	// ...
public:
	void set_print(int status){ printing = status; }
	friend bool inuse(pr1 stat1, pr2 stat2);
	// ...
};

bool inuse(pr1 stat1, pr2 stat2){
	return (stat1.printing || stat2.printing)? true : false ;
}
