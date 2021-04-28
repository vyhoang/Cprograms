/*
	Written by: Vy Hoang
    Program Status: Complete
    Program: Word Separator
    This program converts the sentence to a string that words separated by
    spaces and only the first word starts with an uppercase letter.

*/

#include <iostream>
#include <cctype> // use for the character-testing functions
#include <string> // use for string class
using namespace std;

// Function prototype
string convertString(string sentence);

int main() {
    string userSentence;    // Declare a string object to hold the user input string
    string newStr;			// Declare newStr to hold the converted string

    // Read a sentence from user and store in the userSentence
    cout << "Input a sentence with no spaces between words.\n"
         << "The first character of each word is capitalized.\n"
         << "For example: StopAndSmellTheRoses\n"
         << "The program will convert the sentence to: Stop and smell the roses\n"
         << "Enter the sentence: ";
    getline(cin, userSentence);
    // Display the sentence user input
    cout << "\nSentence input: " << userSentence << endl;

    // Call convertString function and display the sentence converted
    cout << "Sentence converted: ";
    newStr = convertString(userSentence);
    cout << newStr << endl;

    return 0;
}

//************************** convertString function ********************************
// This function coverts the sentence to a string in which the words               *
// are separated by spaces and only the first word starts with an uppercase letter *
//**********************************************************************************
string convertString(string sentence) {
    // Uppercase for the first character
    sentence[0] = toupper(sentence[0]);
    // Loop to insert a space between words
    // and lowercase all the remain characters in the string
    for (int ch = 1; ch < sentence.length(); ch++){
        if (isupper(sentence[ch])) {
            sentence.insert(ch, 1, ' ');
            ++ch;
            sentence[ch] = tolower(sentence[ch]);
        }
    }
    // Return the converted string
    return sentence;
}

