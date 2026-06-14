
/*
	Exercise 2.: Write a program that copies a text file. During the copy process, convert all tabs into the correct number of
	spaces.
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;


int main(int argc, char* argv[]){

	if(argc!=3){
		cout << "Usage: COPY & REPLACE /TABS <inputfile> <outputfile>\n";
		exit(EXIT_FAILURE);
	}

	ifstream fin(argv[1], ios::in | ios::binary);
	if(!fin){
		cout << "Error opening input file. Exiting...\n";
		exit(EXIT_FAILURE);
	}
	ofstream fout(argv[2], ios::out | ios::binary);
	if(!fout){
		cout << "Error opening output file. Exiting...\n";
		exit(EXIT_FAILURE);
	}

	char ch;;
	while(!fin.eof()){
		fin.get(ch);
		if(!fin.eof()){
			if(ch == '\t'){
				fout.write("   ", sizeof("   ")-1); // three spaces ("   ") will replace a tab ('\t'). NOTE: Be careful with what
																// editor you inspect the result - i.e. Atom IDE might interpret (display)
																// a line beginning with several spaces to a single tabulation (so the editor
															  	// might completely disregard it)
			}else{
				fout.put(ch);
			}
		}
	}
	fin.close();
	fout.close();

   return EXIT_SUCCESS;
}

/*

	This program displays the following output when ran:

	$ ./Ch10_Review_Skills_Check_Exercise2.exe readfile copyfile


*/

/*
	Official answer:

	// Copy and convert tabs to spaces.
	#include <iostream>
	#include <fstream>
	using namespace std;

	int main(int argc, char* argv[]){

		if(argc!=3){
			cout << "Usage: CPY <int> <out>\n";
			return 1;
		}

		ifstream in(argv[1]);
		if(!in){
			cout << "Cannot open input file.\n";
			return 1;
		}

		ofstream out(argv[2]);
		if(!out){
			cout << "Cannot open output file.\n";
			return 1;
		}

		char ch;
		int i = 8;
		while(!in.eof()){
			in.get(ch);
			if(ch=='\t')
				for( ; i>0; i--)
					out.put(' ');
			else
				out.put(ch);
			if(i == -1 || ch == '\n')
				i = 8;
			i--;
		}

		in.close();
		out.close();

		return 0;
	}

*/
