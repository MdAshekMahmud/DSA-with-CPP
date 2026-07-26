#include <iostream>
using namespace std;
int Partition(int arr[], int si, int ei)
{
    int idx = si - 1;
    int Pivot = arr[ei];
    for (int i = si; i < ei; i++)
    {
        if (arr[i] <= Pivot)
        {
            idx++;
            swap(arr[idx], arr[i]);
        }
    }
    idx++;
    swap(arr[idx], arr[ei]);
    return idx;
}
void QuickSort(int arr[], int si, int ei)
{
    if (si >= ei)
        return;
    int Pivot = Partition(arr, si, ei);
    QuickSort(arr, si, Pivot - 1);
    QuickSort(arr, Pivot + 1, ei);
}
int main()
{
    int arr[] = {7, 1, 3, 2, 4, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int si = 0;
    int ei = n - 1;
    QuickSort(arr, si, ei);
    for (int el : arr)
    {
        cout << el << " ";
    }
}