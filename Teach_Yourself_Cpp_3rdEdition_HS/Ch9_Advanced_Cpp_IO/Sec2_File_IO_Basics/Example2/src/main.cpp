
/*
	Example 2.: Following is another example of disk I/O. This program reads strings entered at the keyboard and writes them to
	disk. The program stops when the user emters a '$' as the first character in a string. To use the program, specify the name of
	the output file on the command line.
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){

	if(argc!=2){
		cout << "Usage: WRITE <filename>\n";
		exit(EXIT_FAILURE);
	}
	ofstream out(argv[1]); // output file (writing)

	if(!out){
		cout << "Cannot open output file.\n";
		exit(EXIT_FAILURE);
	}

	char str[80];
	cout << "Write strings to disk, '$' to stop\n";
	do{
		cout << ": ";
		cin >> str;
		out << str << endl;
	}while(*str != '$');

	out.close();

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran with './Ch9_Sec2_Example2.exe strings2disk' command:

	(on the cmd prompt)
	Write strings to disk, '$' to stop
	: Commando
	: Duke
	: Lizards
	: $

	(in the 'strings2disk' file)
	Commando
	Duke
	Lizards
	$

*/
