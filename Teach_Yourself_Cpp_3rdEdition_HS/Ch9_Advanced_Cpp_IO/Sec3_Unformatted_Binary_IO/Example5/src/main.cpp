
/*
	Example 5.: The following program first writes an array of 'double' values to a file and then reads the back. It also reports
	the number of characters read.
*/

// Demonstrate 'gcount()'
#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	ofstream out("test", ios::out | ios::binary);

	if(!out){
		cout << "Cannot open output file.\n";
		exit(EXIT_FAILURE);
	}

	double nums[4] = {1.1, 2.2, 3.3, 4.4};

	out.write((char*) nums, sizeof(nums));
	out.close();

	ifstream in("test", ios::in | ios::binary);

	if(!in){
		cout << "Cannot open input file.\n";
		exit(EXIT_FAILURE);
	}

	in.read((char*) nums, sizeof(nums));

	for(int i=0; i<4; i++){
		cout << nums[i] << ' ';
	}
	cout << '\n';

	cout << in.gcount() << " characters read\n";
	in.close();

	return EXIT_SUCCESS;
}

/*
	The program displays the following when ran:

	1.1 2.2 3.3 4.4
	32 characters read


*/
