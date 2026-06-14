
/*
	Exercise 5.: Given this skeleton, fill in the details as indicated in the comments:
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class planet{
protected:
	double distance; // miles from the sun
	int revolve; // in days
public:
	planet(double d, int r){ distance = d; revolve = r; }
};

class earth : public planet{
	double circumference; // circumference of orbit
public:
	/*
		Create 'earth(double d, int r)''. Have it pass the distance and days of revolution back to planet. Have it compute the
		circumference of the orbit. (Hint: circumference = 2*radius*pi = 2*r*3.141593)
	*/
	earth(double d, int r) : planet(d, r){
		circumference = 2*distance*3.141593;
	}
	/*
	 	Create a function called 'show()' that displays the information.
	*/
	void show(){
		cout << "Distance from Sun (in miles):" << distance << '\n';
		cout << "Duration of full orbit around Sun (in days): " << revolve <<'\n';
		cout << "Lenght of orbit around Sun (in miles): " << circumference << '\n';
	}
};


int main(){
	earth ob(93000000, 365);

	cout << "= planet Earth =" << '\n';
	ob.show();

	return EXIT_SUCCESS;
}
/*

*/
