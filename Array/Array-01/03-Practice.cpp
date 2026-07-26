// Calculate the sum of all the elements in the given array.
// [1, 4, 3, 2, 5, 6]
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum is: " << sum << endl;

    return 0;
}