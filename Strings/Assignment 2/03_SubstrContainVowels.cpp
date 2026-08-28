// Input a string and return the number of substrings that contain only vowels.
#include <bits/stdc++.h>
using namespace std;

bool isVowel(string str) {
    int n = str.length();

    for (int i = 0; i < n; i++) {
        if (string("aeiou").find(str[i]) == string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    vector<string> substrings;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            substrings.push_back(s.substr(i, j));
        }
    }

    vector<string> ans;
    for (int i = 0; i < substrings.size(); i++) {
        if (isVowel(substrings[i])) {
            ans.push_back(substrings[i]);
        }
    }

    for (string el : ans) {
        cout << el << '\n';
    }

    return 0;
}