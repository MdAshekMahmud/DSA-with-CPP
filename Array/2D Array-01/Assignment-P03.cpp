// Write a program to print the row number having the maximum sum in a given matrix.

// Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of
// the rectangle from (l1,r1) to (l2, r2).

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
    int maxSum = INT_MIN;
    int idx = -1;
    for (int i = 0; i < row; i++) {
        const auto &mat = matrix[i];
        int currSum = accumulate(mat.begin(), mat.end(), 0);
        if (currSum > maxSum) {
            maxSum = currSum;
            idx = i;
        }
    }

    if (idx != -1) {
        cout << "Row with maximum sum: " << idx + 1 << endl;
    }

    return 0;
}