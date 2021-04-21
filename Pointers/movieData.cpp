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
void getMovies(int *, int);
void sortMovies(int *, int);
void displayMovies(const int *, int);
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

    // Dynamically create and allocate the array numMovies
    int *numMovies = nullptr;
    numMovies = new int[numStudents];

    // Get movies watched for each student
    getMovies(numMovies, numStudents);
    // Sort the number of movies in ascending order
    sortMovies(numMovies, numStudents);
    // Display the number movies watched for each student
    cout << "\nNumber of Movies Watched" << endl;
    cout << "------------------------" << endl;
    displayMovies(numMovies, numStudents);
    cout << "----------" << endl;

    // Display the average number of movies watched
    average = calAverage(numMovies, numStudents);
    cout << fixed << showpoint << setprecision(1);
    cout << "Average  " << average << endl;

    // Free the memory
    delete [] numMovies;
    numMovies = nullptr;

    return 0;
}

/******************************************************
 * Define the getMovies function
 * to get the number of movies watched by each student
 ******************************************************
*/
void getMovies(int *movies, int students) {
    // Get number of movies
    for (int count = 0; count < students; count++) {
        cout << "\nEnter number of movies for student #" << (count+1) << ": ";
        cin >> movies[count];
        // Validate input for number of movies
        while ((*(movies + count)) < 0) {
            cout << "\nThe number of movies should be a positive integer.\n";
            cout << "Please re-enter the number of movies for student #" << (count+1) << ": ";
            cin >> movies[count];
        }
    }
}

/*******************************************
 * Define the sortMovies function
 * to sort the list of the number of movies
 *******************************************
*/
void sortMovies(int *movies, int students) {
    sort(movies, movies + students);
}

/**********************************************************
 * Define displayMovies function
 * to display the number of movies watched by each student
 **********************************************************
*/
void displayMovies(const int *movies, int students) {
    for (int count = 0; count < students; count++) {
        cout << *(movies + count) << endl;
    }
}

/*******************************************************
 * Define calAverage function
 * to calculate the average of the total movies watched
 *******************************************************
*/
double calAverage(const int *movies, int students) {
    double total = 0;
    for (int count = 0; count < students; count++) {
        total = total + (*(movies + count));
    }
    return (total / students);
}