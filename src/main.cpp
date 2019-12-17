#include <iostream>
#include <cstring>
#include <cstdlib>

#include "leetCodeSolutions/addTwoNumbers.h"

using namespace std;

void goToMainMenu() {
	bool toExit = false;

	cout << "################################\n";
	cout << "###### LeetCode Exercises ######\n";
	cout << "################################\n\n";

	while(!toExit) {
		cout << "1 - Add Two Numbers Probem\n";
		cout << "\n0 - Exit\n\n";

		string input;
		getline(cin, input);

		switch(atoi(input.c_str())) {
			case 0:
				cout << "Exiting program...\n";
				toExit = true;
				break;
			case 1:
				cout << "Selecting Add Two Numbers Probem...\n";

				cout << "\n\nPress Enter to continue...\n";
				getchar();
				break;
			default:
				cout << "Input not recognized.\n\n\n";
				break;
		}
	}
}

int main() 
{
    goToMainMenu();
    return 0;
}