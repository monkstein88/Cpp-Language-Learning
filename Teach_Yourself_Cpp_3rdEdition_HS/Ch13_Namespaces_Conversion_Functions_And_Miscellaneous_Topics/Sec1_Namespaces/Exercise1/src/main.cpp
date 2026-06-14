
/*
	Exercise 1.: Conver the following program from Chapter 9 so that it does not use the 'using namespace std' statement.

   #include <iostream>
   #include <fstream>
   #include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
   using namespace std;

   int main(int argc, char *argv[])
   {
      if(argc != 3)
      {
         cout << "Usage : CONVERT <input> <output>\n";
         return EXIT_FAILURE;
      }

      ifstream fin(argv[1]); // open input file
      ofstream fout(argv[2]); // create output file

      if(!fout)
      {
         cout << "Cannot open output file.\n";
         return EXIT_FAILURE;
      }

      if(!fin)
      {
         cout << "Cannot open input file.\n";
         return EXIT_FAILURE;
      }

      char ch;

      fin.unsetf(ios::skipws); // do not skip spaces
      while(!fin.eof())
      {
         fin >> ch;
         if(ch == ' ')
            ch = '|';
         if(!fin.eof())
            fout << ch;
      }

      fin.close();
      fout.close();

      return EXIT_SUCCESS;
   }

*/

// Convert spaces to '|'s.
#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function

using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::ios;

int main(int argc, char *argv[])
{
   if(argc != 3)
   {
      cout << "Usage : CONVERT <input> <output>\n";
      return EXIT_FAILURE;
   }

   ifstream fin(argv[1]); // open input file
   ofstream fout(argv[2]); // create output file

   if(!fout)
   {
      cout << "Cannot open output file.\n";
      return EXIT_FAILURE;
   }

   if(!fin)
   {
      cout << "Cannot open input file.\n";
      return EXIT_FAILURE;
   }

   char ch;

   fin.unsetf(ios::skipws); // do not skip spaces
   while(!fin.eof())
   {
      fin >> ch;
      if(ch == ' ')
         ch = '|';
      if(!fin.eof())
         fout << ch;
   }

   fin.close();
   fout.close();

   return EXIT_SUCCESS;
}

/*
   This program displays the following when ran:

   $ ./Ch13_Sec1_Exercise1 readfile writefile

   Contents of 'writefile':

      I|wandered|lonely|as|a|cloud
   That|floats|on|high|o'er|vales|and|hills,
   When|all|at|once|I|saw|a|crowd,
   A|host,|of|golden|daffodils;
   Beside|the|lake,|beneath|the|trees,
   Fluttering|and|dancing|in|the|breeze.

   	Continuous|as|the|stars|that|shine
   And|twinkle|on|the|milky|way,
   They|stretched|in|never-ending|line
   Along|the|margin|of|a|bay:
   Ten|thousand|saw|I|at|a|glance,
   Tossing|their|heads|in|sprightly|dance.

   	The|waves|beside|them|danced;|but|they
   Out-did|the|sparkling|waves|in|glee:
   A|poet|could|not|but|be|gay,
   In|such|a|jocund|company:
   I|gazed—and|gazed—but|little|thought
   What|wealth|the|show|to|me|had|brought:

   	For|oft,|when|on|my|couch|I|lie
   In|vacant|or|in|pensive|mood,
   They|flash|upon|that|inward|eye
   Which|is|the|bliss|of|solitude;
   And|then|my|heart|with|pleasure|fills,
   And|dances|with|the|daffodils.

*/
