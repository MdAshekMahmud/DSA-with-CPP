// Q: Write a program to print the matrix in wave form.
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

    for (int i = 0; i < matrix.size(); i++) {
        auto &row = matrix[i];
        if (i % 2 != 0) {
            reverse(row.begin(), row.end());
        }
    }
    cout << '\n';

    for (const auto &row : matrix) {
        for (int el : row) {
            cout << el << " ";
        }
    }
    return 0;
}