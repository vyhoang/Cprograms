// This program reads employee work hours from a file "work.dat"
// and stores them in an int array. It uses one loop
// to input the hours and another to display them.
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const int NUM_EMPLOYEES = 6;    // Sets number og employees
    int hours[NUM_EMPLOYEES];   // Holds each employee's hours
    int count = 0;  // Loop control variable that counts how many
                    // data items have been read in input file object
    ifstream inputFile;
    // Open data file.
    inputFile.open("work.dat");
    if (!inputFile)
        cout << "Error opening data file\n";
    else {
        // Read the numbers from the file into the array. When we exit
        // the loop, count will hold the number of items read in.
        while (count < NUM_EMPLOYEES && inputFile >> hours[count])
            count ++;
        // Close the file
        inputFile.close();

        // Display the contents of the array.
        cout << "The hours worked by each employee are\n";
        for (int employee = 0; employee < count; employee++){
            cout << "Employee " << employee+1 << ": ";
            cout << hours[employee] << endl;
        }
    }
    return 0;

}