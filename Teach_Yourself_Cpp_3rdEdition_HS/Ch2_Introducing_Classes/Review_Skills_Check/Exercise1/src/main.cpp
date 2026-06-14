
/*
	Ex 1.: Write a program tha uses C++-style I/O to prompt the user for a string
	and then display its length.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[80];
	int str_len;
	cout << "Please enter a string of text below:\n";
	cin >> str;
	if((str_len = strlen(str)) != 0)
		cout << "The text you entered is " << str_len << " characters long.\n";
	else
		cout << "You've entered an empty string, Goodbye...\n";

	return 0;
}
