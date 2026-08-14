// Write a program to add two matrices and save the result in one of the given matrices.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int row;
    cout << "Enter the number of the row: ";
    cin >> row;
    int column = row; // To add two matrix- dimension must be same

    int matrix1[row][column];
    cout << "Enter the elements of matrix1: \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> matrix1[i][j];
        }
    }

    int matrix2[row][column];
    cout << "Enter the elements of matrix2: \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Store the sum of two matrix in matrix1
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            matrix1[i][j] += matrix2[i][j];
        }
    }
    cout << '\n';

    // Display the result
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}