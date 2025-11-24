// _10.05.2025_week6BookAssignment2_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double score;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90)
        cout << "The grade is A." << endl;
    else if (score >= 80)
        cout << "The grade is B." << endl;
    else if (score >= 70)
        cout << "The grade is C." << endl;
    else if (score >= 60)
        cout << "The grade is D." << endl;
    else
        cout << "The grade is F." << endl;

}
