// This program demonstrates the use of a nested structure
// This program calculates the total monthly cost for a homeowner
// based on the data user input.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct CostInfo
{
    double mortgage,	  // monthly mortgage payment
           insurance,	  // home insurance
           propertyTax,   // homeowner property tax
           utilities,     // utility bills payment
           maintenance;   // misc on home repair/decoration
};

struct HouseInfo
{
    string county;	        // county name where the house is based on
    string type;	        // House type: single-family or multiple-family
    string    yearBuilt;	// the year when the house was built

    CostInfo cost{}; 	// A HouseInfo structure has a CostInfo structure
    // nested inside as one of its members
    HouseInfo()		    // Default constructor
    {	county = "unknown";
        type = "unknown";
        yearBuilt = "unknown";
        cost.mortgage = cost.insurance = cost.propertyTax
                      = cost.utilities = cost.maintenance = 0.00;

    }
};

int main()
{
    // Define a HouseInfo structure variable called house
    HouseInfo house;

    // Assign values to the house member variables.
    // Notice that cost.maintenance is not assigned a value,
    // so it remains 0, as set by the constructor.
    cout << "Enter the county where the house is based on: ";
    cin.get();
    getline(cin, house.county);
    cout << "Enter the type of house (single-family/multiple-family): ";
    cin.get();
    getline(cin, house.type);
    cout << "Enter the year when the house was built: ";
    cin >> house.yearBuilt;

    cout << "\nEnter monthly mortgage payment: ";
    cin >> house.cost.mortgage;
    cout << "Enter monthly insurance payment: ";
    cin >> house.cost.insurance;
    cout << "Enter monthly property tax payment: ";
    cin >> house.cost.propertyTax;
    cout << "Enter monthly utility bill payment: ";
    cin >> house.cost.utilities;

    // Display the total monthly costs for the homeowner
    cout << fixed << showpoint << setprecision(2);
    cout << "\nMonthly estimated costs for my " << house.type << " house in "
         << house.county << " county in " << house.yearBuilt << " are $"
         << (house.cost.mortgage + house.cost.insurance +
                 house.cost.propertyTax + house.cost.utilities) << endl;

    return 0;
}
