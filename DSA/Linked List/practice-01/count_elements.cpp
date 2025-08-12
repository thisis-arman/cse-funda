#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x = 0;
    for (int a : v)
    {
        auto it = find(v.begin(), v.end(), a+1);
        if (it != v.end())
        {
            x+=1;
           
        }
    }
    cout <<x;
    return 0;
}