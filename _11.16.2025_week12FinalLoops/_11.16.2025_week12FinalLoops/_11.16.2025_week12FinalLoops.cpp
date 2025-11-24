// _11.16.2025_week12FinalLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// SORRY for not using nested loops, I didnt notice it was required until finishing it...
int choice = -1;
int main_choice = -1;

int amt = 0;

int apples = 0;
int peaches = 0;
int pears = 0;

int cabbage = 0;
int cucumber = 0;
int squash = 0;

int popcorn = 0;
int candy = 0;
int chips = 0;

void main_menu() {
	cout << "(0) Exit\n" << "(1) Buy Fruit\n" << "(2) Buy Vegetables\n" << "(3) Buy Snacks\n" << "(4) Display Shopping List\n";
	cin >> main_choice;
}//end main_menu

void fruit_menu() {
	cout << "(0) Back\n" << "(1) Apples\n" << "(2) Peaches\n" << "(3) Pears\n";
	cin >> choice;
	if (choice == 1) {
		cout << "You chose apples. How many apples? ";
		cin >> amt;
		apples = apples + amt;
		cout << "You chose " << apples << " apples.\n";
	}
	else if (choice == 2) {
		cout << "You chose peaches. How many peaches? ";
		cin >> amt;
		peaches = peaches + amt;
		cout << "You chose " << peaches << " peaches.\n";
	}
	else if (choice == 3) {
		cout << "You chose pears. How many pears? ";
		cin >> amt;
		pears = pears + amt;
		cout << "You chose " << pears << " pears.\n";
	}
	else {
		choice = -1;
		main_menu();
	}//end if
}//end fruit_menu

void vegetable_menu() {
	cout << "(0) Back\n" << "(1) Cabbage\n" << "(2) Cucumber\n" << "(3) Squash\n";
	cin >> choice;
	if (choice == 1) {
		cout << "You chose cabbage. How many cabbage? ";
		cin >> amt;
		cabbage = cabbage + amt;
		cout << "You chose " << cabbage << " cabbage.\n";
	}
	else if (choice == 2) {
		cout << "You chose cucumber. How many cucumbers? ";
		cin >> amt;
		cucumber = cucumber + amt;
		cout << "You chose " << cucumber << " cucumber(s).\n";
	}
	else if (choice == 3) {
		cout << "You chose squash. How many squash? ";
		cin >> amt;
		squash = squash + amt;
		cout << "You chose " << squash << " squash.\n";
	}
	else {
		choice = -1;
		main_menu();
	}//end if
}//end vegetable_menu
void snack_menu() {
	cout << "(0) Back\n" << "(1) Popcorn\n" << "(2) Candy\n" << "(3) Chips\n";
	cin >> choice;
	if (choice == 1) {
		cout << "You chose popcorn. How many bags of popcorn? ";
		cin >> amt;
		popcorn = popcorn + amt;
		cout << "You chose " << popcorn << " bags of popcorn.\n";
	}
	else if (choice == 2) {
		cout << "You chose candy. How many candies? ";
		cin >> amt;
		candy = candy + amt;
		cout << "You chose " << candy << " candy.\n";
	}
	else if (choice == 3) {
		cout << "You chose chips. How many bags of chips? ";
		cin >> amt;
		chips = chips + amt;
		cout << "You chose " << chips << " bags of chips.\n";
	}
	else {
		choice = -1;
		main_menu();
	}//end if
}//end snack_menu

void shopping_list() {
	cout << "Shopping Cart\n";
	cout << "-------------------\n\n";
	cout << "Item\t\tNumber\tPrice\tTotal\n";
	cout << "------\t\t------\t------\t------\n";
	cout << "Apples\t\t" << apples << "\t" << "$0.50\t" << "$" << 0.50 * apples << endl;
	cout << "Peaches\t\t" << peaches << "\t" << "$0.40\t" << "$" << 0.40 * peaches << endl;
	cout << "Pears\t\t" << pears << "\t" << "$0.60\t" << "$" << 0.60 * pears << endl;
	cout << "Cabbage\t\t" << cabbage << "\t" << "$1.00\t" << "$" << 1.00 * cabbage << endl;
	cout << "Cucumber\t" << cucumber << "\t" << "$0.45\t" << "$" << 0.45 * cucumber << endl;
	cout << "Squash\t\t" << squash << "\t" << "$0.75\t" << "$" << 0.75 * squash << endl;
	cout << "Popcorn\t\t" << popcorn << "\t" << "$2.50\t" << "$" << 2.50 * popcorn << endl;
	cout << "Candy\t\t" << candy << "\t" << "$1.50\t" << "$" << 1.50 * candy << endl;
	cout << "Chips\t\t" << chips << "\t" << "$2.00\t" << "$" << 2.00 * chips << endl;
	cout << "-------------------------------------------" << endl;
	cout << "Grand Total\t\t\t" << "$" << (0.50 * apples) + (0.40 * peaches) + (0.60 * pears) + (1.00 * cabbage) + (0.45 * cucumber) + (0.75 * squash) + (2.50 * popcorn) + (1.50 * candy) + (2.00 * chips) << endl;

}

int main()
{

	main_menu();

	bool hi = false;
	while (hi == false) {

		if (main_choice == 0) {
			cout << "Goodbye!";
			hi = true;
		}
		else if (main_choice == 1) {
			fruit_menu();
		}
		else if (main_choice == 2) {
			vegetable_menu();
		}
		else if (main_choice == 3) {
			snack_menu();
		}
		else if (main_choice == 4) {
			shopping_list();
			break; // i looked this up
		}//end if
	}//end while

}//end main
