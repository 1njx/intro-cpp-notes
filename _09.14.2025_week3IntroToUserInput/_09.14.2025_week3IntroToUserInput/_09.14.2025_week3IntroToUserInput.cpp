// _09.14.2025_week3IntroToUserInput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "What is your name?\n";
    cin >> name; 
    cout << "\n";

    cout << "Hello, " << name;
    int age;
    cout << ". How old are you?\n";
    cin >> age;
    cout << "\n";

    cout << "You are " << age << " years old.\n";

}//end main
