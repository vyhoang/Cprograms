/*  Written by: Vy Hoang
    Program Status: Complete
    Program: Winning Division
    This program determines the highest quarterly sales from the four divisions.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
double getSales(const string&);
void findHighest(double, double, double, double);

int main(){
    // Define four variables to hold four division names
    string division1 = "Northeast",
            division2 = "Southeast",
            division3 = "Northwest",
            division4 = "Southwest";

    // Call getSales, passing each division name, and store quarterly sales to each relevant variable
    double northEastSales = getSales(division1);
    double southEastSales = getSales(division2);
    double northWestSales = getSales(division3);
    double southWestSales = getSales(division4);

    // Call findHighest to display the highest sales figure.
    findHighest(northEastSales, southEastSales, northWestSales, southWestSales);

    return 0;
}

// This function gets user input and returns quarterly sales of each division
double getSales(const string& division) {
    // Define variable to hold quarterly sales
    double quarterlySales;

    // Get the quarterly sales for each division from user input
    cout << "Enter the quarterly sales for the " << division << " division: ";
    cin >> quarterlySales;

    // Validate input
    while(quarterlySales < 0) {
        cout << "Sales figures cannot be negative. Please re-enter.\n";
        cout << "Enter the quarterly sales for the " << division << " division: ";
        cin >> quarterlySales;
    }

    //return quarterly sales to main
    return quarterlySales;
}

// This function determine the highest sales figure
void findHighest(double NE, double SE, double NW, double SW){
    // Set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // Determine the highest
    if((NE > SE) && (NE > NW) && (NE > SW)) {
        cout << "\nThe Northeast division had the highest sales this quarter.\n";
        cout << "Their sales were $" << NE << endl;
    }
    else if((SE > NE) && (SE > NW) && (SE > SW)) {
        cout << "\nThe Southeast division had the highest sales this quarter.\n";
        cout << "Their sales were $" << SE << endl;
    }

    else if((NW > NE) && (NW > SE) && (NW > SW)) {
        cout << "\nThe Northwest division had the highest sales this quarter.\n";
        cout << "Their sales were $" << NW << endl;
    }

    else if((SW > NE) && (SW > SE) && (SW > NW)) {
        cout << "\nThe Southwest division had the highest sales this quarter.\n";
        cout << "Their sales were $" << SW << endl;
    }

}