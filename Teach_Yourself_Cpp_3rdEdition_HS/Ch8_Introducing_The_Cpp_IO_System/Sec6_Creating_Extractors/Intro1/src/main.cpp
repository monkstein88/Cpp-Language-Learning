
/*
	Intro 1.: Just as you can overload the '<<' output operator, you can overload the '>>' input operator. In C++, the '>>' is
	referred to as the 'extractor'. The reason for this term is that the act of inputting information from a stream removes (that
	is, extracts) data from it.

	The general form of an extractor function is shown here:
*/
	istream& operator>>(istream& stream, class_name& ob);
/*
	Extractors return a reference to 'istream', which is an input stream. The first parameter must be a reference to to an input
	stream. The second parameter is a reference to the object that is receiving input.

	For the same reason that an inserter cannot be a member function, an extractor cannot be a member function. ALthough, you can
	perform any operation within an extractor, it is best to limit its activity to inputting information. 
*/

/*


*/
