// Column wise printing
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

    int x = 0;
    for (int i = 0; i < row; i++) {
        if (i % 2 != 0) {
            for (int j = column - 1; j >= 0; j--) {
                cout << matrix[j][i] << " ";
            }
        } else {
            for (int j = 0; j < column; j++) {
                cout << matrix[j][i] << " ";
            }
        }
    }

    return 0;
}