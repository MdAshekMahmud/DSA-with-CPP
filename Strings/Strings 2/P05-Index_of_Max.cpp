/*Q: Given n strings, consiting of digits from 0-9.
Return the index of string which has maximum value*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> str = {"0123", "0023", "456", "00182", "940", "2901"};

    int max1 = stoi(str[0]);
    for (int i = 1; i < str.size(); i++) {
        int x = stoi(str[i]);
        if (x > max1) {
            max1 = x;
        }
    }
    cout << max1;

    return 0;
}