#include "pch.h"
#include "CppUnitTest.h"

extern "C"
{
#include "../RockPaperScissors/RockPaperScissors.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestRockPaperScissors
{
	TEST_CLASS(TestRockPaperScissors)
	{
	public:
		
		TEST_METHOD(Test_RockBeatsScissors_Player1Wins)
		{
			char player1[] = "Rock";
			char player2[] = "Scissors";

			const char* result = determineWinner(player1, player2);
			Assert::AreEqual("Player1", result);
		}
		TEST_METHOD(Test_ScissorsBeatsPaper_Player1Wins)
		{
			char player1[] = "Scissors";
			char player2[] = "Paper";

			const char* result = determineWinner(player1, player2);
			Assert::AreEqual("Player1", result);
		}
		TEST_METHOD(Test_PaperBeatsRock_Player1Wins)
		{
			char player1[] = "Paper";
			char player2[] = "Rock";

			const char* result = determineWinner(player1, player2);
			Assert::AreEqual("Player1", result);
		}
		TEST_METHOD(Test_ScissorsLosesToRock_Player2Wins)
		{
			char player1[] = "Scissors";
			char player2[] = "Rock";

			const char* result = determineWinner(player1, player2);
			Assert::AreEqual("Player2", result);
		}
		TEST_METHOD(Test_PaperLosesToScissors_Player2Wins)
		{
			char player1[] = "Paper";
			char player2[] = "Scissors";

			const char* result = determineWinner(player1, player2);
			Assert::AreEqual("Player2", result);
		}
		TEST_METHOD(Test_RockLosesToPaper_Player2Wins)
		{
			char player1[] = "Rock";
			char player2[] = "Paper";

			const char* result = determineWinner(player1, player2);
			Assert::AreEqual("Player2", result);
		}
		TEST_METHOD(Test_SameMoveResultsInDraw)
		{
			char player1[] = "Paper";
			char player2[] = "Paper";

			const char* result = determineWinner(player1, player2);
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(Test_InvalidInput)
		{
			char player1[] = "rock";
			char player2[] = "Paper";

			const char* result = determineWinner(player1, player2);
			Assert::AreEqual("Invalid", result);
		}
	};
}
