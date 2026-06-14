
/*
	Intro 1.: In addition to overloading the insertion and extraction operators, you can further customize C++'s I/O system by
	creating your own manipulator functions. Custom manipulators are important for two main reasons:
		- First, a manipulator can consolidate a sequence of several separate I/O operations.
		For example, it is not uncommon to have situations in which the same sequence of I/O operations occur frequently within a
	   program. In these cases you can use a custom manipulator to perform these actions, thus simplifying your source code and
		preventing accidental errors.
		- Second, a custom manipulator can be important when you need to perform I/O operations on a nonstandard device. For
		example, you could use a manipulator to send control codes to a special type of printer or an optic recognition system.

	Custom manipulators are a feature of C++ that supports OOP, but they can also benefit programs that aren't object oriented.
	As you will see, custom manipulaotrs can help make any I/O-intensive program clearer and more efficient.

	As you know, there are two basic types of manipulators: those that operate on input streams and those that operate on
	output streams. In addition to these two broad categories, there is a secondary division: those manipulators that take an
	argument and those that don't. There are some significant differences between the way a parameterless manipulator and a
	parameterized manipulator are created. Further, creating parameterized manipulators is substantially more difficult than
	creating parameterless ones and is beyond the scope of this book. However, writing your own parameterless manipulators is
	quite easy and is examined here.

	All parameterless manipulator output functions have this skeleton:
*/
	ostream& manip_name(ostream& stream){

		// your code here

		return stream;
	}
/*
	Here 'manip-name' is the name of the manipulator and 'stream' is a reference to the invoking stream. A reference to the stream
	is returned. This is necessary if a manipulator is used as part of a larger I/O expression. It is important to understand that
	even though the manipulator has its single arument a reference to the stream upon which it is operating, no argument is used
	when the manipulator is called in an output operation.

	All parameterless input manipulator functions have this skeleton:
*/
	istream& manip_name(istream& stream){

		// your code here

		return stream;
	}
/*
	An input manipulator receives a reference to the stream on which it was invoked. This stream must be returned by the
	manipulator.

	Remember: It is crucial that your manipulators return a reference to the invoking stream. If this is not done, your
	manipulaotrs cannot be used in sequence of input and output operations.
*/
