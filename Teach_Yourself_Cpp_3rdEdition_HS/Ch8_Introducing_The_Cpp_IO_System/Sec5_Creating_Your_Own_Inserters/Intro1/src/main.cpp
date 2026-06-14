
/*
	Intro 1.: As stated earlier, one of the advantages of the C++ I/O system is that you can overload the I/O operators for classes
   that you create. By doing so, you can seamlessly incorporate your classes in your C++ programs. In this section you will learn
   how to overload C++'s output operator '<<'.

   In the language of C++, the output operation is called an 'insertion' and the '<<' is called the 'insertion operator'. When you
   overload the '<<' for output, you are creating in 'inserter function', or 'inserter' for short. The rationale for these terms
   comes from the fact that an output operator 'inserts' information into a stream.

   All inserted functions have this general form:
*/
   ostream& operator<<(ostream& stream, class_name obj){
      // body of inserter
      return stream;
   }
/*
   The first parameter is a reference to an object of type 'ostream'. This means that 'stream' must be an output stream.
   (Remember, 'ostream' is derived form the 'ios' class.) The second parameter receives the object that will be output. (This can
   also be a reference parameter, if that is more suitable to your application.) Notice that the inserted function returns a
   reference to 'stream' , which is of type 'ostream'. This is required if the overloaded '<<' is going to be used in a series of
   of I/O expressions, such as:
*/
   cout << ob1 << ob2 << ob3;
/*
   Within an inserter you can perform any type of procedure. What an inserted does is completely up to you. However, for the
   inserter to be constistent with good programming practices, you should limit its operations to outputting information to a
   stream.

   Although you might find this surprising at first, an inserter 'cannot' be a member of the class on which it is designed to
   operate. Here is why: When an operator function of any type is a member of a class, the left operand, which is passed imlicitly
   through the 'this' pointer, is the object that generates the call to the operator function. This implies that the left operand
   is an object of that class. Therefore, if an overloaded operator function is a member of a class the left operand must be an
   object of that class. However, when you create an inserter, the left operand is a stream and the right operand is the object
   that you want to output. Therefore, an inserter cannot be a member function.

   The fact that an inserter cannot be a member function might appear to be a serious flaw in C++ because it seems to imply that
   all data of a class that will be output using an inserter will need to be public, thus violating the key principle of
   encapsulation. However, this is not the case. Even though inserters cannot be members of the class upon which they are designed
   to operate, the can be friends of the class. In fact, in most programming situations you will encounter, an overloaded inserter
   will be a friend of the class for which it was created.

*/
