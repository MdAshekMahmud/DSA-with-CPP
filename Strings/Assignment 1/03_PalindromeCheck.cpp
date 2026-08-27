// 3. Check whether the given string is palindrome or not.
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string str = s;
    reverse(s.begin(), s.end());

    if (s == str)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}