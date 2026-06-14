
/*
	Example 2.:  The following fragment tells the compiler that 'f1()', 'f2()', and 'f3()' should be linked as C functions:
*/
extern "C"
{
	void f1();
	int f2(int x);
	double f3(double x, int *p);
}
