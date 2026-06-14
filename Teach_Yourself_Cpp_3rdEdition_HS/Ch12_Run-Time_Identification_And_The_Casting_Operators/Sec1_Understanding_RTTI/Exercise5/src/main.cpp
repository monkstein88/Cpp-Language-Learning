
/*
	Exercise 5.: Assuming the 'Num' class from Example 5, is the following expression true or false?
*/
typeid(Num<int>) == typeid(Num<double>)

/*
	My answer:
		- No, the names would be different.

	Official answer:
		- False. Although the same template class is used, the type of data used by each version is different.

*/
