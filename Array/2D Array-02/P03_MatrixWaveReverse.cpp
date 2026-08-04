// Q: Write a program to print the matrix in wave form in reverse order.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int column;
    cout << "Enter the number of column: ";
    cin >> column;

    vector<vector<int>> matrix(row, vector<int>(column, 0));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = row - 1; i >= 0; i--) {
        auto &row = matrix[i];
        if (i % 2 != 0) {
            reverse(row.begin(), row.end());
        }
    }
    cout << '\n';

    for (int i = row - 1; i >= 0; i--) {
        for (int j = 0; j < column; j++) {
            cout << matrix[i][j] << " ";
        }
    }
    return 0;
}