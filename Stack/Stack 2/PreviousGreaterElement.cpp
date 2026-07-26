#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    int arr1[] = {3, 1, 2, 7, 4, 6, 2, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[n];
    arr2[0] = -1;
    st.push(arr1[0]);
    // T.C = O(n)  S.C = O(n)
    for (int i = 1; i < n; i++)
    {
        // Pop all the elements smaller than arr1[i]
        while (st.size() > 0 && st.top() <= arr1[i])
        {
            st.pop();
        }
        // Mark the ans in Previous Greater Element array -> arr2
        if (st.size() == 0)
            arr2[i] = -1;
        else
            arr2[i] = st.top();
        // Push onto arr1
        st.push(arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}