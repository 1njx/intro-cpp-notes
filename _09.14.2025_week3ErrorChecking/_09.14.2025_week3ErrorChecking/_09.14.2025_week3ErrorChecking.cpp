// _09.14.2025_week3ErrorChecking.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Types of errors:
// 1. Syntax
// 2. Logic Error

#include <iostream>
using namespace std;

int main()
{
	//-----------------------------------------------------------
	//set up and variable i and set it to the value the integer 89
	double i = 89;
	// set up a variable j and set it's value to the String bob
	string j = "bob";

	// divide i by 10 and put it's value into i
	i = i / 10;

	//set up an variable p and set it's value to the integer 5
	int p = 5;

	//print out the value of i + p.
	cout << i - p;

	//set up a variable name and set it's value to String Rusty
	string name = "Rusty";

	//set up a variable name2 and set it's value to the String Jerry
	string name2 = "Jerry";

	//print out Hello
	cout << "Hello";

	//print out the name in the name variable
	cout << name;

	//print out the name in the name2 variable
	cout << name2;

	//print out the phrase You have finished the assignment Jerry, by using the name2 variable
	cout << "You have finished the assignment, " << name2;

		//-----------------------------------------------------------
}

