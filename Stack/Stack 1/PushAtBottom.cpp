// Push element at bottom
#include <iostream>
#include <stack>
using namespace std;
void PushAtBottom(stack<int> &stk, int data)
{
    stack<int> helper;

    while (!stk.empty())
    {
        helper.push(stk.top());
        stk.pop();
    }
    stk.push(data);
    while (!helper.empty())
    {
        stk.push(helper.top());
        helper.pop();
    }
}
int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    int data;
    cout << "Enter the data to push at bottom : ";
    cin >> data;

    PushAtBottom(st, data);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}