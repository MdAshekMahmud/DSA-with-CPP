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
    int largest = INT_MIN;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }
    cout << "Largest element is: " << largest << '\n';

    return 0;
}