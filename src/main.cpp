#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdio.h>

#include "leetCodeSolutions/addTwoNumbers.h"

using namespace std;

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
				cout << "Selecting Add Two Numbers Probem...\n";
				SolutionAddTwoNumbers problem;
				problem.runTestCases();
				cout << "Press Enter to continue...\n";
				if(!testsRunning) {
					getchar();
				}
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