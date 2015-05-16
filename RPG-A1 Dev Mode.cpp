//============================================================================
// Name        : RPG-A1.cpp
// Author      : The Real MC
// Version     : 0.0.2
// Copyright   : None
// Description : RPG - The Battle Scene
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void fight ();
void defend ();
void run ();

int main()
{
	string command;
	cout << "1 Thug appears! ";
	cout << "What will you do?\nFIGHT\nDEFEND\nRUN\nEXIT\n";
	do {
		getline (cin,command);
		cout << command << " \n";
		int strcmp ( const char * str1, const char * str2 );
		if (command == "FIGHT")
		{
			fight ();
		}
		else if (command == "DEFEND")
		{
			defend ();
		}
		else if (command == "RUN")
		{
			run ();
		}
		else if (command == "EXIT")
		{
			return 0;
		}
		else
		{
			cout << "Invalid response.\n";
		}
	} while (command != "EXIT");
}

void fight ()
{
	cout << "UNDER CONSTRUCTION\n";
}

void defend ()
{
	cout << "UNDER CONSTRUCTION\n";
}

void run ()
{
	cout << "UNDER CONSTRUCTION\n";
}
