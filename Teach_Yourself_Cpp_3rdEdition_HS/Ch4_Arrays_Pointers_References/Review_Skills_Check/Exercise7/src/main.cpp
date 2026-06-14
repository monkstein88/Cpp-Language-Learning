
/*
	Exercise 7.: Given the following class, show how to add a friend function called 'isneg()' that takes one
	parameter of type 'myclass' and returns true if 'num' is negative and false otherwise.

*/

class myclass{
	int num;
public:
		myclass(int x){ num = x;}
		friend bool isneg(myclass y);
};

bool isneg(myclass y){
	if(y.num < 0)
		return true;
	else
		return false;
}
