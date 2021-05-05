/*
    Written by: Vy Hoang
    Program Status: Complete
    Program: File Encryption
    This program works like a filter reading the contents of one file,
    modify each character in the input file into a code,
    and then write the coded characters out to a second file.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    // Variables to read from file and hold the encrypted file
    string fileName, encryptedFile;
    fstream inFile, outFile;
    char ch;    // Hold character read from the file

    // Get user to enter a file name to encrypt and
    // a file name to save as the new encrypted file
    cout << "\nEnter a file name to be encrypted: ";
    cin >> fileName;
    cout << "\nEnter a file name to be saved as the new encrypted file: ";
    cin >> encryptedFile;

    // Open file to read
    inFile.open(fileName.c_str(), ios::in);
    if (!inFile) {
        cout << "\nCould not open the file: " << fileName << endl;
        return 1;
    }
    // Open file to save the encrypted content
    outFile.open(encryptedFile.c_str(), ios::out);

     // Read one character at a time, add 10 to each character
     // and write one character at a time to the new encrypted file
    inFile.get(ch);
    while (!inFile.fail()) {
        ch += 10;
        outFile << ch;
        inFile.get(ch);
    }
    cout << "\nEncrypting the file is completed!" << endl;

    // Close the files
    inFile.close();
    outFile.close();

    return 0;
}
