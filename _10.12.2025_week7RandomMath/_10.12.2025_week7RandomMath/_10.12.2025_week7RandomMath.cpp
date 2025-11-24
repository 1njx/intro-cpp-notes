// _10.12.2025_week7RandomMath.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));     // resets the random numbers

	int random_number_1 = rand() % 10;
	int random_number_2 = rand() % 10;

	int operation_randomizer = rand() % 3;

	int attempt;

	if (operation_randomizer == 0) {
		cout << "What is " << random_number_1 << " + " << random_number_2 << "?\n";
		cin >> attempt;

		if (attempt == random_number_1 + random_number_2) {
			cout << "You are correct! Have a cookie!";
		}
		else if (attempt != random_number_1 + random_number_2) {
			cout << "WRONG! NO COOKIE!";
		}//end 0 if
	}
	else if (operation_randomizer == 1) {
		cout << "What is " << random_number_1 << " - " << random_number_2 << "?\n";
		cin >> attempt;

		if (attempt == random_number_1 - random_number_2) {
			cout << "You are correct! Have a cookie!";
		}
		else if (attempt != random_number_1 - random_number_2) {
			cout << "WRONG! NO COOKIE!";
		}//end 1 if
	}
	else if (operation_randomizer == 2) {
		cout << "What is " << random_number_1 << " * " << random_number_2 << "?\n";
		cin >> attempt;

		if (attempt == random_number_1 * random_number_2) {
			cout << "You are correct! Have a cookie!";
		}
		else if (attempt != random_number_1 * random_number_2) {
			cout << "WRONG! NO COOKIE!";
		}//end 2 if
	}//end if
}
