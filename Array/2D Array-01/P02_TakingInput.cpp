#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cout << "Enter the number of rows: ";
    cin >> m;

    int n;
    cout << "Enter the number of columns: ";
    cin >> n;

    int arr[m][n];

    // Taking input from users
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter the element[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Output
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}