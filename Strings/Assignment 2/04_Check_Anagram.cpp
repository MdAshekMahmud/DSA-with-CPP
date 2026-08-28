// Given an array of strings. Check whether they are anagram or not.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "car";
    string s2 = "arc";

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }

    return 0;
}