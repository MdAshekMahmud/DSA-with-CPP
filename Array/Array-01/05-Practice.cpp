// Find the maximum value out of all the elements in the array.
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_value = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    cout << max_value << endl;

    return 0;
}