// Write a program to print the row number having the maximum sum in a given matrix.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    int column;
    cin >> column;

    vector<vector<int>> matrix(row, vector<int>(column));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> matrix[i][j];
        }
    }

    int idx = -1;
    int maxSum = INT_MIN;
    for (int i = 0; i < row; i++) {
        int currMax = 0;
        for (int j = 0; j < column; j++) {
            currMax += matrix[i][j];
        }
        if (currMax > maxSum) {
            maxSum = currMax;
            idx = i;
        }
    }

    if (idx != -1) {
        cout << "Row with maximum sum: " << idx + 1 << endl;
    }

    return 0;
}