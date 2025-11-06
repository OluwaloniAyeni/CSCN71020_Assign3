#include <string.h>
#include "RockPaperScissors.h"

const char* determineWinner(const char player1[], const char player2[])
{
	if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0)
		return "Player1";

	if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0)
		return "Player1";

	    return "Invalid";
}