
/*
	Exercise 2.:  Replace the 'show()' function in the following program with an inserter function:

	#include <iostream>
	using namespace std;

	class planet{
	protected:
		double distance; // miles from the Sun
		int revolve; // in days
	public:
		planet(double d, int r){
			distance = d;
			revolve = r;
		}
	};

	class earth : public planet{
		double circumference; // circumeference of orbit
	public:
		earth(double d, int r) : planet(d, r){
			circumference = 2*distance*3.141592;
		}
		// Rewrite this so that it displays the information using an inserter function.
		void show(){
			cout << "Distance from the Sun: " << distance << '\n';
			cout << "Days in orbit: " << revolve << '\n';
			cout << "Circumference of orbit: " << circumference << '\n';
		}
	}

	int main(){
		earth ob(93000000, 365);

		cout << ob;

		return 0;
	}


*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class planet{
protected:
	double distance; // miles from the Sun
	int revolve; // in days
public:
	planet(double d, int r){
		distance = d;
		revolve = r;
	}
};

class earth : public planet{
	double circumference; // circumeference of orbit
public:
	earth(double d, int r) : planet(d, r){
		circumference = 2*distance*3.141592;
	}
	// Rewrite this so that it displays the information using an inserter function.
	friend ostream& operator<<(ostream& stream, earth ob){

		stream << "Distance from the Sun: " << ob.distance << '\n';
		stream << "Days in orbit: " << ob.revolve << '\n';
		stream << "Circumference of orbit: " << ob.circumference << '\n';

		return stream; // Notice that the inserted function returns a reference to 'stream', which is of type 'ostream'. This is
							// required if the overloaded '<<' operator is going to be used in a series of I/O expressions, such as
							// cout << ob1 << ob2 << ob3;
	}
};

int main(){
	earth ob(93000000, 365);

	cout << ob;

	return EXIT_SUCCESS;
}




/*
	This program displays the following:

	Distance from the Sun: 9.3e+07
	Days in orbit: 365
	Circumference of orbit: 5.84336e+08


*/
