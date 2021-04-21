/*  Written by: Vy Hoang
    Program Status: Complete
    Program: Movie Data
    This program gathers statistical data about
    the number of movies college students see in a month.
    The program should ask the user how many students were surveyed
    and dynamically allocate an array of that size.
    The program then should allow the user to enter the number of movies
    each student has seen. It should then sort the scores and calculate the average.
*/

#include <iostream>
#include <algorithm>    // Use for sort function
#include <iomanip>      // Use for manipulator function
using namespace std;

// Function prototypes
void getNumMovies(int *, int);
void sortListNumMovies(int *, int);
void displayNumMovies(const int *, int);
double calAverage(const int *, int);

int main() {
    int numStudents;    // Hold number of students
    double average;    //  Hold the average of movies watched

    // Accept number of students from user
    cout << "Enter number of students surveyed: ";
    cin >> numStudents;
    while (numStudents < 0) {
        cout << "\nThe number of students should be a positive integer.\n";
        cout << "Please re-enter the number of students: ";
        cin >> numStudents;
    }

    // Dynamically create and allocate the array listMovieNumbers
    int *listMovieNumbers = nullptr;
    listMovieNumbers = new int[numStudents];

    // Get movies watched for each student
    getNumMovies(listMovieNumbers, numStudents);

    // Display the sorted list of the number movies watched for each student
    cout << "\nNumber of Movies Watched" << endl;
    cout << "------------------------" << endl;
    sortListNumMovies(listMovieNumbers, numStudents);
    displayNumMovies(listMovieNumbers, numStudents);
    cout << "----------" << endl;

    // Calculate the average number of movies watched
    average = calAverage(listMovieNumbers, numStudents);
    cout << fixed << showpoint << setprecision(1);
    cout << "Average  " << average << endl;

    // Free the memory
    delete [] listMovieNumbers;
    listMovieNumbers = nullptr;

    return 0;
}

//********************************************************************
//                         getNumMovies                              *
// The function accepts the number of movies watched by each student *
//********************************************************************
void getNumMovies(int *numMovies, int students) {
    // Get number of movies
    for (int count = 0; count < students; count++) {
        cout << "\nEnter number of movies for student #" << (count+1) << ": ";
        cin >> numMovies[count];
        // Validate input for number of movies
        while ((*(numMovies + count)) < 0) {
            cout << "\nThe number of movies should be a positive integer.\n";
            cout << "Please re-enter the number of movies for student #" << (count+1) << ": ";
            cin >> numMovies[count];
        }
    }
}

//*******************************************************************
//                      sortListNumMovies                           *
// The function sorts the list of the watched movie numbers         *
// in the ascending order.                                          *
//*******************************************************************
void sortListNumMovies(int *numMovies, int students) {
    sort(numMovies, numMovies + students);
}

//******************************************************************
//                     displayNumMovies                            *
// The function displays the number of movies for each student.    *
//******************************************************************
void displayNumMovies(const int *numMovies, int students) {
    for (int count = 0; count < students; count++) {
        cout << *(numMovies + count) << endl;
    }
}

//******************************************************************
//                     calAverage                                  *
// The function calculates and returns the average number of       *
// the watched movies.                                             *
//******************************************************************
double calAverage(const int *numMovies, int students) {
    double total = 0;
    for (int count = 0; count < students; count++) {
        total = total + (*(numMovies + count));
    }
    return (total / students);
}