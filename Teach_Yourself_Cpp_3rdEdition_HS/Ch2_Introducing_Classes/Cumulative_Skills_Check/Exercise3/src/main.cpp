
/*
	Exercise 3.: Create a class called 'dice' that contains one private integer variable. Create a function
	called 'roll()' that uses the standard random number generator, 'rand()', to generate a number between
	1 and 6. Then have 'roll()' display that value.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class dice{
	int dice_val;
	long long int dice_roll_cnt;
public:
	void roll(){
		dice_val = (rand()%6)+1;
		dice_roll_cnt++;
		cout << "Dice roll #" << dice_roll_cnt << " : " << dice_val << "\n";
	}
	dice(){
		dice_roll_cnt = 0;
		srand(time(NULL));
	}
};

int main(){
	int wanted_rolls_cnt; 
	dice d1;
	
	cout << "Enter number of rolls you want: ";
	cin >> wanted_rolls_cnt;
	for(;wanted_rolls_cnt--;) d1.roll();
	
	return EXIT_SUCCESS;
}
