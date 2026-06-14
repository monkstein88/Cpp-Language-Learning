
/*
  Exercise 5.: Given the following class definition, is it possible to dynamically allocate an array of these objects ?

	class test{
		char* p;
		int* q;
		int count;
	public:
		test(char* x, int* y, int c){
			p = x;
			q = y;
			count = c;
		}
		// ...
	};

*/

/*
	My answer:
		-	Not in this manner, because it is missing a constructor for the scenario when the constructor is declared (initialized)
		with no parameters. So just to clarify, in C++ in order for an array of any object class, to be declared or dynamically
		allocated, it needs to have constructors (or default values) for both cases -  when an object is just declared (without
		initializing it), and declared and initialized at the same time.

		So in order for this to work, the class will have to have two constructors like:

		class test{
			char* p;
			int* q;
			int count;
		public:
			test(){ p = NULL; q = NULL; cout  = 0; }
			test(char* x, int* y, int c){
				p = x;
				q = y;
				count = c;
			}
			// ...
		};

	Official answer:
		-  No, because there is no way to initialize a dynamic array. This class has only one con-
		structor, and it requires initializers.


*/
