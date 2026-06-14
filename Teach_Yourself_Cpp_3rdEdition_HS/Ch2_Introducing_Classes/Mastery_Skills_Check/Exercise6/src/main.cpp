
/*
	Exercise 6.: Modify the following program so that all member functions are automatically in-lined:

	#include <iostream>
	#include <cstdlib>
	
	using namespace std;
	
	class myclass{
		int i, j;
	public:
		myclass(int x, int y);
		void show();
	};
	
	myclass:myclass(int x, int y){
		i = x;
		j = y;
	}
	
	void myclass::show(){
		cout << i << " " << j << "\n";
	}
	
	
	int main(){
		myclass count(2, 3);
		
		coumt.show();
		
		return EXIT_SUCCESS;
	}

*/

#include <iostream>
#include <cstdlib>

using namespace std;

class myclass{
	int i, j;
public:
	myclass(int x, int y){
		i = x;
		j = y;
	}
	void show(){
		cout << i << " " << j << "\n";
	}
};


int main(){
	myclass count(2, 3);
	
	count.show();
	
	return EXIT_SUCCESS;
}
