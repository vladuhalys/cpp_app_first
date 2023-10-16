#include <iostream>
#include <Windows.h>
using std::cout;
using std::endl;

int main()
{
	system("color 0A");
	//SetConsoleCP(1251); // #3
	//SetConsoleOutputCP(1251); // #3
	//setlocale(LC_ALL, "Ukrainian"); #1
	//system("chcp 1251"); // #2
	//system("cls"); // #2
	COORD pos = { 50, 1 };
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, pos);
	SetConsoleTextAttribute(output, 11);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	pos.Y = 2;
	SetConsoleCursorPosition(output, pos);
	cout << char(186); 
	SetConsoleTextAttribute(output, 13);
	cout << " ID "; 
	SetConsoleTextAttribute(output, 10);
	cout << char(186); 
	SetConsoleTextAttribute(output, 13);
	cout << " USERBANE "; 
	SetConsoleTextAttribute(output, 13);
	cout << char(186); 
	SetConsoleTextAttribute(output, 12);
	cout << " AGE "; 
	SetConsoleTextAttribute(output, 13);
	cout << char(186) << endl;
	pos.Y = 3;
	SetConsoleCursorPosition(output, pos);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	return 0;
}