// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < s.length(); i++) {
        int currMax = s[i] - '0';

        if (currMax > max1) {
            max2 = max1;
            max1 = currMax;
        } else if (max2 != max1 && currMax > max2) {
            max2 = currMax;
        }
    }

    cout << "Second max is: " << max2 << "\n";

    return 0;
}