// Find the element x in the array. Take array and x as input
#include <iostream>
#include <stdbool.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter x: ";
    cin >> x;

    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "Element is present in the array..";
    } else {
        cout << "Element is not in the array..";
    }

    return 0;
}