// Write a program to print the multiplication of two matrices given by the user.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int row1, column1;
    cout << "Enter the number of rows, and columns for first matrix: ";
    cin >> row1 >> column1;
    int arr1[row1][column1];

    int row2, column2;
    cout << "Enter the number of rows, and columns for second matrix: ";
    cin >> row2 >> column2;
    int arr2[row2][column2];

    // To multiply two matrix, column of first matrix must equal to the row of second matrix
    if (column1 != row2) {
        cout << "Matrix can not be multiplied...";
        return 0;
    }

    cout << "Enter the elements of array1: ";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter the elements of array2: ";
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            cin >> arr2[i][j];
        }
    }

    int ans[row1][column2];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            ans[i][j] = 0;
            for (int k = 0; k < row2; k++) {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}