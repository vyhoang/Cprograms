/*
    Written by: Vy Hoang
    Program Status: Complete
    Program: Basketball Player Height
    This program computes and displays the height of the player in feet/inches form.
*/

#include <iostream>
using namespace std;

int main()
{
   int heightInInches = 75,     // Define and initialize variable for the height in inches
       footToInch = 12,         // Define and initialize variable for the length of one foot in inches
       heightInFeet,            // Define variable for the height in feet
       remainderInInches;       // Define variable for the leftover inches tall

   // Calculate height in feet and inches
   heightInFeet =  heightInInches / footToInch;
   remainderInInches = heightInInches % footToInch;

   // Display the height in feet and inches form
   cout << "A 75 inch tall basketball player is ";
   cout << heightInFeet << " feet " << remainderInInches << " inches tall." << endl;

   return 0;

}