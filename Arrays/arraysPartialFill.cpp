// This program uses a partially-filled array to store monthly sales
// figures for a set of offices. It then finds and displays the total
// sales amount, the average sales amount, the highest and lowest sales,
// and a listing of the offices with sales below the average.
// The data to fill the array is read in from a file
// and the number of data values are counted.

#include <iostream>
#include <fstream>      // Needed to use file "sales.dat"
#include <iomanip>
using namespace std;

int main(){
    const int SIZE = 20;
    ifstream dataIn;    // Object to read file input

    int numOffices,     // Number of data  values read in
        count;          // Loop counter
    double sales[SIZE], // Array to hold sale data
           totalSales = 0.0,    // Accumulator initialized to zero
           averageSales,        // Average sales for all offices
           highestSales,        // Highest sales
           lowestSales;         // Lowest sales

    // Open the data file
    dataIn.open("sales.dat");
    if (!dataIn)
        cout << "Error opening the data file.\n";
    else{
        // Read values from the file and store them in the array,
        // counting them and summing them as they are read in
        count = 0;
        while (count < SIZE && dataIn >> sales[count]){
            totalSales += sales[count];
            count++;
        }
        numOffices = count;
        dataIn.close();

        // Calculate average sales
        averageSales = totalSales / numOffices;

        // Find highest and lowest sales
        highestSales = lowestSales = sales[0];
        for (int office = 1; office < numOffices ; office++) {
            if (sales[office] > highestSales)
                highestSales = sales[office];
            else if (sales[office] < lowestSales)
                lowestSales = sales[office];
        }

        // Display total, average, highest, lowest sales
        cout << fixed << showpoint << setprecision(2);
        cout << "The total sales are   $"
             << setw(9) << totalSales << endl;
        cout << "The average sales are $"
             << setw(9) << averageSales << endl;
        cout << "The highest sales are $"
             << setw(9) << highestSales << endl;
        cout << "The lowest sales are  $"
             << setw(9) << lowestSales << endl;

        // Display figures for offices performing below the average
        cout << "\nThe following offices have below-average "
             << "sales figures.\n";
        for (int office = 0; office < numOffices; office++) {
            if (sales[office] < averageSales)
                cout << "Office " << setw(2) << (office+1)
                     << " $" << sales[office] << endl;
        }
    }
    return 0;
}