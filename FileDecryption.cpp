/*
    Written by: Vy Hoang
    Program Status: Complete
    Program: File Decryption
    This program reads the contents of the coded file,
    restores the information to its original state
    and writes it to another new file.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    // Variables to handle files
    string encryptedFile, decryptedFile;
    fstream inFile, outFile;
    char ch;    // Hold character read from the file

    // Get user to enter the encrypted file
    cout << "Enter the encrypted file to be decrypted: ";
    cin >> encryptedFile;

    // Get user to enter a file name to be saved as the new decrypted file
    cout << "\nEnter the file name to be saved as the new decrypted file: ";
    cin >> decryptedFile;

    // Open the encrypted file
    inFile.open(encryptedFile.c_str(), ios::in);
    if (!inFile) {
        cout << "\nCould not open the encrypted file: " << encryptedFile << endl;
        return 1;
    }

    // Open the decrypted file
    outFile.open(decryptedFile.c_str(), ios::out);
   // Read the encrypted file, restore to the original state
   // and write to the new decrypted file
    inFile.get(ch);
    while (!inFile.fail()) {
        ch -= 10;
        outFile << ch;
        inFile.get(ch);
    }
    cout << "\nDecrypting the file is completed!" << endl;

    // Close the files
    inFile.close();
    outFile.close();

    return 0;
}
