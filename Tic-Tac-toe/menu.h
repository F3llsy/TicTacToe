#include "header.h"

void menu()
{
	while (true)
	{

		char inputmenu;
		cout << "\n\n|---------------|\n";
		cout << "|     MENU      |\n";
		cout << "|---------------|\n";
		cout << "|1) Singleplayer|\n";
		cout << "|2) Multiplayer |\n";
		cout << "|3) Controls    |\n";
		cout << "|4) Exit        |\n";
		cout << "|---------------|\n\n";
		cout << "Input: ";
		cin >> inputmenu;

		if (inputmenu == '1')
		{
			singleplayer();
		}
		else if (inputmenu == '2')
		{
			multiplayer();
		}
		else if (inputmenu == '3')
		{
			controls();
		}
		else if (inputmenu == '4')
		{
			return;
		}
		else 
		{ 
			system("cls"); 
			cout << "\nInvalid Input!";
		}
	}
}
