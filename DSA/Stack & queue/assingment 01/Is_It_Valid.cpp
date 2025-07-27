#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    stack<int> st;
    void push(int val)
    {
        if (st.empty())
        {
            st.push(val);
        }
        else if (!st.empty())
        {
            if (st.top() == val)
            {
                st.push(val);
            }
            else
            {
                st.pop();
            }
        }
    }
};

int main()
{

    int q;
    cin >> q;
    while (q--)
    {
        stack<char> st;
        string str;
        cin >> str;
        int length = str.length();
        // cout << str << endl;
        for(int i =0;i<length;i++){
        char val;
        val= str[i];
        // cout << "---"<<val << endl;
        if (st.empty())
        {
            st.push(val);
        }
        else if (!st.empty())
        {
            if (st.top() == val)
            {
                st.push(val);
            }
            else
            {
                st.pop();
            }
        };
     }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    };

    return 0;
}