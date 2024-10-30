#include "CppUnitTest.h"
#include "pch.h"
extern "C" {
#include "../RockPaperScissors/RPS.c"  
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSTests
{
    TEST_CLASS(RPSTests)
    {
    public:

        TEST_METHOD(TestRockVsScissors)
        {
            // Test that Rock beats Scissors (Player1 wins)
            Assert::AreEqual("Player1", determineWinner("Rock", "Scissors"));
        }

        TEST_METHOD(TestScissorsVsPaper)
        {
            // Test that Scissors beats Paper (Player1 wins)
            Assert::AreEqual("Player1", determineWinner("Scissors", "Paper"));
        }

        TEST_METHOD(TestPaperVsRock)
        {
            // Test that Paper beats Rock (Player1 wins)
            Assert::AreEqual("Player1", determineWinner("Paper", "Rock"));
        }

        TEST_METHOD(TestDraw)
        {
            // Test when both players choose the same item
            Assert::AreEqual("Draw", determineWinner("Rock", "Rock"));
        }

        TEST_METHOD(TestInvalidInput)
        {
            // Test for input  other than Rock, Paper, or Scissors
            Assert::AreEqual("Invalid", determineWinner("Lizard", "Spock"));
        }
    };
}
