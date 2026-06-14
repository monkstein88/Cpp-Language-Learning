
/*
	Exercise 6.: Given this class,
*/
	class Demo
	{
		int a;
	public:
		explicit Demo(int i){ a = i; }
		int geta(){ return a; }
	}
/*
	is the following declartation legal?
*/
	Demo o = 10;

/*

	My answer:
		- No, it is not legal. The 'explicit' keyword specifier makes the implicit conversions (automatic conversions) not allowed.


	Official answer:
		- No. The explicit specifier prevents the automatic conversion from int to Demo.
*/
