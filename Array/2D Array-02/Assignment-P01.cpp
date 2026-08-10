// Write a program to print the elements of both the diagonals in a square matrix.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "Enter row and columns: ";
    cin >> n >> m;
    int matrix[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || j == n - i - 1) {
                cout << setw(4) << matrix[i][j];
            } else {
                cout << setw(4) << "";
            }
        }
        cout << endl;
    }

    return 0;
}