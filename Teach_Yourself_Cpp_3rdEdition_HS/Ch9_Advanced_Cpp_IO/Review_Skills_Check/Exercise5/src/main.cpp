
/*
	Exercise 5.: Given the following class, create an inserter and an extractor for it.

	class date{
		char d[9]; // store date as astring: mm/dd/yy
	public:
		// add inserter and extractor
	};
*/

class date{
	char d[9]; // store date as astring: mm/dd/yy
public:
	friend ostream& operator<<(ostream& stream, date ob){ // 'inserter' function

		stream  << "Date [mm/dd/yy] is: "<< d;

		return stream;
	}

	friend istream& operator>>(istream& stream, date& ob){ // 'extractor' function

		cout << "Enter date [mm/dd/yy]: ";
		stream >> d;

		return stream;
	}
};
