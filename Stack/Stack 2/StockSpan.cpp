#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    int arr1[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    int arr2[n];
    arr2[0] = 1;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (st.size() > 0 && arr1[st.top()] <= arr1[i])
        {
            st.pop();
        }
        if (st.size() == 0)
            arr2[i] = -1;
        else
            arr2[i] = st.top();
        arr2[i] = i - arr2[i];
        st.push(i);
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}