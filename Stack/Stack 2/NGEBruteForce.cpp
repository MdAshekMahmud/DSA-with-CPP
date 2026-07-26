// Next Greater Element Brute Force
// T.C = O(n^2) S.C = O(1)
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    int arr1[] = {3, 1, 2, 7, 4, 6, 2, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr1[j] > arr1[i])
            {
                arr2[i] = arr1[j];
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}