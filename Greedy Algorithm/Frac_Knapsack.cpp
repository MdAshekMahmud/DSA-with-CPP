#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> value = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int knapsack = 50;
    vector<double> ValuePerKG;
    for (int i = 0; i < value.size(); i++)
    {
        int x = value[i] / weight[i];
        ValuePerKG.push_back(x);
    }
    int ans = 0;
    for (int i = 0; i < 3 && knapsack > 0; i++)
    {
        if (knapsack >= weight[i])
        {
            ans += value[i];
            knapsack -= weight[i];
        }
        else
        {
            ans += ValuePerKG[i] * knapsack;
            knapsack = 0;
            break;
        }
    }
    cout << ans;
}