/*
	Written by: Vy Hoang
    Program Status: Complete
    Program: Case Manipulator
    This program accepts a string from user input and converts it to
    the flipped case string, the uppercase string, and the lowercase string.
*/

#include <iostream>
#include <cctype> // use for the character-testing functions
#include <cstring> // use for C string library
using namespace std;

// Function prototype
void upper(char *);
void lower(char *);
void flip(char *);

int main() {
    const int SIZE = 51; // Maximum length
    char *pUserStr = nullptr;

    // Allocate the array to hold C-string
    pUserStr = new char[SIZE];

    // Read string from user input
    cout << "Enter a string of no more than "
         << SIZE - 1 << " characters:\n";
    cin.getline(pUserStr, SIZE);

    // Display the string user input
    cout << "\nThe original string: " << pUserStr << endl;

    // Flip characters
    flip(pUserStr);
    cout << "The flipped case string: " << pUserStr << endl;

    // Convert all characters to uppercase
    upper(pUserStr);
    cout << "The uppercase string: " << pUserStr << endl;

    // Convert all characters to lowercase
    lower(pUserStr);
    cout << "The lowercase string: " << pUserStr << endl;


    // Release the memory
    delete [] pUserStr;

    return 0;
}

//************************* upper function *******************************
// The function steps through all the characters in the string,          *
// converting each to uppercase.                                         *
//************************************************************************
void upper(char *userInput) {
    int len = strlen(userInput);
    for (int i = 0; i < len; i++) {
        userInput[i] = toupper(userInput[i]);
    }
}

//************************* lower function *******************************
// The function steps through all the characters in the string,          *
// converting each to lowercase.                                         *
//************************************************************************
void lower(char *userInput) {
    int len = strlen(userInput);
    for (int i = 0; i < len; i++) {
        userInput[i] = tolower(userInput[i]);
    }
}

//************************* flip function *******************************
// The function steps through the string, testing each character        *
// to determine whether it is upper or lowercase.                       *
// If upper, it converts to lower.                                      *
// If lower, it convert to upper.                                       *
//***********************************************************************
void flip(char *userInput) {
    int len = strlen(userInput);
    for (int i = 0; i < len; i++) {
        if (isupper(userInput[i])) {
            userInput[i] = tolower(userInput[i]);
        }
        else {
            userInput[i] = toupper(userInput[i]);
        }
    }
}