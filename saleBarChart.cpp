/*  Written by: Vy Hoang
    Program Status: Complete
    Program: Sales Bar Chart
    This program generate a bar chart by displaying a row of asterisks for each store's sales.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{

    float sales1,
            sales2,
            sales3;
    const int STAR = 100;

    // Get and validate sales input for store 1
    cout << "Enter today's sales for store 1: ";
    cin >> sales1;
    while (sales1 < 0)
    {
        cout << "Please enter positive number for store 1: ";
        cin >> sales1;

    }

    // Get and validate sales input for store 2
    cout << "Enter today's sales for store 2: ";
    cin >> sales2;
    while (sales2 < 0)
    {
        cout << "Please enter positive number for store 2: ";
        cin >> sales2;

    }

    // Get and validate sales input for store 3
    cout << "Enter today's sales for store 3: ";
    cin >> sales3;
    while (sales3 < 0)
    {
        cout << "Please enter positive number for store 3: ";
        cin >> sales3;

    }

    // Generate sales data to display a row of asterisks for each store's sales
    cout << "\n\t  DAILY SALES" << endl;
    cout << "\t(each * = $100)" << endl;

    sales1 = round(sales1 / STAR);
    sales2 = round(sales2 / STAR);
    sales3 = round(sales3 / STAR);

    // Store 1
    cout << "\nStore 1: ";
    for (int a = 0; a < int(sales1); a++)
        cout << "*";

    // Store 2
    cout << "\nStore 2: ";
    for (int a = 0; a < int(sales2); a++)
        cout << "*";

    // Store 3
    cout << "\nStore 3: ";
    for (int a = 0; a < int(sales3); a++)
        cout << "*";

    return 0;
}

