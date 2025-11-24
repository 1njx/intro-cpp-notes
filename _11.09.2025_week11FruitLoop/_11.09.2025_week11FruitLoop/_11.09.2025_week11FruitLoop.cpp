// _11.09.2025_week11FruitLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int numb = -1;

	int apples = 0;
	int pears = 0;
	int oranges = 0;
	int peaches = 0;

	while (numb != 5) {
		cout << "What would you like to buy?\n1. Apples\n2. Pears\n3. Oranges\n4. Peaches\n5. Exit\nPlease input a number: ";
		cin >> numb;

		if (numb == 1) {
			cout << "You must really like apples!\n";
			apples++;
		}//end if 1
		else if (numb == 2) {
			cout << "You must really like pears!\n";
			pears++;
		}//end elif 2
		else if (numb == 3) {
			cout << "You must really like oranges!\n";
			oranges++;
		}//end elif 3
		else if (numb == 4) {
			cout << "You must really like peaches!\n";
			peaches++;
		}//end elif 4
	}//end while

	cout << "Goodbye\n";
	cout << "You chose apples " << apples << " time(s)\n";
	cout << "You chose pears " << pears << " time(s)\n";
	cout << "You chose oranges " << oranges << " time(s)\n";
	cout << "You chose peaches " << peaches << " time(s)\n";

}//end main

