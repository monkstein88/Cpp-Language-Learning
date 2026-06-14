
/*
	Exercise 4.: Write a program that reads a text file and then reports the number of times each letter in the alphabet occurs in
	the file.
*/

#include <iostream>
#include <iomanip>
#include <cctype>
#include <fstream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){
	int ASCII_cnt[256] = {0}; // Each element of the array represents a counter value for the associated character from the ASCII table.
	if(argc!=2){
		cout << "Usage: COUNT ALPHABET ITERATIONS <inputfile>\n";
		exit(EXIT_FAILURE);
	}
	ifstream fin(argv[1], ios::in | ios::binary);
	if(!fin){
		cout << "Cannot open input file - " << argv[1] << endl;
		exit(EXIT_FAILURE);
	}
	char ch;
	while(!fin.eof()){
		fin.get(ch);
		if(!fin.eof()){
			ASCII_cnt[(int)ch]++;
		}
	}
	fin.close();
	cout << "Encountered alphabetical count, by each letter set (upper + lower case): " << endl;
	for(int i ='A' ; i<='Z';i++){
		cout << (char) i << ", " << (char)(i+32) << ": "<< ASCII_cnt[i] + ASCII_cnt[i+32] << endl;
	}


	return EXIT_SUCCESS;
}

/*
	This program displays the following output when ran:

	$ ./Ch9_Mastery_Skills_Check_Exercise4.exe readfile
	Encountered alphabetical count, by each letter set (upper + lower case):
	A, a: 58
	B, b: 11
	C, c: 18
	D, d: 36
	E, e: 73
	F, f: 13
	G, g: 17
	H, h: 47
	I, i: 43
	J, j: 1
	K, k: 4
	L, l: 33
	M, m: 8
	N, n: 52
	O, o: 39
	P, p: 7
	Q, q: 0
	R, r: 19
	S, s: 37
	T, t: 60
	U, u: 18
	V, v: 6
	W, w: 17
	X, x: 0
	Y, y: 13
	Z, z: 3

*/
