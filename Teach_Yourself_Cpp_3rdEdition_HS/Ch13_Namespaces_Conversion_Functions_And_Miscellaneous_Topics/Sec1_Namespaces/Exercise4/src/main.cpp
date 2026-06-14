
/*
	Exercise 4.: Explain why most programs in this book contain a 'using' statement. Describe one alternative.
*/

/*
   My answer:
      - Because, most of the programs in this book rely on functions/objects from the C++ Standard Library, which in itself, has all its
      functuality defined and wrapped inside its own delcared namespace - 'std'. So to refer to the items declared in the Standarc C++
      Library more easily and straight forward -we have used the 'using namespace std;' statement so far. Which allows us to call directly
      on the objects from there to our scope, without qualification.

      An alternative could be to not use the 'using namespace std;' at all, and just stick to using (calling upo) every object from the
      Standard Library, with a qualifier prepending it like 'std::', for each and every time we use them.

      The other alternative is to specify only those members of the namespace that we're going to use - bringing them into our scope at
      once.

   Official answer:
      - Since the entire C++ standard library, including the streams 'cin' and 'cout', is declared within the 'std' namespace, for
      convenience most programs have brought the 'std' namespace into view. This allows the standard library names to be used directly
      without qualification by 'std::''. For many programs, an alternative would be to simply qualify all references to the standard
      library with 'std::''. Another alternative is to create using statements for only 'std::cin' or 'std::cout'.
*/
