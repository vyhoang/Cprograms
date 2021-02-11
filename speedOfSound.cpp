/*  Written by: Vy Hoang
    Program Status: Complete
    Program: The Speed of Sound
    This program calculates a sound wave time in fps through a particular medium.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants for speed of sound in feet per second in each medium
    const double SPEED_AIR = 1100;
    const double SPEED_WATER = 4900;
    const double SPEED_STEEL = 16400;

    int choice;				// Menu choice
    int travelDistance;		// Number of feet
    double travelTime;		// Number of seconds

    // Display a brief of program description
    cout << "This program will tell you how long it takes a sound wave \n";
    cout << "to travel a specific distance through a particular medium. \n\n";

    // Display the menu and get the user's choice
    cout << "Select a substance for the sound to travel through: " << endl;
    cout << "\t1. Air\n";
    cout << "\t2. Water\n";
    cout << "\t3. Steel\n";
    cout << "\t4. Quit the program\n\n";

    cout << "Enter your choice (1-4): ";
    cin >> choice;


    // Validate and process menu choice
    if (choice >= 1 && choice <= 3) {
        // Get number of feet
        cout << "Enter the number of feet the sound wave will travel: ";
        cin >> travelDistance;

        // Calculate and display travel time in seconds based on user input
        cout << fixed << showpoint << setprecision(4);
        switch (choice) {
            case 1:
                travelTime = travelDistance / SPEED_AIR;
                cout << "\nThe sound wave will travel " << travelDistance << " feet through air in "
                     << travelTime << " seconds.\n";
                break;
            case 2:
                travelTime = travelDistance / SPEED_WATER;
                cout << "\nThe sound wave will travel " << travelDistance << " feet through water in "
                     << travelTime << " seconds.\n";
                break;
            case 3:
                travelTime = travelDistance / SPEED_STEEL;
                cout << "\nThe sound wave will travel " << travelDistance << " feet through steel in "
                     << travelTime << " seconds.\n";
        }
    }
        // Display message for invalid choice
    else if (choice != 4) {
        cout << "\nThe valid choices are 1 through 4. \n"
             << "Please run the program again. \n";
    }

    return 0;
}

