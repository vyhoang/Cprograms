/*  Written by: Vy Hoang
    Program Status: Complete
    Program: Property Tax
    This program calculates the annual property tax.
*/

#include <iostream>
#include <iomanip>      // Header file needed to use stream manipulators

using namespace std;
int main() {
    double actualValue, assessedValue, taxRate, propertyTax;    // Declare variables
    const double ASSESSMENT_RATE = 0.6;     // Set constant tax assessment with 60%

    // Get user input the actual value and tax rate
    cout << "Enter the actual property value: $ ";
    cin >> actualValue;
    cout << "Enter the amount of tax per $100 of assessed value: $";
    cin >> taxRate;
    cout << endl;

    // Calculate the assessed value and property tax.
    assessedValue = ASSESSMENT_RATE * actualValue;
    propertyTax = taxRate * assessedValue;

    // Display the actual value, assessed value and property tax.
    cout << fixed << showpoint << setprecision(2);
    cout << left << setw(25) << "Actual Property Value:"
         << right << setw(4) << "$" << setw(12) << actualValue << endl;
    cout << left << setw(25) << "Assessed Property Value:"
         << right << setw(4) << "$" << setw(12) << assessedValue << endl;
    cout << left << setw(25) << "Property Tax:"
         << right << setw(4) << "$" << setw(12) << propertyTax << endl;

    return 0;
}