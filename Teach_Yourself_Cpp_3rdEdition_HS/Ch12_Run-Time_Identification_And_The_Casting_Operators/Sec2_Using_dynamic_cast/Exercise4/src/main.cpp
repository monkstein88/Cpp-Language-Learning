
/*
	Example 4.: Using the 'Num' class hierarchy from Example 3 in this section, will the following work?
*/
Num<int> *Bp;
Square<double> *Dp;
// ...
Dp = dynamic_cast<Num<int>> (Bp);
/*
	My answer:
		- No , it shouldn't work because both template classes are not using the same type of parameter for the fundament.

	Officail answer:
	 	-  No. 'Bp' and 'Dp' are pointers to two fundamentally different types of objects.

*/
