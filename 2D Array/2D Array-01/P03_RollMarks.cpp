// Write a program to store roll number and marks obtained by 4 students
// side by side in a matrix.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cout << "Enter the number of students: ";
    cin >> m;

    int arr[m][2];

    // Taking input from users
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "\nRoll|Marks\n";

    // Output
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}