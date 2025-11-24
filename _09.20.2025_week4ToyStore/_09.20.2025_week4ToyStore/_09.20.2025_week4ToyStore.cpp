// _09.20.2025_week4ToyStore.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main()
{

    cout << "\nWelcome to Totally NOT Dangerous Toy Store! \n\nPlease choose from our MENU:\n";

    double miniRocketPrice = 5.50;
    double batonPrice = 2.50;       // <-- MENU PRICES
    double legoPrice = 1.25;

    cout << "   MINI ROCKET with eye targeting sensors:      " << miniRocketPrice << "0\n";
    cout << "   Running BATON shaped like scissors:          " << batonPrice << "0\n";
    cout << "   One bag of LEGOS with extra pointy ends:     " << legoPrice << "\n\n";

    double miniRocketAmount;
    double batonAmount;         // <-- AMOUNT OF EACH ITEM BOUGHT
    double legoAmount;

    double miniRocketTotalPrice;
    double batonTotalPrice;         // Total = Price * Amount
    double legoTotalPrice;

    //-------------------------------------------------------------------------------------------------------------------
    cout << "How many mini rockets would you like?   ";
    cin >> miniRocketAmount;

    miniRocketTotalPrice = miniRocketPrice * miniRocketAmount;

    cout << "   $" << miniRocketTotalPrice << " so far...\n\n";
    //-------------------------------------------------------------------------------------------------------------------
    cout << "How many batons would you like?   ";
    cin >> batonAmount;

    batonTotalPrice = batonPrice * batonAmount;

    cout << "   $" << batonTotalPrice + miniRocketTotalPrice << " so far...\n\n";
    //-------------------------------------------------------------------------------------------------------------------
    cout << "How many Bags of Legos would you like?   ";
    cin >> legoAmount;

    legoTotalPrice = legoPrice * legoAmount;

    cout << "   $" << legoTotalPrice + batonTotalPrice + miniRocketTotalPrice << " so far...\n\n";
    //-------------------------------------------------------------------------------------------------------------------

    double trueTotal = miniRocketTotalPrice + batonTotalPrice + legoTotalPrice;   // total price for all items

    cout << "Your total is $" << trueTotal << ".\n\n";

    double moneyGiven;  // money YOU GIVE TO the toy store

    cout << "How much will you pay?   $";
    cin >> moneyGiven;
    cout << "\n";

    double change = moneyGiven - trueTotal;  // your change if you didnt spend all of the money you gave

    cout << "Your change is $" << change << ".\n\n";
    cout << "Thanks for shopping at Totally NOT Dangerous Toy Store!\n\n\n\n\n";


    // I couldnt figure out how to show the 0's at the end of the decimal unless i wrote it manually

}