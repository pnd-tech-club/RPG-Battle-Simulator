//============================================================================
// Name        : RPG-A1.cpp
// Author      : The Real MC
// Version     : 0.0.3a
// Copyright   : None
// Description : RPG - The Battle Scene
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void fight ();
void defend ();
void run ();
int phealth = 9999;
int pattack = 255;
int pdefense = 255;
int pspeed = 75;
int ehealth = 100000;
int eattack = 100;
int edefense = 100;
int espeed = 45;

int main()
{
	//Player and Enemy Turn Switch
	//0 = Off
	//1 = On
	int pt_switch = 0;
	int et_switch = 0;

	string command;
	cout << "Thug Lord Fronk appears! ";
	do{
		do {
			cout << "What will you do?\nFIGHT\nDEFEND\nRUN\nEXIT\n";
			getline (cin,command);
			cout << command << " \n";
			int strcmp ( const char * str1, const char * str2 );
			if (command == "FIGHT")
			{
				pt_switch = 1;
				fight ();
			}
			else if (command == "DEFEND")
			{
				pt_switch = 1;
				defend ();
			}
			else if (command == "RUN")
			{
				pt_switch = 1;
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
	} while (ehealth > 0);
}

//Fight function
void fight ()
{
	cout << "UNDER CONSTRUCTION\n";
}

//Defend function
void defend ()
{
	cout << "UNDER CONSTRUCTION\n";
}

//Run function
void run ()
{
	cout << "UNDER CONSTRUCTION\n";
}

//player stats
void pstats ()
{

}

//enemy stats
void estats ()
{

}
