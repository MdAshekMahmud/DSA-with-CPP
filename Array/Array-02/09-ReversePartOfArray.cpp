// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
#include <iostream>
#include <vector>
using namespace std;

void ReversePart(vector<int> &v, int i, int j) {
    while (i <= j) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

class Solution {
  public:
    void rotate(vector<int> &nums, int k) {
        int n = nums.size();
        k = k % n;
        ReversePart(nums, 0, n - k - 1);
        ReversePart(nums, n - k, n - 1);
        ReversePart(nums, 0, n - 1);
    }
};
void Display(vector<int> &a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    s.rotate(nums, 2);

    Display(nums);

    return 0;
}