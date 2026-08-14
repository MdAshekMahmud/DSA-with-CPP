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
    cout << "Enter matrix elements (row-wise):\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> matrix[i][j];
        }
    }

    int l1, r1, l2, r2;
    cout << "Enter l1 (row index of top-left): ";
    cin >> l1;
    cout << "Enter r1 (col index of top-left): ";
    cin >> r1;
    cout << "Enter l2 (row index of bottom-right): ";
    cin >> l2;
    cout << "Enter r2 (col index of bottom-right): ";
    cin >> r2;

    // To handle any order input
    int rowStart = min(l1, l2);
    int rowEnd = max(l1, l2);
    int colStart = min(r1, r2);
    int colEnd = max(r1, r2);

    // bounds check
    if (rowStart < 0)
        rowStart = 0;
    if (colStart < 0)
        colStart = 0;
    if (rowEnd >= row)
        rowEnd = row - 1;
    if (colEnd >= column)
        colEnd = column - 1;

    long long Sum = 0;
    for (int i = rowStart; i <= rowEnd; i++) {
        for (int j = colStart; j <= colEnd; j++) {
            Sum += matrix[i][j];
        }
    }
    cout << endl;
    for (int i = rowStart; i <= rowEnd; i++) {
        for (int j = colStart; j <= colEnd; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The Sum of elements: " << Sum << "\n";
    return 0;
}