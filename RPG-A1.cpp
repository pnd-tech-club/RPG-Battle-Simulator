//============================================================================
// Name        : RPG-A1.cpp
// Author      : The Real MC
// Version     : 0.0.2
// Copyright   : None
// Description : RPG - The Battle Scene
//============================================================================

#include <iostream>
using namespace std;

void fight();
void defend();
void run();

int main()
{
	int command;
	cout << "1 Thug appears! ";
	cout << "What will you do?\n1: FIGHT\n2: DEFEND\n3: RUN\n4: EXIT\n";
	do {
		cin >> command;
		if (command == 1)
		{
			fight ();
		}
		else if (command == 2)
		{
			defend ();
		}
		else if (command == 3)
		{
			run ();
		}
		else if (command == 4)
		{
			return 0;
		}
		else
		{
			cout << "Invalid response.\n";
		}
	} while (command != 4);
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
