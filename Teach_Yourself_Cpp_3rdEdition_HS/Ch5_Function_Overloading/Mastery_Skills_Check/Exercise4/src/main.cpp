
/*
	Exercise 4.: What is the most common general form of copy constructor ?
  My answer:
    The most general form:

		class myclass{
			// ...
		public:
			myclass(const myclass &obj){
				// ...
			}
			// ...
		};

  Official answer:
		The most common general form of a copy constructor is shown here:
			classname (const classname &obj)
			{
				// body of constructor
			}
*/
