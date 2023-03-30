#include "header.h"

void AI(int difficulty)
{
	if (checkFull())
	{
		return;
	}


	if (difficulty == 1)
	{
		int check = rand() % 3;
		if (check != 1)
		{
			for (int i = 1; i < 10; i++)
			{
				if (field[i] == ' ')
				{
					field[i] = 'O';
					if (checkWin('O'))
					{
						return;
					}
					else
					{
						field[i] = ' ';
					}
				}
			}
		}
		else if (check != 2)
		{
			for (int i = 1; i < 10; i++)
			{
				if (field[i] == ' ')
				{
					field[i] = 'X';
					if (checkWin('X'))
					{
						field[i] = 'O';
						return;
					}
					else
					{
						field[i] = ' ';
					}
				}
			}
		}
		while (true)
		{
			int i = rand() % 9 + 1;
			if (field[i] == ' ')
			{
				field[i] = 'O';
				return;
			}
		}
	}
	else if (difficulty == 2)
	{
		int check = rand() % 5 + 1;
		if (check != 3)
		{
			for (int i = 1; i < 10; i++)
			{
				if (field[i] == ' ')
				{
					field[i] = 'O';
					if (checkWin('O'))
					{
						return;
					}
					else
					{
						field[i] = ' ';
					}
				}
			}
		}
		else if (check != 4)
		{
			for (int i = 1; i < 10; i++)
			{
				if (field[i] == ' ')
				{
					field[i] = 'X';
					if (checkWin('X'))
					{
						field[i] = 'O';
						return;
					}
					else
					{
						field[i] = ' ';
					}
				}
			}
		}
		while (true)
		{
			int i = rand() % 9 + 1;
			if (field[i] == ' ')
			{
				field[i] = 'O';
				return;
			}
		}
	}
	else if (difficulty == 3)
	{
		//Check if AI can win
		for (int i = 1; i < 10; i++)
		{
			if (field[i] == ' ')
			{
				field[i] = 'O';
				if (checkWin('O'))
				{
					return;
				}
				else
				{
					field[i] = ' ';
				}
			}
		}

		//Check if Player can win and stop it 
		for (int i = 1; i < 10; i++)
		{
			if (field[i] == ' ')
			{
				field[i] = 'X';
				if (checkWin('X'))
				{
					field[i] = 'O';
					return;
				}
				else
				{
					field[i] = ' ';
				}
			}
		}

		//Set to field in the middle with a chance when it is still empty
		int middle = rand() % 4;
		if (field[5] == ' ' && middle != 1)
		{
			field[5] = 'O';
			return;
		}

		//Select a random field
		while (true)
		{
			int i = rand() % 9 + 1;
			if (field[i] == ' ')
			{
				field[i] = 'O';
				return;
			}
		}
	}
	else
	{
		return;
	}
}