
/*
	Exercise 1.: Create a generic base class called 'building' that stores the number of floors a building has, the number of rooms,
	and its total square footage. Create derived class called 'house' that inherits 'building' and also stores the number of
	bedrooms and the number of bathrooms. Next, create a derived class called 'office' that inherits 'building' and also stores the
	number of fire extuingishers and the number of telephones. Note: Your solution may differ from the answer given in the back of
	this book. However, if it is functionally the same, count it as correct.
*/

#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class building{ // This is an general (base) class
protected:
	int floors;
	int rooms;
	double area; // total area in sq. feet
public:
	building(int fs, int rs, double ar){ floors = fs; rooms = rs; area = ar; }
};

class house : private building{ // This is an inheriting (derived) class
private:
	int bedrooms;
	int bathrooms;
public:
	house(int bedsn, int bathsn, int floorsn, int roomsn, double arean) : building(floorsn, roomsn, arean){
		bedrooms = bedsn;
		bathrooms = bathsn;
	}
	void house_info(){
		cout << "Number of floors: " << floors << '\n';
		cout << "Number of rooms: " << rooms << '\n';
		cout << "Total area (in sq. feet): " << area << '\n';
		cout << "Number of bedrooms: " << bedrooms << '\n';
		cout << "Number of bathrooms: " << bathrooms << '\n';
	}
};

class office : private building{ // This is an inherting (derived) class
private:
	int extuingishers;
	int telephones;
public:
	office(int extsn, int telsn, int floorsn, int roomsn, double arean ) : building(floorsn, roomsn, arean){
		extuingishers = extsn;
		telephones = telsn;
	}
	void office_info(){
		cout << "Number of floors: " << floors << '\n';
		cout << "Number of rooms: " << rooms << '\n';
		cout << "Total area (in sq. feet): " << area << '\n';
		cout << "Number of fire extuingishers: " << extuingishers << '\n';
		cout << "Number of telephones: " << telephones << '\n';
		}
};

int main(){
	office o1(5, 20, 2, 4, 5000);
	house h1(2,1,1,3,600);

	cout << "= Office building (o1) =" << '\n';
	o1.office_info();
	cout << '\n';
	cout <<"= House building (h1) =" << '\n';
	h1.house_info();

	return EXIT_SUCCESS;
}

/*
	Official solution:

#include <iostream >
using namespace std;

class building{
protected:
	int floors;
	int rooms;
	double footage;
};

class house : public building
{
	int bedrooms;
	int bathrooms;
public:
	house(int f, int r, double ft, int br, int bth)
	{
		floors = f;
		rooms = r;
		footage = ft;
		bedrooms = br;
		bathrooms = bth;
	}
	void show()
	{
		cout << "floors: " << floors << ’\n’;
		cout << "rooms: " << rooms << ’\n’;
		cout << "square footage: " << footage << ’\n’;
		cout << "bedrooms: " << bedrooms << ’\n’;
		cout << "bathrooms: " << bathrooms << ’\n’;
	}
};

class office : public building
{
	int phones;
	int extinguishers;
public:
	office(int f, int r, double ft, int p, int ext)
	{
		floors = f;
		rooms = r;
		footage = ft;
		phones = p;
		extinguishers = ext;
	}
	void show()
	{
		cout << "floors: " << floors << ’\n’;
		cout << "floors: " << floors << ’\n’;
		cout << "rooms: " << rooms << ’\n’;
		cout << "square footage: " << footage << ’\n’;
		cout << "Telephones: " << phones << ’\n’;
		cout << "fore extinguishers: ";
		cout << extinguishers << ’\n’;
	}
};

int main()
{
	house h_ob(2, 12, 5000, 6, 4);
	office o_ob(4, 25, 12000, 30, 8);
	cout << "House:\n";
	h_ob.show();
	cout << "\nOffice:\n";
	o_ob.show();
	return 0;
}
*/
