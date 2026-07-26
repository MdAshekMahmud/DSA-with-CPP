#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    // Sort in ascending order if it is not sorted
    int Value = 1099;
    int result = 0;
    vector<int> v;
    while (Value)
    {
        for (int i = coins.size() - 1; i >= 0; i--)
        {
            if (Value >= coins[i])
            {
                result++;
                v.push_back(coins[i]);
                Value -= coins[i];
                break;
            }
        }
    }
    cout << result << endl;
    for (int el : v)
    {
        cout << el << " ";
    }
    return 0;
}