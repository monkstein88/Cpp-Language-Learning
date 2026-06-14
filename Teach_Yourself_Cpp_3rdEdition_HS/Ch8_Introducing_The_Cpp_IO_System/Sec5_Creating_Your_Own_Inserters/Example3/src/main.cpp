
/*
	Example 3. An inserter is not limited to displaying only textual information. An inserter can perform any operation or
	conversion necessary to output information in a form need by a particual device or situation. For example, it is perfectly
	valid to create an inserter that sends information to a plotter. In this case, the inserted will need to send appropriate
	plotter codes in addition to the information. To allow you to taste the flavor of this type of inserter, the following program
	creates a class called 'triangle', which stores the width and height of right triangle. The inserter fro this class displays
	the triangle on the screen.
*/

// This program draws right triangles
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class triangle{
	int height, base;
public:
	triangle(int h, int b){ height = h; base = b; }
	friend ostream& operator<<(ostream& stream, triangle ob);
};

// Draw a triangle
ostream& operator<<(ostream& stream, triangle ob){
	int i, j, h, k;

	i = j = ob.base-1;
	for(h = ob.height-1 ; h ; h--){
		for(k = i ; k; k--)  // This section only prints the hypotenuse section, then ...
			stream << ' ';
		stream << '*';

		if(j != i){ // This checks whether this is the tip of the triangle
			for(k = j-i-1; k; k--) // ... this prints the other catet (right of) the hypotenuse
				stream << ' ';
			stream << '*';
		}

		i--;
		stream << '\n';
	}
	for(k=0; k<ob.base; k++) // This prints the bottom base (catet) of the triangle
		stream << '*';

	stream << '\n'; // Finally, go onto a new line - done with the printing
	return stream; // Return - everything that has been 'accumulated' in 'stream' so far.
}


int main(){
	triangle t1(5, 5), t2(10, 10), t3(12, 12);

	cout << t1;
	cout << endl << t2 << endl << t3;

	return EXIT_SUCCESS;
}

/*
	Notice that this program illustrates how a properly designed inserter can be fully integrated into a "normal" I/O expression.
	This program displays the following:

	 	 *
	   **
	  * *
	 *  *
	*****

            *
           **
          * *
         *  *
        *   *
       *    *
      *     *
     *      *
    *       *
	**********

	           *
	          **
	         * *
	        *  *
	       *   *
	      *    *
	     *     *
	    *      *
	   *       *
	  *        *
	 *         *
	************


*/
