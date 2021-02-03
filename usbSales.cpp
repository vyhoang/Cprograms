/*
    Written by: Vy Hoang
    Program Status: Complete
    Program: Flash Drive Price
    This program determines the sale price per USB flash.
*/

#include <iostream>
using namespace std;

int main()
{
    double costPerPiece = 8.00,     // Define and initialize variable for the produced cost per flash drive in dollars
           requiredProfit = 0.35,   // Define and initialize variable for 35% profit
           salePricePerPiece;       // Define variable for the sale price per flash drive.

    // Determine the sale price with 35% profit.
    salePricePerPiece = (requiredProfit * costPerPiece) + costPerPiece;

    // Display the sale price for one flash drive
    cout << "To have a 35% profit,"
            " the flash drive should sell for $" << salePricePerPiece << endl;

    return 0;

}