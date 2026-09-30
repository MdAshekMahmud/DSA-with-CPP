/*3. You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target , return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity.*/
#include <bits/stdc++.h>
using namespace std;

bool search_2D(vector<vector<int>> &arr, int target) {
    int n = arr.size();
    int m = arr[0].size();

    int low = 0;
    int high = (m * n) - 1;
    while (low <= high) {

        int mid = low + (high - low) / 2;

        int row = mid / m;
        int col = mid % m;
        int mid_element = arr[row][col];

        if (target == mid_element) {
            return true;
        } else if (target > mid_element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> arr = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 13;

    if (search_2D(arr, target)) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }

    return 0;
}