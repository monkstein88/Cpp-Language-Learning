
/*
	Exercise 2.: What is wrong with the following fragment?

	class samp{
		int a;
	public:
		samp(int i){ a = i; }
		// ...
	};

	// ...

	int main(){

		samp x,y(10);

		// ...
	}

*/

/*
	My answer:
		- First option: The class is missing a constructor, which to complement and overload the other constructor invoked when a
		class is declared with initialization (passing a value, at the same time). So for the case, where an object is declared
		but not initialized (not given a value during declaration) - there is not constructor to take care of that. So we need
		to declare a constructor, that does nothing, or maybe inititializes the 'samp's 'a' variable to something, either is
		an option:

			samp(){};
			samp(){ a = 0;}

		- Second option, is make the only constructor have a default value for its parameter:

			samp(int i=0){ a = i;}

	Official answer:
		- The class samp defines only one constructor, and this constructor requires an initializer. Therefore, it is improper to
		declare an object of type samp without one. (That is, 'samp x' is an invalid declaration.)
*/
