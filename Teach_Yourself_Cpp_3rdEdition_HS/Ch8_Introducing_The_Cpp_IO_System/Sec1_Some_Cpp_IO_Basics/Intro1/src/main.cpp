
/*
	Intro 1.: Before we begin our examination of C++ I/O, a few general comments are in order. The C++ I/O system, like the C I/O
   system, operates through 'streams'. Because of your C programming experience, you should already know what a stream is, but
   here is a summary. A stream is a logical device that either produces or consumes information. A stream is linked to a physical
   device by the C++ I/O system. All streams behave in the same manner, even if the actual physical devices they are linked to,
   differ. Because all streams act the same, the I/O system presents the programmer with a consistent interface, even though it
   operatates on devices with different capabilities. For example, the same function that you use to write to the screen can be
   used to write to a disk file or to the printer.

   As you know, when a C program begins execution, three predefined streams are automatically opened: 'stdin', 'stdout' and
   'stderr'. A similar thing happens when a C++ program starts running. When a C++ program starts running. When a C++ program
   starts running. When a C++ program begins, these four streams are automatically opened:

      ============================================================================
      ||    Stream:  |     Meaning:                  |     Default devices:     ||
      ----------------------------------------------------------------------------
      ||    cin      |  Standard input               |     Keyboard             ||
      ||    cout     |  Standard output              |     Screen               ||
      ||    cerr     |  Standard error               |     Screen               ||
      ||    clog     |  Buffered version of 'cerr'   |     Screen               ||
      ----------------------------------------------------------------------------

   As you have probably guessed, the streams 'cin', 'cout', and 'cerr' correspond to C's 'stding', 'stdout', and 'stderr'. You
   have already been using 'cin' an 'cout'. The stream 'clog' is simply a buffered version of 'cerr'. Standard C++ also opens wide
   (16-bit , but this depends on modern OSes - MS Windows it can 16-bit, but in Linux it can differ) character versions of these
   streams called 'wcin', 'wcout', 'wcerr', and 'wclog', but we won't be using them in this book. The wide character streams exist
   to support languages, such as Chinese, that require large character sets.

   By default, the standard streams are used to communicate with the console. However, in environments that support I/O
   redirection, these streams can be redirected to the other devices. As you learned in Chapter 1, C++ provides support for its
   I/O system in the header file <iostream>. In this file, a rather complicated set of class hierarchies is defined that supports
   I/O opeations. The I/O classes begin with a system of 'template classes'. Template classes, also called generic classes, will
   be discussed more fully in Chapter 11; briefly, a template class defines the form of a class without fully specifying the
   data upon which it will operatoe. Once a template class has been defined, specific instances of it can be created. As it
   relates to the I/O library, Standard C++ creates two specific versions of the I/O template classes: one for 8-bit characters
   (char) and another for wide characters (wchar_t). This book will discuss only the 8-bit character classes, since they are by
   far the most frequently used.

   The C++ I/O system is build upon two related, but different, template hierarchies. The first is derived from the low-level I/O
   class called 'basic_streambuf'. This class supplies the basic, low-level input and output operations and provides the
   underlying support for the entire C++ I/O system. Unless you are doing advanced I/O programmming, you will not need to use
   'basic_streambuf' directly. The class hierarchy that you will most commonly be working with is derived from 'basic_ios'. This
   is a high-level I/O class that provides formatting, error-checking, and status information related to stream I/O. 'basic_ios'
   is used as a base for several derived classes, including 'basic_istream', 'basic_ostream', and 'basic_iostream'. These classes
   are used to create streams capable of input, output, and input/output, respectively.

   As explained earlier, the I/O library creates two specific versions of the class hierarchies just described: one for 8-bit
   characters (char: cin, cout, cerr, clog) and one for wide characters (wchar_t: wcin, wcout, wcerr, wclog). The following table
   shows the mapping of the template class names to their 8-bit character-based versions (including some that will be used in
   Chapter 9):

   ======================================================
   || Template class:  |  8-Bit Character-Based Class: ||
   ------------------------------------------------------
   || basic_streambuf  |  streambuf                    ||
   || basic_ios        |  ios                          ||
   || basic_istream    |  istream                      ||
   || basic_ostream    |  ostream                      ||
   || basic_iostream   |  iostream                     ||
   || basic_fstream    |  fstream                      ||
   || basic_ifstream   |  ifstream                     ||
   || basic_ofstream   |  ofstream                     ||
   ------------------------------------------------------

   The character-based names will be used througout the remainder of this book, since they are the names that you will use in your
   programs. They are also the same names that were used by the old I/O library. This is why the old and the new I/O libraries are
   compatible at the source code level.

   One last point: The 'ios' class contains many member functions functions and variables that control or monitor the fundamental
   operation of a stream. It will be referred to frequently. Just remember that if you include '<iostream>' in your program, you
   will have access to this important class.


*/
