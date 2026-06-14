
/*
	Example 5.: Earlier in this chapter, you saw the general form of a copy construcotr. This general form was shown with only
	one parameter. However, it is possible to create copy constructors that take additional arguments, as long as the additional
	arguments have default values.
	For example, the following is also an acceptable form of a copy constructor:

	myclass(const myclass &obj, int x =0){
		// body of constructor
	}

	As long as the first argument is a reference to the object being copied, and all other arguments default, the function qualifies
	as a copy constructor. This flexibility allows you to create copy cosntructors that have other uses.
*/
