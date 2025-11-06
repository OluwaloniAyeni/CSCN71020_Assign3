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
	};
}
