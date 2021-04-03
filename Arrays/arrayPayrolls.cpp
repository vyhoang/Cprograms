/*  Written by: Vy Hoang
    Program Status: Complete
    Program: Arrays of PayRoll objects
    This program designs a PayRoll class and uses its data
    to calculate gross pay for each employee.
*/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// Declare class PayRoll
class PayRoll {
    private:
        double hoursWorked;     // Define class variables
        double payRate;

    public:
        // Function prototypes
        PayRoll();
        void setHoursWorked(double);
        void setPayRate(double );
        double grossPay() const;

};

// Function implementation section
/*********************************
 * PayRoll::setHoursWorked
 * This member function sets hours worked
**********************************/
void PayRoll::setHoursWorked(double hours){
    hoursWorked = hours;
}

/*********************************
 * PayRoll::setPayRate
 * This member function sets pay rate
**********************************/
void PayRoll::setPayRate(double rate) {
   payRate = rate;
}

/*********************************
 * PayRoll::grossPay
 * This member function calculates gross pay
**********************************/
double PayRoll::grossPay() const{
    return hoursWorked * payRate;
}

/*********************************
 * PayRoll::PayRoll
 * This is default constructor
**********************************/
PayRoll::PayRoll() {
    hoursWorked = 0;
    payRate = 0;
}

// Function main
int main() {
    double numHours, hourlyRate;
    const int NUM_EMPLOYEES = 7;         // Initialize number of employees
    PayRoll employees[NUM_EMPLOYEES];    // Declare an array to hold 7 PayRoll employees

    fstream dataIn;                     // Declare the date file variable
    dataIn.open("payroll.dat");         // Open the data file


    if (!dataIn)
        // Display error message if the data file is not found
        cout << "Error opening the data file.\n";
    else {
        // Loop to read number of hours and pay rate for each employee from the file
        for (auto & employee : employees) {
            dataIn >> numHours;
            dataIn >> hourlyRate;
            // Call the set functions to store number of hours and hourly pay rate
            employee.setHoursWorked(numHours);
            employee.setPayRate(hourlyRate);
        }
    }
    dataIn.close();     // Close the data file

    // Display the gross pay for each employee
    cout << "Employee  " << "Gross Pay \n"
         << "========  " << "=========" << endl;
    cout << fixed << showpoint << setprecision(2);

    for (int e = 0; e < NUM_EMPLOYEES; e++) {
        cout << setw(4) << (e+1) << ":"
             << setw(7) << "$ " << employees[e].grossPay() << endl;
    }

    return 0;
}