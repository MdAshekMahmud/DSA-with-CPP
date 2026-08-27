/*Q: Input a string and return the number of times the neighbouring
characters are different from each other*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "aBbcdeFfGhh";
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c) { return static_cast<char>(tolower(c)); });

    int count = 0;
    for (int i = 1; i < s.length() - 1; i++) {
        if (s[i - 1] != s[i] && s[i + 1] != s[i]) {
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}