#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<string> q;
    while (n--)
    {
        int x;
        string name;
        cin >> x;
        if (x == 0)
        {
            cin >> name;
            q.push(name);
        }
        else if (x == 1 && !q.empty())
        {
            cout << q.front() << endl;
            q.pop();
        }
        else if (x == 1 && q.empty())
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}