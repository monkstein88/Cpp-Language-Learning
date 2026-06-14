
/*
	Exercise 2.: Create a class that contains a person's name and telephone number. Using 'new', dynamically
	allocate an object of this class and put your name and phone number into these fields within this object.
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class person_data_struct{
	char first_name[80];
	char middle_name[80];
	char last_name[80];
	char phone_num[40];
public:
	void store(char* fname,char* mname, char* lname, char* ph_num){
		strcpy(first_name,fname);
		strcpy(middle_name,mname);
		strcpy(last_name,lname);
		strcpy(phone_num,ph_num);
	}
	void show(){
		cout << "First name: " << first_name << "\n";
		cout << "Middle name: " << middle_name << "\n";
		cout << "Last name: " << last_name << "\n";
		cout << "Phone #: " << phone_num << "\n";
	}
};

int main(){
	person_data_struct* p_data ;
	p_data = new person_data_struct;

	if(!p_data){
		cout << "Allocation error!\n";
		return EXIT_FAILURE;
	}
	p_data->store((char*)"Monk", (char*)"M.", (char*)"Monkstein", (char*)"+4746622998"  );
	cout << "Individual's data struct:" << "\n";
	p_data->show();
	delete p_data;

	return EXIT_SUCCESS;
}

/*

*/
