#include <bits/stdc++.h>
using namespace std;

int maze2(int row, int col, string s) {

    if (row < 1 || col < 1) {
        return 0;
    }

    if (row == 1 && col == 1) {
        cout << s << '\n';
        return 1;
    }

    int rightWays = maze2(row, col - 1, s + "R"); // Go right
    int downWays = maze2(row - 1, col, s + "D");  // Go down

    return rightWays + downWays;
}

int main() {

    cout << maze2(3, 3, "");

    return 0;
}