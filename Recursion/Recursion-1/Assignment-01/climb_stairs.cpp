/* Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or
3 steps at each level.*/
#include <bits/stdc++.h>
using namespace std;

int climb_stairs(int n) {
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    return climb_stairs(n - 1) + climb_stairs(n - 2) + climb_stairs(n - 3);
}

int main() {

    cout << climb_stairs(3);

    return 0;
}