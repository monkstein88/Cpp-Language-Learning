
/*
	Exercise 3.: Most C++ compilers supply nonstandard functions that allow cursor positioning and the like. If your compiler
	supplies such functions, create a function called 'myclreol()' that clears the line from the current cursor position to the
	end of the line. However, give this function a parameter that specifies the number of character positions to clear. If the
	parameter is not specified, automatically clear the entire line. Otherwise, clear only the number of character positions
	specified by the parameter.

	N.B! The following program is built on a PC featuring Microsoft's Windows 10 x64 Pro, with GCC 8.1.0 MinGW-w64 compiler,
	using 'windows.h' system libraries. Thus, it will only compile and run on a MS Windows machine.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <windows.h>
using namespace std;

void gotoxy(short int x,short int y);
int wherex();
int wherey();

void myclreol(int len);

int main(){
	int i;
	short x_pos_start, y_pos_start;

	x_pos_start = wherex();
	y_pos_start = wherey();
	//gotoxy(x_pos_start,y_pos_start);
	for(i=0; i<5;i++)
		cout << "abcdefghijklmnopqrstyvwxyz1234567890\n";

	gotoxy(x_pos_start,y_pos_start-2);

	return EXIT_SUCCESS;
}

// Clear from the current cursor position till the end of the line.
void myclreol(int len = -1){
	int x_pos;
	int y_pos;

	x_pos = wherex();
	y_pos = wherey();

	if(len = -1){
		y_pos = 0;
		gotoxy(x_pos,y_pos);
	}
	for(;y_pos < 80; y_pos++)
		cout << ' ';
}

// These functions depend on the 'windows.h'
void gotoxy(short int x, short int y) // 'x' - is the column index, 'y' - is the row index
{
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int wherex() // get the column index
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    return csbi.dwCursorPosition.X;
}
int wherey() // get the row index
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    return csbi.dwCursorPosition.Y;
}
