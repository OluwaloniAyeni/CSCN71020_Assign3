#include <string.h>
#include "RockPaperScissors.h"

const char* determineWinner(const char player1[], const char player2[])
{
	//Draw check first
	if (strcmp(player1, player2) == 0)
		return "Draw";

	if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0)
		return "Player1";

	if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0)
		return "Player1";

	if (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0)
		return "Player1";

	if (strcmp(player2, "Rock") == 0 && strcmp(player1, "Scissors") == 0)
		return "Player2";

	if (strcmp(player2, "Scissors") == 0 && strcmp(player1, "Paper") == 0)
		return "Player2";

	if (strcmp(player2, "Paper") == 0 && strcmp(player1, "Rock") == 0)
		return "Player2";

	    return "Invalid";
}