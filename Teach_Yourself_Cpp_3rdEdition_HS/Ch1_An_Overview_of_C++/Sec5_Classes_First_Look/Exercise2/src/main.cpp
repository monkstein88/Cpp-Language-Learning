
/*
	Exercise 2.: Create a class called 'card' that maintains a library card catalog entry. Have the class store a book's title, author and
	number of copies on hand. Store the title and author as strings and the number on hand as an integer. Use a public member function
	called 'store()' to store a book's information and a public member function called 'show()' to display the information. Include a short
	'main()'  function to demonstrate the class.

*/
#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 50

class card {
 char book_title[SIZE];
 char	book_author[SIZE];
 int  book_copies;

public:
	void store(char* ptitle, char* pauthor, int num);
	void show();
};

void card::store(char* ptitle, char* pauthor, int num){
	strcpy(book_title, ptitle);
	strcpy(book_author, pauthor);
	book_copies = num;
	return ;
}

void card::show(){
	cout << "Title : " << book_title << "\n";
	cout << "Author : " << book_author << "\n";
	cout << "Copies on hand : " << book_copies << "\n";
	return ;
}


int main(){

	card book1, book2, book3 ;

	book1.store((char *)"The Dead Zone",(char *)"Steven King", 2);
	book2.store((char *)"Moby Dick", (char*)"Charles Dickens", 4);
	book3.store((char *)"Call of Chuthulu", (char*)"H. P. Lovecraft", 0);

	book1.show();
	book2.show();
	book3.show();

	return 0;
}

/*
	Running the program brings up the following:

	Title : The Dead Zone
	Author : Steven King
	Copies on hand : 2
	Title : Moby Dick
	Author : Charles Dickens
	Copies on hand : 4
	Title : Call of Chuthulu
	Author : H. P. Lovecraft
	Copies on hand : 0

*/
