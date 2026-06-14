
/*
	Exercise 2.: Why would the following be an inappropriate use of an overloaded operator?
*/

coord coord::operator%(coord ob){
	double i;

	cout << "Enter a number: ";
	cin >> i;
	cout << "root of " << i << " is ";
	cout << sqrt(i);
}

/*
	My answer:
		- The following reasongs make the overloading operator function to look strange:
			> It is innapropriate because the functionality of the functions strays away from, the context that the '%' operator implies -
			the '%' means division between two operands, with the remainder given as a result. While the actual overloading calculates
			somewhat of root value.
			> The overloaded operator has in actuality no reference or link towards the operands adjacent with the '%'. It does not take
			any of the parameters left or right of the operator under consideration. It operates on a completely arbitrary variable, which
			is not related to either of the parameters at all.
			> Also, the overloading function - incorpotes user display and input, it is blocked till the user provides an input , which
			does not make any sense to be in here for an arighmetical operator overloading.
			> This could be a completely separate member function, not overloading

	Official answer:
		-  The overloading of the % operator is inappropriate because its operation is unrelated to the traditional use.
*/
