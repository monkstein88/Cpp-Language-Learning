
/*
	Example 5.: Generic functions are similar to overloaded functions except that they are more restrictive. When functions are overloaded,
	you can have different actions performed within the body of each function, But a generic function must perform the same general action
	for all versions. For example, the following overloaded functions cannot be replaced by a generic function because they do not do the
	same thing:
*/
void outdata(int i){
	cout << i;
}

void outdata(double d){
	cout << setprecision(10) << setfill('#');
	cout << d;
	cout << setprecision(6) << setfill(' ');
}
