
/*
	Exercise 4.: In your own words, explain why generic functions are valuable and may help simplify the source code for the program that you
  try create.
*/


/*
  My answer:
    - Because it allows to define a single, general case, self-overloading function, that will behave in a similar manner, independent on
    the type of data you supply/pass to it.  Thus, you're *freed* from the need to declare & define a set of overloaded functions that will
    need to cover each and every case that just dependent on the type of parameter, but will anyway do the exact same stuff. Thus, you will
    only need to express you algorithm/function in a general way upon a single 'all encompassing' type parameter variable. 

  Official answer:
    - Generic functions are valuable because they allow you to define a general algorithm that can be applied to various types of data.
    (That is, specific versions of the algorithm need not be explicitly created by you.) Generic functions further help implement the
    concept of ”one interface, multiple methods,” which is a common theme in C++ programming.

*/
