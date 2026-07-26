#include <iostream>
#include <vector>
using namespace std;

int getMinChange(vector<int> coins, int Value)
{
    vector<int> v;
    int ans = 0;
    for (int i = coins.size() - 1; i >= 0 && Value > 0; i--)
    {
        if (Value >= coins[i])
        {
            v.push_back(coins[i]);
            ans += Value / coins[i];
            Value = Value % coins[i];
        }
    }
    for (auto el : v)
    {
        cout << el << " ";
    }
    cout << endl;
    cout << "Minimum coins : " << ans;

    return ans;
}

int main()
{
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    int Value = 1099;

    getMinChange(coins, Value);

    return 0;
}