
/*
Exercise 3.: What is the general form of 'new' that is used to initialize a dynamic variable? Give a concrete
example..
*/

// general form:
<type>* <variable_name> = new <type>(<value>); // 'value' is the value you want to initialize to

// specific form:
int* p_int = new int(3) ; // declare and initialize a dynamically allocated int type variable to value of 3 (decimal).
int* p_float = new float(3.0) ; // declare and initialize a dynamically allocated int type variable to value of 3.0 (decimal float).

// you cannot initialize arrays that have been dynamically allocated
