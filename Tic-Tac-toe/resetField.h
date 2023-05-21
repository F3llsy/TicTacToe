#include "header.h"

// Resets the playing field data
void resetField()
{
	for (int i = 0; i < 10; i++)
	{
		field[i] = '.';
	}
	op.open("field.txt");
	op << field;
	op.close();
}