#include <bits/stdc++.h>
using namespace std;

int power_fun(int a, int b) {
    if (b == 1) {
        return a;
    }

    int ans = power_fun(a, b / 2);
    if (b % 2 == 0) {
        return ans * ans;
    } else {
        return ans * ans * a;
    }
}

int main() {
    cout << power_fun(3, 2);

    return 0;
}