
/*
	Example 6.: In C, if you want to restrict the scope of a global name to the file in which it is declared, you declare that name as
   'static'. For example, consider the following two files that are part of the same program:

   -----------------------------------------------------------------------------------------------------------------------------------
   ||   File One                                                                    File Two                                        ||
   ===================================================================================================================================
   ||                                                                                                                               ||
   || static int counter;                                                           extern int counter;                             ||
   || void f1()                                                                     void f2()                                       ||
   || {                                                                             {                                               ||
   ||    counter = 99; // OK                                                           counter = 10; // error                       ||
   || }                                                                             }                                               ||
   -----------------------------------------------------------------------------------------------------------------------------------

   Because 'counter' is defined in File One, it can be used in File One. In File Two, even though 'counter' is specified as 'extern', it is
   still unavailable, and any attempt to use it results in an error. By preceding 'counter' with 'static' in File One, the programmer has
   restricted its scope to that file.

   Although the use of 'static' global declarations is still allowed in C++, a better way to accomplish the same end is to use an unnamed
   namespace, as shown in this example:

   -----------------------------------------------------------------------------------------------------------------------------------
   ||   File One                                                                    File Two                                        ||
   ===================================================================================================================================
   ||                                                                                                                               ||
   || namespace                                                                     extern int counter;                             ||
   || {                                                                             void f2()                                       ||
   ||    int counter;                                                               {                                               ||
   || }                                                                                counter = 10; // error                       ||                                                 ||
   || void f1()                                                                     }                                               ||
   || {                                                                                                                             ||
   ||    counter = 99; // OK                                                                                                        ||
   || }                                                                                                                             ||
   -----------------------------------------------------------------------------------------------------------------------------------

   Here 'counter' is also restricted to File One. The use of the unnamed namespace rather than 'static' is method recommended by Standard
   C++.

	(Note: There is no code/program with this example.)
*/
