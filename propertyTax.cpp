// This program calculates and displays property tax of assessed value

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double actualValue, assessedValue, taxRate, propertyTax;
    const double ASSESSMENT_RATE = 0.6;

    cout << "Enter the actual property value: $ ";
    cin >> actualValue;
    cout << "Enter the amount of tax per $100 of assessed value: $";
    cin >> taxRate;
    cout << endl;

    assessedValue = ASSESSMENT_RATE * actualValue;
    propertyTax = taxRate * assessedValue;

    cout << fixed << showpoint << setprecision(2);
    cout << left << setw(25) << "Actual Property Value:"
         << right << setw(4) << "$" << setw(12) << actualValue << endl;
    cout << left << setw(25) << "Assessed Property Value:"
         << right << setw(4) << "$" << setw(12) << assessedValue << endl;
    cout << left << setw(25) << "Property Tax:"
         << right << setw(4) << "$" << setw(12) << propertyTax << endl;

    return 0;
}