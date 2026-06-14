
/*
	Intro 1.: There is a second way that you can format information using C++'s I/O system. This method uses special functions
   called 'I/O manipulators'. As you will see, I/O manipulators are, in some situations, easier to use than the 'ios' format
   flags and functions.

   I/O manipulators are special I/O format funcctions that can occur 'within' an I/O statetement, instead of separate from it the
   way the 'ios' member functions must. The stadard manipulators are shown in the table below. As you can see, many of the I/O
   manipulators parallel member functions of the 'ios' class. Many of the manipulators shown in the table were added recenctly to
   Standard C++ and will be supported only by modern compilers.


   The Standard C++ I/O Manipulators
   =====================================================================================================================
   ||    Manipulator:              |     Purpose:                                              |     Input/Otput:     ||
   ---------------------------------------------------------------------------------------------------------------------
   ||    boolalpha                 |  Turns on 'boolalpha' flag                                |     Input/Output     ||
   ||    dec                       |  Turns on 'dec' flag                                      |     Input/Output     ||
   ||    endl                      |  Outputs a newline character and flushes the stream       |     Output           ||
   ||    ends                      |  Outputs a null                                           |     Output           ||
   ||    fixed                     |  Turns on 'fixed' flag                                    |     Output           ||
   ||    flush                     |  Flushes a stream                                         |     Output           ||
   ||    hex                       |  Turns on 'hex' flag                                      |     Input/Output     ||
   ||    internal                  |  Turns on 'internal' flag                                 |     Output           ||
   ||    left                      |  Turns on 'left' flag                                     |     Output           ||
   ||    noboolalpha               |  Turns off 'boolalpha' flag                               |     Input/Output     ||
   ||    noshowbase                |  Turns off 'showbase' flag                                |     Output           ||
   ||    noshowpoint               |  Turns off 'showpoint' flag                               |     Output           ||
   ||    noshowpos                 |  Turns off 'showpos' flag                                 |     Output           ||
   ||    noskipws                  |  Turns off 'skipws' flag                                  |     Input            ||
   ||    nounitbuf                 |  Turns off 'unitbuf' flag                                 |     Output           ||
   ||    nouppercase               |  Turns off 'uppercase' flag                               |     Output           ||
   ||    oct                       |  Turns on 'oct' flag                                      |     Input/Output     ||
   ||    resetiosflags(fmtflags f) |  Turns off the flags specified in 'f'                     |     Input/Output     ||
   ||    right                     |  Turns on 'right' flag                                    |     Output           ||
   ||    scientific                |  Turns on 'scientific' flag                               |     Output           ||
   ||    setbase(int base)         |  Sets the number base to 'base'                           |     Input/Output     ||
   ||    setfill(int ch)           |  Sets the fill character to 'ch'                          |     Output           ||
   ||    setiosflags(fmtflags f)   |  Turns on the flags specified in 'f'                      |     Input/Output     ||
   ||    setprecision(int p)       |  Sets the number of digits of precision                   |     Output           ||
   ||    setw(int w)               |  Sets the field width to 'w'                              |     Output           ||
   ||    showbase                  |  Turns on 'showbase' flag                                 |     Output           ||
   ||    showpoint                 |  Turns on 'showpoint' flag                                |     Output           ||
   ||    showpos                   |  Turns on 'showpos' flag                                  |     Output           ||
   ||    skipws                    |  Turns on 'skipws' flag                                   |     Input            ||
   ||    unitbuf                   |  Turns on 'unitbuf' flag                                  |     Output           ||
   ||    uppercase                 |  Turns on 'uppercase' flag                                |     Output           ||
   ||    ws                        |  Skips leading white space                                |     Input            ||
   ---------------------------------------------------------------------------------------------------------------------

   To access manipulators that take parameters, such as 'setw()', you must include '<iomanip>' in you program. This is not
   necessary when you are using a manipulator that does not require an argument.

   As stated above, the manipulators can occur in the chain of I/O operations. For example:

   cout << oct << 100 << hex << 100;
   cout << setw(10) << 100;

   The first statement tells 'cout' to display integers in octal and then output 100 in octal. It then tells the stream to
   display integers in hexadecimal and then outputs 100 in hexadecimal format. The second statement sets the field width to 10
   and then displays 100 in hexadecimal format again. Notice that when a manipulator does not take an argument, such as 'oct' in
   the example, it is not followed by parentheses. This is becausee it is the address of the manipulator that is passed to the
   overloaded '<<' operator.

   Keep in mind that an I/O manipulator affects only the stream of which the I/O expression is a part. I/O manipulators do 'not'
   affect all streams currently opened for use.

   As the preceding example suggests, the main advantages of using manipulation over the 'ios' member functions is that they are
   often easier to use and allow more compact code to be written.

   If you wish to set specific format flags manually by using a manipulator ,use 'setiosflags()'. This manipulator performs the
   same function as the member function 'setf()'. To turn off flags use the 'resetiosflags()' manipulator. This manipulator is
   equivalent to 'unsetf()'.

*/

#include <iostream>
#include <iomanip>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){

   cout << oct << 100 << ' ' << hex << 100 << '\n';
   cout << setw(10) << 100 << ' ' << 100 << '\n'; // Notice that the 'setw()' works only the very first output value instance,
                                                  // that immediately follows that setting.
   cout << 100 << '\n';

   return EXIT_SUCCESS;
}

/*
   The above program prints out the following:

   144 64
           64 64
   64

*/
