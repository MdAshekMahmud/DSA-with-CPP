// Push at any position
#include <iostream>
#include <stack>
using namespace std;

void InsertAtIndex(stack<int> &stk, int index, int value)
{
    stack<int> helper;
    while (stk.size() > index)
    {
        helper.push(stk.top());
        stk.pop();
    }
    stk.push(value);

    while (!helper.empty())
    {
        stk.push(helper.top());
        helper.pop();
    }
}
void DisplayElement(stack<int> &stk)
{
    while (!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    int index;
    cout << "Enter index : ";
    cin >> index;
    int value;
    cout << "Enter value : ";
    cin >> value;
    InsertAtIndex(st, index, value);
    DisplayElement(st);
    return 0;
}