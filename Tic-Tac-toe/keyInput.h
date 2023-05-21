#include "header.h"

char keyInput(bool x)
{
	while (true)
	{
		cout << "\n\nInput: ";
		char input = ' ';
		cin >> input;
		int inputNumber = input - '0';
		if (inputNumber > 9 || inputNumber < 1) // Checks if digit is correct
		{
			if (input == 'q')
			{
				return input;
			}
			else
			{
				cout << "\nInvalid Input!";
			}
		}
		else if (field[inputNumber] != '.') // Checks for empty space
		{
			cout << "\nThis field is already used!";
		}
		else // Checks whose turn it is
		{
			if (x) 
			{
				field[inputNumber] = 'X';
				op.open("field.txt");
				op << field;
				op.close();
			}
			else
			{
				field[inputNumber] = 'O';
				op.open("field.txt");
				op << field;
				op.close();
			}
			return input;
		}
	}
}