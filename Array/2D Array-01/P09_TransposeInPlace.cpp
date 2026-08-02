// Given a matrix of size (n x n. Change this into it's transpose.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int column = row;
    int arr[row][column];

    cout << "Enter the array elements: \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < column; j++) {
            if (i == j)
                continue;
            else {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}