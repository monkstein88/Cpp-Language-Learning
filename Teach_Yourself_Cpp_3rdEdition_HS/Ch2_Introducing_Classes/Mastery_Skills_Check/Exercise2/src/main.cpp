
/*
	Exercise 2.: Create a class called 'line' that draws a line on the screen. Store the line length in a private
	integer variable called 'len'. Have 'line's constructor take one parameter: the line length. Have the constructor
	store the lenght and actually draw the line. IF your system does not support graphics, display the line by using '*'
	in a command shel.
	Optional: Give 'line' a destructor that erases the line.

*/
#include <iostream>
#include <cstdlib>
using namespace std;

class line{
	int len; // length of the line
public:
	line(int l){
		len = l; // store the lenght
		if(l<= 0){
			cout << "Error: zero or negative size for lenght provided!\n";
			exit(EXIT_FAILURE);
		}
		for(int i = len; i--;)
			cout << '*';
	}
	~line(){
		for(int i = len; i--;)
			cout << "\b \b"; // Output a backspace, space, and backspace to wipe the previous characters
		//cout << "\n";
	}
};



int main(){
	line l1(10);
	
	for(long long int time_cyc = 2000000000; time_cyc--;); // insert a delay here to observe the difference between constructor and destructor execution
	
	return EXIT_SUCCESS;
}
