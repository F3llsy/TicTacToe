#include "header.h"


void multiplayer()
{
	char input = ' ';
	bool player1Turn = true;
	while (true)
	{
		drawField();
		if (checkWin('X'))
		{
			cout << "\nPlayer1 has won\n\n";
			resetField();
			return;
		}
		else if (checkWin('O'))
		{
			cout << "\n Player2 has won\n\n";
			resetField();
			return;
		}
		if (checkFull())
		{
			cout << "Tie\n\n";
			resetField();
			return;

		}
		input = keyInput(player1Turn);
		if (input == 'q')
		{
			return;
		}
		player1Turn = !player1Turn;
	}
}
