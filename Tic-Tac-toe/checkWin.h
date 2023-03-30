#include "header.h"

// Checks winning combinations
bool checkWin(char ind)
{
	if (field[1] == ind && field[2] == ind && field[3] == ind || field[1] == ind && field[4] == ind && field[7] == ind || field[1] == ind && field[5] == ind && field[9] == ind || field[2] == ind && field[5] == ind && field[8] == ind || field[3] == ind && field[6] == ind && field[9] == ind || field[3] == ind && field[5] == ind && field[7] == ind || field[4] == ind && field[5] == ind && field[6] == ind || field[7] == ind && field[8] == ind && field[9] == ind)
	{
		return true;
	}
	return false;
}
