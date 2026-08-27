// Input a string and concatenate with its reverse string and print it.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    string rev;
    for (int i = s.length() - 1; i >= 0; i--) {
        rev.push_back(s[i]);
    }

    cout << s + rev;

    return 0;
}