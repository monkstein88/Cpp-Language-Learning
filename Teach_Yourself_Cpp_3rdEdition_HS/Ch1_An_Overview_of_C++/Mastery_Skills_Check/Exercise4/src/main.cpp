/*
	Exc: Create a function called 'rev_str()' that reverses a string. Overload
	rev_str() so it can be called with either one character array or two. When it
	is called with one string, have that one string contain the reversal. When it
	is called with two strings, return the reversed string in the second argument.
*/

#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <cstring>

using namespace std;

char* rev_str(char s1[], char s2[]);
char* rev_str(char s1[]);
char s1[80], s2[80];

int main(){

	strcpy (s1, "1234567890");
	strcpy (s2, "abcdefghij");

	cout << " S1 (input): " << "\"" << s1 << "\"" << " S1 (output-reversed): " << "\"" << rev_str(s1) << "\"" << '\n';
	cout << " S1 (input): " << "\"" << s1 << "\"" << " S2 (output-reversed): " << "\"" << rev_str(s1,s2) << "\"" << '\n';

	return 0;
}

char* rev_str(char s1[], char s2[]){
	int i , j = strlen(s1);

	if(j != 0){
		for(i = 0; j ; j--){
				s2[i++] = s1[j-1];
		}
		s2[i] = '\0';
		return s2;
	}else{
		return NULL;
	}
}

char* rev_str(char s1[]){
	static char str_buf[80];
	int i , j = strlen(s1);

	if(j != 0){
		for(i = 0; j ; j--){
				str_buf[i++] = s1[j-1];
		}
		str_buf[i] = '\0';
		strcpy(s1, str_buf);
		//s1[0] = 'a'; s1[1] = 'b'; s1[2] = 'c'; s1[3] = '\0';
		return s1;
	}else{
		return NULL;
	}
}
