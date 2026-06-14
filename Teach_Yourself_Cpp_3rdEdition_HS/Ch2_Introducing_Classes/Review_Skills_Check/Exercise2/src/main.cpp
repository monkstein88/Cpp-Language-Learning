
/*
	Ex 2.: Create a class that holds name and address information. Store all the
	information character strings that are private members of the class. Inlclude
	a public funtion that stores the name and address. Also include public function
	that displays the name and address. (Call these functions 'store()' and 'display()')
*/
#include <iostream>
#include <cstring>
using namespace std;

#define MAX_STR_SIZE 80

class record{
	//private:
	char full_name[MAX_STR_SIZE],
			 country[MAX_STR_SIZE],
			 city[MAX_STR_SIZE],
			 address[MAX_STR_SIZE],
			 zip_code[MAX_STR_SIZE];
	public:
			void store(char* fname, char* cntry, char* cty, char* addr, char* zip);
			void display();
};


int main(){
	record my_record;

	my_record.store( (char*)"Monk M. Monkstein", (char*)"BG", (char*)"Sofia", (char*)"Bregalnica 12 Str.", (char*)"1000");
	my_record.display();

	return 0;
}


void record::store(char* fname, char* cntry, char* cty, char* addr, char* zip){
	strcpy(full_name,fname);
	strcpy(country,cntry);
	strcpy(city,cty);
	strcpy(address,addr);
	strcpy(zip_code,zip);
}

void record::display(){
	cout << "Person's record: " << '\n';
	cout << "  " << "full name: " << full_name << '\n';
	cout << "  " << "country: " << country << '\n';
	cout << "  " << "city: " << city << '\n';
	cout << "  " << "address: " << address << '\n';
	cout << "  " << "Zip Code: " << zip_code << '\n';
}
