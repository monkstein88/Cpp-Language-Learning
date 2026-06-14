
/*
	Intro 1.: Until now, all examples in this book displayed information to the screen using C++'s default formats. However, it is
   possible to output information in a wide variaty of forms. In fact, you can format data using C++'s I/O system in much the same
   way that you do using C's 'printf()' function. Also, you can alter certain aspects of the way information is input.

   Each stream has associated with it a set of format flags that control the way information is formatted. The 'ios' class
   declares a bitmask enumeration called 'fmtflags', in which the values are defined:

      ------------------------------------------------------------
      |  adjustfield    floatfield     right          skipws     |
      |  basefield      hex            scientific     unitbuf    |
      |  boolalpha      internal       showbase       uppercase  |
      |  dec            left           showpoint                 |
      |  fixed          oct            showpos                   |
      ------------------------------------------------------------

   These values are used to set or clear the format flags and are defined within 'ios'. If you are using an older, nonstandard
   compiler, it may not define the 'fmtflags' enumeration type. In this case, the format flags will be encoded into a long integer.

   When the 'skipws' flag is set, leading whitespace characters (spaces, tabs, and newlines) are discarded when input is being
   performed on a stream. When 'skipws' is cleared, whitespace characters are not discarded.

   When the 'left' flag is set, output is left justified. When 'right' is set, output is right justified.

   When the 'internal' flag is set, a numeric value is padded to fill a field by inserting spaces between any sign or base
   character. If none of these flags is set, output is right justified by default.

   By default, numeric values are output in decimal. However, it is possible to change the number base. Setting the 'oct' flag
   causes output to be displayed in octal. Setting the 'hex' flag causes output to be displayed in hexadecimal. To return output
   to decimal, set the 'dec' flag.

   Setting 'showbase' causes the base of numeric values to be shown. For example, if the conversion base is hexadecimal, the value
   1F will be displayed as 0x1F.

   By default, when scientific notation is displayed, the 'e' is in lowercase. Also, when a hexadecimal value is displayed, the
   'x' is lowercase. When 'uppercase' is set, these characters are displayed in uppercase. Setting 'showpos' causes a leading plus
   sign to be displayed before positive values. Setting 'showpoint' causes a decimal point and trailing zeros to be displayed for
   all floating-point output-whether needed or not.

   If the 'scientific' flag is set, floating-point numeric values are displayed using scientific notation.
   When 'fixed' is set, floating-point values are dsiplayed using normal notation. When neither flag is set, the compiler chooses
   an appropriate method.

   When 'unitbuf' is set, Booleans can be input or output using the keywords 'true' and 'false'.

   Since it is common to refer to the 'oct', 'dec' and 'hex' fields, they can be collectively referred to as 'basefield'.
   Simirarly, the 'left', 'right', and 'internal' fields can be referred to as 'adjustfield'.

   Fianlly, the 'scientific and 'fixed' fields can be references as 'floatfield'.

   To set a format flag, use the 'setf()' function. This function is a member of 'ios'. Its most common form is shown here:

   fmtflags setf(fmtflags flags);

   This function returns the previous settings of the format flags and turns of those flags specified by 'flags'. (All other
   flags are unnafected.) For example, to turn on the 'showpos' flag, you can use this statement.

   stream.setf(ios::showpos);

   Here 'stream' is the stream that you wish to affect. Notice the use of the scope resolution operator. Remember, 'showpos' is
   enumerated constant within the 'ios' class. Therefore, it is necessary to tell the compiler this fact by preceding 'showpos'
   with the class name and scope resolution operator. If you don't the constant 'showpos' will simply not be recognized.

   It is important to understand that 'set()' is a member function of the 'ios' class and affects streams created by that class.
   Therefore, any call to 'setf()' is done relative to a specific stream. There is no concept of calling 'setf()' by itself. Put
   differently, there is no concenpt in C++ of global format status. Each stream maintains its own format status information
   individually.

   It is possible to set more than one flag in a single call to 'setf()' rather than making multiple calls. To do this, OR
   together the values of the flags you want to set. For example, this call sets the 'showbase' and 'hex' flags for 'cout':

   cout.setf(ios::showbase | ios::hex);

   Remember: Because the format flags are defined within the 'ios' class, you must access their values by using 'ios' and the
   scope resolution operator ('::'). For example, 'showbase' by itself will not be recoginized; you must specify 'ios::showbase'.

   The complement of 'setf()' is 'unsetf()'. This member function of 'ios' clears one or more format flags. Its most common
   prototype form is shown here:

   void unsetf(fmtflags flags);

   The flags specified by 'flags' are cleared. (All other flags are unaffected.)

   There will be times when you want to know, but not alter, the current format settings. Since both 'setf()' and 'unsetf()' alter
   the setting of one or more flags, 'ios' also includes the member function 'flags()', which simply returns the current setting
   for each format flag. Its prototype is shown here:

   fmtflags flags();

   The 'flags()' function has a second form that allows you to set 'all' format flags associated with a stream to those specified
   in the argument to 'flags()'. The prototype for this version 'flags()' is shown here:

   fmtflags flags(fmtflags f);

   When you use this version, the bit pattern found in 'f' is copied to the variable used to hold the format flags associated with
   the stream, thus overwriting all previous flag settings. The function returns the previous settings.



*/
