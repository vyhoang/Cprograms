/*  Written by: Vy Hoang
    Program Status: Complete
    Program: Median Function
    This program uses sorted arrays and pointers
    to determine the median value for each array.
*/
#include <iostream>
#include <algorithm>
using namespace std;

// Function prototypes
void sortArray(int array[], int size);
int findMedian(const int *array, int size);
void printArray(const int *array, int size);

int main() {
    const int SIZE_EVEN_ARRAY = 10;     // size of even array
    const int SIZE_ODD_ARRAY = 9;       // size of odd array

    // Initialize two arrays
    int evenArray[SIZE_EVEN_ARRAY] = {17, 32, 45, 68, 99, 101, 67, 89, 22, 27};
    int oddArray[SIZE_ODD_ARRAY] = {17, 32, 45, 68, 99, 101, 67, 89, 22};

    // Display content of oddArray and the median of oddArray
    cout << "\nMedian of the odd array: \n";
    sortArray(oddArray, SIZE_ODD_ARRAY);    // sort oddArray
    printArray(oddArray, SIZE_ODD_ARRAY);   // display the sorted oddArray
    // display the median of oddArray
    cout << "is " << findMedian(oddArray, SIZE_ODD_ARRAY) << endl;

    // Display content of evenArray and the median of evenArray
    cout << "\nMedian of the even array: \n";
    sortArray(evenArray, SIZE_EVEN_ARRAY);      // sort evenArray
    printArray(evenArray, SIZE_EVEN_ARRAY);     // display the sorted evenArray
    // display the median of evenArray
    cout << "is " << findMedian(evenArray, SIZE_EVEN_ARRAY) << endl;

    return 0;
}

// Define sortArray function
void sortArray(int array[], int size) {
    sort(array, array + size);
}

// Define findMedian function
int findMedian(const int *array, int size){
    // return median of odd array
    if (size % 2 != 0)
        return *(array + (size / 2));
    // return median of even array
    else
        return (*(array + ((size - 1) / 2)) + *(array + (size / 2))) / 2;
}

// Define printArray function
void printArray(const int *array, int size) {
    // display all the values of the array
    for (int i = 0; i < size; i++) {
        cout << *(array + i) << " ";
    }
    cout << endl;
}