// Write a program to rotate the matrix by 90 degrees anti-clockwise.
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = row - 1; i >= 0; i--) {
        for (int j = 0; j < col; j++) {
            cout << matrix[j][i] << ' ';
        }
        cout << endl;
    }

    return 0;
}