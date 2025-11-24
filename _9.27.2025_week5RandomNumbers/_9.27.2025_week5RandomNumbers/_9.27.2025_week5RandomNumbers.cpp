// _9.27.2025_week5RandomNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));     // resets the random number


    int number1 = rand() % 10;  // 0 thru 9

    // % modulus

    cout << number1 << endl;
    cout << rand() << endl;


    int number2 = (rand() % 10) + 1; // 1 thru 10

    cout << number2 << endl;

}//end MAIN
