// Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

#include <bits/stdc++.h>
using namespace std;

void displayMiddle(int arr[][100], int n) {
    int mid = n / 2;

    // Display middle column
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i][mid]);

    // Display middle row
    for (int j = 0; j < n; j++)
        printf("%d ", arr[mid][j]);
}

int main() {
    int n;
    cout << "Enter the number of rows of(n x n): ";
    cin >> n;

    int matrix[100][100];
    cout << "Enter matrix elements (row-wise):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    displayMiddle(matrix, n);

    return 0;
}