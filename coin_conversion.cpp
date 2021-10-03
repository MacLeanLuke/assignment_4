//coin_conversion.cpp: This program asks the user for a number of cents and choice of coin returns the quantity.
//Name: Luke MacLean
//Class Section: COSC-1436.900 Online
// Date: 10/02/2021

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    // Constants: Constants to hold the conversion factors with the given values 
    const int NICKEL = 5;
    const int DIME = 10;
    const int QUARTER = 25;

    // Variables: Variables to hold the number of cents and the menu choice
    int cents, menuChoice, coinQuantity;

    // Ask for a number somewhere in your program, followed by asking for a string
    cout << "Enter a number of cents: \n";
    cin >> cents;
    // Displaying a menu to the user with their three options 
    cout << "What coin would you like to see " << cents << " cents in? \n 1. Nickels \n 2. Dimes \n 3. Quarters \n Enter your choice:";
    cin >> menuChoice;

    // Use some form of conditional statement(s) that checks the user’s choice and provides the correctly calculated output for their choice.
    switch (menuChoice)
    {
    case 1:
    // Note: we are providing a whole number of nickels, dimes, or quarters.
        coinQuantity = cents / NICKEL;
        cout << cents <<  " cents = " << coinQuantity << " nickels.";
        break;
    case 2:
        coinQuantity = cents / DIME;
        cout << cents <<  " cents = " << coinQuantity << " dimes.";
        break;
    case 3:
        coinQuantity = cents / QUARTER;
        cout << cents <<  " cents = " << coinQuantity << " quarters.";
        break;
    
    // Provide an output statement if the user enters an invalid choice
    default:
        cout << "Sorry. " << menuChoice << " wasn't a valid choice.";
        break;
    }
    
    
    return 0;
}