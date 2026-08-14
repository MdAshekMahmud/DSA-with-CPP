#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Md Ashek Mahmud";

    reverse(str.begin(), str.begin() + str.length() / 2);

    cout << str;

    return 0;
}