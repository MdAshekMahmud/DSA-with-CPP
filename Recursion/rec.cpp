#include <bits/stdc++.h>
using namespace std;

void good(int n) {
    if (n < 1)
        return;

    cout << "Good Morning\n";

    good(n - 1);
}

int main() {
    int n;
    cin >> n;

    good(n);

    return 0;
}