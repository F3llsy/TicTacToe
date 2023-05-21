#include "header.h"

// Checks for full field
bool checkFull()
{
	for (int i = 1; i <= 9; i++)
	{
		if (field[i] == '.')
		{
			return false;
		}
	}
	return true;
}