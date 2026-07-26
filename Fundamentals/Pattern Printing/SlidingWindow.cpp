#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = 9;
    int k = 4;

    int maxSum = INT_MIN;

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int i = 1;
    int j = k;
    maxSum = sum;
    while (j < n)
    {
        sum = sum + arr[j] - arr[i - 1];
        if (maxSum < sum)
        {
            maxSum = sum;
        }
        i++;
        j++;
    }
    cout << maxSum << endl;

    return 0;
}