#include <iostream>
#include <vector>
using namespace std;

bool isLiked(int num)
{
    return num % 3 != 0 && num % 10 != 3;
}

int main()
{
    int t;
    cin >> t;
    vector<int> results;

    while (t--)
    {
        int k;
        cin >> k;

        int count = 0, current = 1;
        while (count < k)
        {
            if (isLiked(current))
            {
                count++;
            }
            if (count < k)
            {
                current++;
            }
        }
        results.push_back(current);
    }

    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}