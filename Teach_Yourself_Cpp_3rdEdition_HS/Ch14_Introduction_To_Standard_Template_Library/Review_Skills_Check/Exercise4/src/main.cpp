
/*
	Exercise 4.: Given this class,
*/
	class X
	{
		int a, b;
	public:
		X(int i, int j){ a = i; b = j; }
		// create conversion to 'int' here
	};
/*
	 create an integer conversion function that returns the sum of 'a' and 'b'
*/


/*

	My answer:
		- 	class X
			{
				int a, b;
			public:
				X(int i, int j){ a = i; b = j; }
				// create conversion to 'int' here
				operator int(){ return a+b; }
			};


	Official answer:
		-  class X
			{
				int a, b;
			public:
				X(int i, int j) { a = i, b = j; }
				operator int() { return a+b; }
			};
*/
