// Given an array of marks of students, if the mark of any student is less than 35 print it's roll
// number as index.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    int marks[n]; // Array Declaration of size n

    // Input
    cout << "Enter marks: ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    for (int i = 0; i < n; i++) {
        if (marks[i] < 35) {
            cout << i << " ";
        }
    }

    return 0;
}