
/*
	Exercise 8.: Create a function called 'reverse()' that takes two parameters. The first parameter, called 'str', is a pointer
	to a string that will be reversed upon return from the from the function. The second parameter is called 'count', and it
	specifies how many characters of 'str' to reverse. Give 'count' a default value that, when present, tells 'reverse()' to
	reverse the entire string.


*/



#include <iostream>
#include <cstring>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function

using namespace std;

void reverse(char str[], int count=-1);

int main(){

	char str1[] = "123456789";
	char str2[] = "ab";
	char str3[] = "abc";


	reverse(str2);

	cout << "str1 (original): " << '\"' << str1 << '\"'; 	reverse(str1);		cout << ", str1 (reversed): " << '\"' << str1 << '\"'; cout << '\n';
	cout << "str2 (original): " << '\"' << str2 << '\"'; 	reverse(str2, 2);	cout << ", str2 (reversed): " << '\"' << str2 << '\"'; cout << '\n';
	cout << "str3 (original): " << '\"' << str3 << '\"'; 	reverse(str3, 2);	cout << ", str3 (reversed): " << '\"' << str3 << '\"'; cout << '\n';

	return EXIT_SUCCESS;
}

void reverse(char str[], int count){
	int len;
	char ch;
	if( (len = strlen(str)) >= 2){ // First check that there is a string is not empty, or just a single character, or not just 'default'
		if(count == -1){ // If the default value is invoked
			for(int i=0;i<len/2;i++){
				ch = str[i];
				str[i]= str[len-i-1];
				str[len-i-1] = ch;
			}
		}else{ // Else,
			for(int i=0;i<=count/2;i++){
				ch = str[i];
				str[i] = str[len-i-1];
				str[len-i-1] = ch;
			}
		}
	}
}
