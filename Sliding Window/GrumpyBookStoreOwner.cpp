// 1052.LeetCode Grumpy Bookstore Owner
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes) {
        int n = customers.size();
        int unrealizedCustomers = 0;

        // Calculate initial number of unrealized customers in first 'minutes'
        // window
        for (int i = 0; i < minutes; i++) {
            unrealizedCustomers += customers[i] * grumpy[i];
        }

        int maxUnrealizedCustomers = unrealizedCustomers;

        // Slide the 'minutes' window across the rest of the customers array
        for (int i = minutes; i < n; i++) {
            // Add the current minute's unsatisfied customers if the owner is
            // grumpy and remove the customers that are out of the current
            // window
            unrealizedCustomers += customers[i] * grumpy[i];
            unrealizedCustomers -= customers[i - minutes] * grumpy[i - minutes];

            // Update the maximum unrealized customers
            maxUnrealizedCustomers =
                max(maxUnrealizedCustomers, unrealizedCustomers);
        }

        // Start with maximum possible satisfied customers due to secret
        // technique
        int totalCustomers = maxUnrealizedCustomers;

        // Add the satisfied customers during non-grumpy minutes
        for (int i = 0; i < n; i++) {
            totalCustomers += customers[i] * (1 - grumpy[i]);
        }

        // Return the maximum number of satisfied customers
        return totalCustomers;
    }
};

/*
class Solution {
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes) {
        if (customers.size() == 1) {
            return customers[0];
        }
        int maxSatisfy = 0;
        int mostLoss = INT_MIN;
        int idx = -1;
        for (int i = 0; i <= customers.size() - minutes; i++) {
            int currLoss = 0;
            for (int j = i; j < i + minutes; j++) {
                if (grumpy[j] == 1) {
                    currLoss += customers[j];
                }
                if (mostLoss < currLoss) {
                    mostLoss = currLoss;
                    idx = i;
                }
            }
        }
        for (int i = idx; i < idx + minutes; i++) {
            grumpy[i] = 0;
        }
        for (int i = 0; i < customers.size(); i++) {
            if (grumpy[i] == 0) {
                maxSatisfy += customers[i];
            }
        }

        // cout << mostLoss << " " << idx << " " << maxSatisfy;

        return maxSatisfy;
    }
};
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> customers = {3, 7};
    vector<int> grumpy = {0, 0};

    Solution s;
    cout << s.maxSatisfied(customers, grumpy, 2);

    return 0;
}