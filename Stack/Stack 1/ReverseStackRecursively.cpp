#include <iostream>
#include <stack>
using namespace std;
void Display(stack<int> &stk)
{
    if (stk.size() == 0)
        return;
    int x = stk.top();
    cout << x << " ";
    stk.pop();
    Display(stk);
    stk.push(x);
}
void PushAtBottom(stack<int> &stk, int value)
{
    if (stk.size() == 0)
    {
        stk.push(value);
        return;
    }
    int x = stk.top();
    stk.pop();
    PushAtBottom(stk, value);
    stk.push(x);
}
void Reverse(stack<int> &stk)
{
    if (stk.size() == 1)
        return;
    int x = stk.top();
    stk.pop();
    Reverse(stk);
    PushAtBottom(stk, x);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    Display(st);
    cout << endl;
    Reverse(st);
    Display(st);
}