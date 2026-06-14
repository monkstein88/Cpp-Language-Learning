
/*
	Exercise 2.: Given this (below) class fragment, what problem is caused by the assignment of 'ob1' and 'ob2'?
*/

class samp{
	double *p;
public:
	samp(double d){
		p = (double *) malloc(sizeof(double));
		if(!p)
			exit(EXIT_FAILURE); // allocation error
		*p = d;
	}
	~samp() { free(p); }
	// ...
};

// ...
samp ob1(123.09), ob(0.0);
// ...
ob2 = ob1;


/*
	Due to using dynamic memory allocation for variables storage within the class, the problem is that both objects are going
	to be refering to the same memory space/address holding the value for double -  both 'ob1.p' and 'ob2.p' are going to have
	the same value, thus point to the same memory space after the assign statement takes places. Also the memory allocated for 'ob2.p' is
	now lost after the overwriting.


	- On one point, this breaks the 'individual' , separate character of both objects, that they supposed to have from that point on, and they
	are going to affect each other . They will not be separate entities after the assingment.
	- A second point is that, if that any of those objects gets further passed down to a function for example (passed by value), when the function
	finishes , the destructor part that will occur when the function terminates will free the space alloted for the double, for both objects, and the
	-
*/
