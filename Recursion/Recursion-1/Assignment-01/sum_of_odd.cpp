// 1.Write a program to calculate the sum of odd numbers between a and
// b(both inclusive) using recursion.
#include <bits/stdc++.h>
using namespace std;

int sum_of_odd(int a, int b) {
    if (a > b) {
        return 0;
    }

    if (a % 2 != 0) {
        return a + sum_of_odd(a + 1, b);
    } else {
        return sum_of_odd(a + 1, b);
    }
}

int main() {

    cout << sum_of_odd(1, 10) << '\n';

    return 0;
}