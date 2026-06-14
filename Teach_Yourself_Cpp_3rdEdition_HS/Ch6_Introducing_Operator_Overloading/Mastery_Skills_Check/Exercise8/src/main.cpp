
/*
	Exercise 8.: Overload the '==', '!=', and '||' operators relative to the 'three_d' class from Exercise 2.
*/

#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class three_d{
	int x,y,z;
public:
	// Constructors:
	three_d(){
		x = 0; y = 0; z = 0;
	}
	three_d(int i, int j, int k){
		x = i; y = j; z = k;
	}
	// Utility (member) functions
	void get(int& i, int& j, int& k){
		i = x; j = y; k = z;
	}
	void set(int i, int j, int k){
		x = i; y = j; z = k;
	}
	// Overloading member functions:
	//	- for unary operators
	three_d& operator+(){
		x = (x < 0)? -x : x; y = ( y < 0)? -y : y; z = ( z < 0)? -z : z;
		return *this;
	}
	three_d& operator-(){
		x = (x > 0)? -x : x; y = ( y > 0)? -y : y; z = ( z > 0)? -z : z;
		return *this;
	}
	three_d& operator++(){
		x++; y++; z++;
		return *this;
	}
	three_d& operator++(int notused){
		static three_d temp;
		if(notused) exit(EXIT_FAILURE);
		temp.x = x++; temp.y = y++; temp.z = z++;
		return temp;
	}
	three_d& operator--(){
		x--; y--; z--;
		return *this;
	}
	three_d& operator--(int notused){
		static three_d temp;
		if(notused) exit(EXIT_FAILURE);
		temp.x = x--; temp.y = y--; temp.z = z--;
		return temp;
	}
	//	- for relational and logical operators
	int operator==(three_d& obj){
		return ((x == obj.x) && (y == obj.y) && (z == obj.z));
	}
	int operator!=(three_d& obj){
		return ((x != obj.x) || (y != obj.y) || (z != obj.z));
	}
	int operator||(three_d& obj){
		return ((x || obj.x) || (y || obj.y) || (z || obj.z));
	}
	// Overloading friend functions:
	//	- for binary (arithmetical) operators
	friend three_d& operator+(three_d& obj1, three_d& obj2);
	friend three_d& operator+(three_d& obj1, const int& i);
	friend three_d& operator+(const int& i, three_d& obj2);
	friend three_d& operator-(three_d& obj1, three_d& obj2);
	friend three_d& operator-(three_d& obj1, const int& i);
	friend three_d& operator-(const int& i, three_d& obj2);
};


three_d& operator+(three_d& obj1, three_d& obj2){
	static three_d temp;
	temp.x = obj1.x + obj2.x; temp.y = obj1.y + obj2.y; temp.z = obj1.z + obj2.z;
	return temp;
}
three_d& operator+(three_d& obj1, const int& i){
	static three_d temp;
	temp.x = obj1.x + i; temp.y = obj1.y + i; temp.z = obj1.z + i;
	return temp;
}
three_d& operator+(const int& i, three_d& obj2){
	static three_d temp;
	temp.x = i + obj2.x; temp.y = i + obj2.y; temp.z = i + obj2.z;
	return temp;
}
three_d& operator-(three_d& obj1, three_d& obj2){
	static three_d temp;
	temp.x = obj1.x - obj2.x; temp.y = obj1.y - obj2.y; temp.z = obj1.z - obj2.z;
	return temp;
}
three_d& operator-(three_d& obj1, const int& i){
	static three_d temp;
	temp.x = obj1.x - i; temp.y = obj1.y - i; temp.z = obj1.z - i;
	return temp;
}
three_d& operator-(const int& i, three_d& obj2){
	static three_d temp;
	temp.x = i - obj2.x; temp.y = i - obj2.y; temp.z = i - obj2.z;
	return temp;
}


int main(){
	three_d a3, a1(-4,5,0), a2(-5,10,1);
	int x, y, z, val;

	a1.get(x,y,z);
	cout << "(a1) X: " << x << ", Y: " << y << ", Z: " << z << '\n';
	a2.get(x,y,z);
	cout << "(a2) X: " << x << ", Y: " << y << ", Z: " << z << '\n';
	cout << '\n';

	a3 = a1 - a2;
	a3.get(x,y,z);
	cout << "(a1 - a2) X: " << x << ", Y: " << y << ", Z: " << z << '\n';
	a3 = a2 - a1;
	a3.get(x,y,z);
	cout << "(a2 - a1) X: " << x << ", Y: " << y << ", Z: " << z << '\n';
	a3 = a1 - 7;
	a3.get(x,y,z);
	cout << "(a1 - 7) X: " << x << ", Y: " << y << ", Z: " << z << '\n';
	val = -7;
	a3 = val - a1;
	a3.get(x,y,z);
	cout << "(-7 - a1) X: " << x << ", Y: " << y << ", Z: " << z << '\n';

	a3 = a1 + a2;
	a3.get(x,y,z);
	cout << "(a1 + a2) X: " << x << ", Y: " << y << ", Z: " << z << '\n';
	a3 = a2 + a1;
	a3.get(x,y,z);
	cout << "(a2 + a1) X: " << x << ", Y: " << y << ", Z: " << z << '\n';
	a3 = a1 + 7;
	a3.get(x,y,z);
	cout << "(a1 + 7) X: " << x << ", Y: " << y << ", Z: " << z << '\n';
	val = -7;
	a3 = val + a1;
	a3.get(x,y,z);
	cout << "(-7 + a1) X: " << x << ", Y: " << y << ", Z: " << z << '\n';


	return EXIT_SUCCESS;
}
