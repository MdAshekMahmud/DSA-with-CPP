// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n^2 in spiral
// order.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of n x n matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    int row = matrix.size();
    int col = matrix[0].size();

    int val = 1;
    int minRow = 0, maxRow = row - 1;
    int minCol = 0, maxCol = col - 1;

    while (val <= n * n) {
        // top row
        for (int j = minCol; j <= maxCol && val <= n * n; j++)
            matrix[minRow][j] = val++;
        minRow++;

        // right column
        for (int i = minRow; i <= maxRow && val <= n * n; i++)
            matrix[i][maxCol] = val++;
        maxCol--;

        // bottom row
        for (int j = maxCol; j >= minCol && val <= n * n; j--)
            matrix[maxRow][j] = val++;
        maxRow--;

        // left column
        for (int i = maxRow; i >= minRow && val <= n * n; i--)
            matrix[i][minCol] = val++;
        minCol++;
    }

    for (int i = 0; i < n; i++) {
        cout << '[';
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
            if (j + 1 < n)
                cout << ',';
        }
        cout << ']';
        if (i + 1 < n)
            cout << ", ";
    }

    return 0;
}