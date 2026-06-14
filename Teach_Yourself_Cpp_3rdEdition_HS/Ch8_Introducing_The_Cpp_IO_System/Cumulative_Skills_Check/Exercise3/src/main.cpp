
/*
	Exercise 3.: Using the following class, which converts feet to inches, create an extractor that prompts the user for feet.
	Also, create an inserter that displays the number of feet and inches. Include a program that demonstrates that your inserter
	and extractor work.

	class ft_to_inches{
		double feet;
		double inches;
	public:
		void set(double f){
			feet = f;
			inches = f * 12;
		}
	};



*/

#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class ft_to_inches{
	double feet;
	double inches;
public:
	void set(double f){
		feet = f;
		inches = f * 12;
	}
	// Overloading - of operators via friend functions
	friend istream& operator>>(istream& stream, ft_to_inches& ob){ // 'Extractor'
		double temp;

		cout << "Enter length [feet]: ";
		stream >> temp;
		ob.set(temp);

		return stream;
	}
	friend ostream& operator<<(ostream& stream, ft_to_inches& ob){ // 'Inserter'

		stream << ob.feet << " [feet] = " << ob.inches << " [inches]";

		return stream;
	}
};

int main(){
	ft_to_inches l1;

	cin >> l1;
	cout << l1 << endl;

	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	Enter length [feet]: 12
	12 [feet] = 144 [inches]


*/
