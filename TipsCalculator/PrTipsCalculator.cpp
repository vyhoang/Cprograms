/*  Written by: Vy Hoang
    Program Status: Complete
    Program: Gratuity Calculator
    This program calculates the gratuity on a restaurant meal.
*/
/* This program uses:
- The Tips class declaration is in the file Tips.h
- The Tips class member function definitions are in the file Tips.cpp
- These three files should all be combined into a project
when running program as the file PrTipsCalculator.cpp
*/

#include <iostream>
#include <iomanip>
#include "Tips.h"
using namespace std;

int main() {
    double billAmount, tipRate, taxRate;    // Define variables for total bill, tip rate and tax rate
    char again;     // Set variable to validate input for taxRate

    cout << "This program will compute a restaurant tip based on a total \n"
         << "bill amount and the % the patron wishes to tip the server.";

    // Get user to input tax rate
    cout << "\n\nEnter Tax % for this location: ";
    cin >> taxRate;

    // Validate taxRate to ensure it should be greater or equal to zero
    while (taxRate < 0) {
        cout << "Tax % cannot be less than 0. Please re-enter tax %: ";
        cin >> taxRate;
    }

    // Declare a Tips class object with taxRate passed to it
    Tips myTips(taxRate);

    // Loop to get user input for various total bills and tip rates
    do {
        cout << "\n************* Tip Helper **************" << endl;
        cout << "Enter total bill amount: ";
        cin >> billAmount;
        cout << "Enter desired tip %: ";
        cin >> tipRate;

        // Call member function computeTip to get the tip amount based on the meal cost to display
        cout << fixed << showpoint << setprecision(2);
        cout << "\nThe tip should be $ " << myTips.computeTip(billAmount, tipRate) << endl;

        cout << "Compute another tip (y/n)?: ";
        cin >> again;
    } while (again == 'y' or again == 'Y');     // Loop again if user selects 'y' or 'Y'

    return 0;
}
