// Remove consecutive duplicates in a string
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
string RemoveDuplicates(string s)
{
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != st.top())
            st.push(s[i]);
    }
    s = "";
    while (st.size() > 0)
    {
        s += st.top();
        st.pop();
    }
    reverse(s.begin(), s.end());
    return s;

    // string str;
    // while (st.size() > 0)
    // {
    //     str += st.top();
    //     st.pop();
    // }
    // reverse(str.begin(), str.end());
    // return str;
}
int main()
{
    string s = "aaabbcddaabffg";
    cout << "String before removing the duplicates : " << s << endl;
    s = RemoveDuplicates(s);
    cout << "String after removing the duplicates : " << s << endl;

    return 0;
}