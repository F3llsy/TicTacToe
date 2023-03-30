#include "header.h"

void singleplayer()
{
	system("cls");
	char input = ' ';
	int difficulty = 0;
	cout << "\n\n|-----------------|\n";
	cout << "|CHOOSE DIFFICULTY|\n";
	cout << "|1: EASY          |\n";
	cout << "|2: MEDIUM        |\n";
	cout << "|3: HARD          |\n";
	cout << "|-----------------|";
	cout << "\n\nInput: ";
	cin >> input;
	switch (input)
	{
	case '1': difficulty = 1; break;
	case '2': difficulty = 2; break;
	case '3': difficulty = 3; break;
	case 'q': return; break;
	default:cout << "\nInvalid input!"; singleplayer(); break;
	}

	while (true)
	{
		drawField();
		if (checkWin('O'))
		{
			cout << "\nComputer has won!\n\n";
			return;
		}
		if (checkFull())
		{
			cout << "\nTie!\n\n";
			return;
		}
		input = keyInput(true);
		drawField();
		if (input == 'q')
		{
			return;
		}
		if (checkWin('X'))
		{
			cout << "\nYou won!\n\n";
			return;
		}
		AI(difficulty);
	}
}
