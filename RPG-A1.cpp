//============================================================================
// Name        : RPG-A1.cpp
// Author      : The Real MC
// Version     : 0.0.1
// Copyright   : None
// Description : RPG - The Battle Scene
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	string command;
	cout << "1 Thug appears! ";
	cout << "What will you do?\nFIGHT\nDEFEND\nRUN\nEXIT\n";
	do {
		getline (cin,command);
		if (command == FIGHT)
		{
			fight ();
		}
		else if (command == DEFEND)
		{
			defend ();
		}
		else if (command == RUN)
		{
			run ();
		}
		else if (command == EXIT)
		{
			return 0;
		}
		else
		{
			cout << "Invalid response.\n";
		}
	} while (command != EXIT);
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
