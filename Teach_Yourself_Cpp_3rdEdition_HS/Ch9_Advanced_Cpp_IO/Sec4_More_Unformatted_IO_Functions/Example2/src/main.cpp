
/*
	Example 2.: In real programming situations, the functions 'peek()' and 'putback()' are especially useful because they let you
	more easily handle situations in which you do not know what type of information is being input at any point in time. The
	following program gives the flavor of this. It reads either strings or integers from a file. The strings and integers can
	occur in any order.
*/

// Use 'getline()' to read a string that contains spaces.
#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	char ch;

	ofstream out("test", ios::out | ios::binary);
	if(!out){
		cout <<  "Cannot open output file.\n";
		exit(EXIT_FAILURE);
	}

	char str[80], *p;

	out << 123 << "this is a test" << 23;
	out << "Hello there!" << 99 << "sdf" << endl;
	out.close();

	ifstream in("test", ios::in | ios::binary);
	if(!in){
		cout << "Cannot open input file.\n";
		exit(EXIT_FAILURE);
	}

	do{
		p = str;
		ch = in.peek(); // see what type of char is next

		if(isdigit(ch)){
			while(isdigit(*p = in.get())) // read integer, till we reach a non-digit character
				p++;
			in.putback(*p); // return char to stream
			*p = '\0'; // null terminate the string
			cout << "Integer: " << atoi(str);
		}else if(isalpha(ch)){
			while(isalpha(*p = in.get())) // read a string
				p++;
			in.putback(*p);
			*p = '\0';
			cout << "String: " << str;
		}else{
			in.get(); // ignore, if the does not fall under any of the categories - like whitespaces
		}
		cout << '\n';
	}while(!in.eof());

	in.close();

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch9_Sec4_Example2.exe
	Integer: 123
	String: this

	String: is

	String: a

	String: test
	Integer: 23
	String: Hello

	String: there

	Integer: 99
	String: sdf




*/
