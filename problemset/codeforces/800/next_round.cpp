#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int count =0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i <= k; i++)
    {
        if(v[i]==0){
            count=0;
        }
        if (v[i]!=0 && v[k - 1] == v[k])
        {
            // cout << v[i] << " ";
            count++;
        }
        else if(!v[i]==0)
        {
        // cout << v[i] <<" -  here ";
            // cout << v[i] << " ";
            count++;
        }
    }

    cout << count;

    return 0;
}