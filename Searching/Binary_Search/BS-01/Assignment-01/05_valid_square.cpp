/*5. Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 36;

    int low = 1, high = n, res = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid * mid == n) {
            res = 1;
            break;
        } else if (mid * mid < n) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (res) {
        cout << "Valid\n";
    } else {
        cout << "Invalid\n";
    }

    return 0;
}