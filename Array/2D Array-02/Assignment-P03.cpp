// Write a program to print the matrix in wave form.
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < col; i++) {
        if (i % 2 == 0) {
            for (int j = row - 1; j >= 0; j--) {
                cout << matrix[j][i] << ' ';
            }
        } else {
            for (int j = 0; j < row; j++) {
                cout << matrix[j][i] << ' ';
            }
        }
    }

    return 0;
}