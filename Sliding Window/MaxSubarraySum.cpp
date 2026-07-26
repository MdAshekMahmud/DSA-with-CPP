#include <iostream>
using namespace std;

void maxSubarraySumSlidingWindow(int (&arr)[], int n, int k) { // Time Complexity O(k + n) == O(n)
    int max_sum = 0;
    for (int i = 0; i < k; i++) { // total number operation = k
        max_sum += arr[i];
    }

    int window_sum = max_sum;
    int idx = 0;
    for (int i = 1; i <= n - k; i++) { // total number operation = n - k
        window_sum += arr[i + k - 1] - arr[i - 1];
        if (window_sum > max_sum) {
            max_sum = window_sum;
            idx = i;
        }
    }

    cout << "Maximum sum Subarray of size " << k << " = " << max_sum << '\n';
    cout << "The Subarray starts from index : " << idx << '\n';
}

void maxSubarraySumBruteForce(int arr[], int n, int k) { // total number operation = O(n - k + 1) * k == O(k * n)
    int maxSubarraySum = INT_MIN;
    int idx = -1;
    for (int i = 0; i <= n - k; i++) { // total number operation = n - k + 1
        int ans = 0;
        for (int j = i; j < i + k; j++) { // total number operation = k times
            ans += arr[j];
        }
        if (maxSubarraySum < ans) {
            maxSubarraySum = ans;
            idx = i;
        }
    }
    cout << "Maximum sum Subarray of size " << k << " = " << maxSubarraySum << '\n';
    cout << "The Subarray starts from index : " << idx << '\n';
}

int main() {
    int arr[] = {100, 200, 300, 400};
    int k = 1;
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSubarraySumBruteForce(arr, n, k);

    cout << "====Sliding Window====" << '\n';

    maxSubarraySumSlidingWindow(arr, n, k);

    return 0;
}