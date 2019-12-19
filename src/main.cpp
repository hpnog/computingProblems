#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdio.h>

#include "leetCodeSolutions/addTwoNumbers.h"
#include "leetCodeSolutions/inverseInteger.h"
#include "leetCodeSolutions/longestCommonPrefix.h"
#include "leetCodeSolutions/longestPalindromicSubstring.h"
#include "leetCodeSolutions/longestSubstringWithoutRepeatingCharacters.h"
#include "leetCodeSolutions/twoSum.h"
#include "leetCodeSolutions/romanToInteger.h"
#include "leetCodeSolutions/palindromeNumber.h"

using namespace std;

void runSolution(ProblemInterface& problem, bool &testsRunning) {
	problem.runTestCases();
	cout << "Press Enter to continue...\n";
	if(!testsRunning) {
		getchar();
	}
}

void goToMainMenu(bool& testsRunning) {
	bool toExit = false;

	cout << "################################\n";
	cout << "###### LeetCode Exercises ######\n";
	cout << "################################\n\n";

	if(testsRunning) {
		std::cout << "Starting manual tests...\n";
	}

	int testCounter = 1;
	while(!toExit) {
		cout << "################################################################\n";

		cout << "1 - Add Two Numbers Probem\n";
		cout << "2 - Inverse Integer Probem\n";
		cout << "3 - Longest Common Prefix Probem\n";
		cout << "4 - Longest Palindromic Substring Probem\n";
		cout << "5 - Longest Substring Without Repeating Characters Probem\n";
		cout << "6 - Two Sum Probem\n";
		cout << "7 - Roman to Integer Probem\n";
		cout << "8 - Palindrome Number Probem\n";
		cout << "\n0 - Exit\n\n";

		string input;
		if(!testsRunning)
		{
			getline(cin, input);
		}

		switch(testsRunning ? testCounter : atoi(input.c_str())) {
			case 0:
			{
				cout << "Exiting program...\n";
				toExit = true;
				break;
			}
			case 1:
			{
				SolutionAddTwoNumbers problem;
				runSolution(problem, testsRunning);
				break;
			}
			case 2:
			{
				SolutionInverseInteger problem;
				runSolution(problem, testsRunning);
				break;
			}
			case 3:
			{
				SolutionLongestCommonPrefix problem;
				runSolution(problem, testsRunning);
				break;
			}
			case 4: 
			{
				SolutionLongestPalindromeSubstring problem;
				runSolution(problem, testsRunning);
				break;
			}
			case 5: 
			{
				SolutionLongestSubstringWithoutRepeatingCharacters problem;
				runSolution(problem, testsRunning);
				break;
			}
			case 6: 
			{
				SolutionTwoSum problem;
				runSolution(problem, testsRunning);
				break;
			}
			case 7: 
			{
				SolutionRomanToInteger problem;
				runSolution(problem, testsRunning);
				break;
			}
			case 8: 
			{
				SolutionPalindromeNumber problem;
				runSolution(problem, testsRunning);
				break;
			}
			default:
			{
				if(testsRunning)
					testCounter = 0;
				cout << "Input not recognized.\n\n\n";
				break;
			}
		}
		if(testsRunning && testCounter > 0)
			testCounter++;
	}
}

int main(int argc, char *argv[]) 
{
	bool testsRunning = false;
	if(argc > 1)
	{
		testsRunning = (strcmp(argv[1], "-test") == 0);
		if(!testsRunning || argc > 2) {
			std::cout << "Invalid Arguments... Exiting...\n";
			return -1;
		}
	}		

    goToMainMenu(testsRunning);
    return 0;
}