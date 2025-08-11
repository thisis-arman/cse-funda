#include <bits/stdc++.h>
using namespace std;

class cmp
{
    bool operator()(int l, int r)
    {
        if (l > r)
        {
            return true;
        }
        else if(l<r)
        {
            return false;
        }
    }
};

int
main()
{
    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string str;
        getline(cin, str);
        map<string, int> mp;
        priority_queue<string, int, cmp> pq;
        string word;
        stringstream ss(str);
        while (ss >> word)
        {
            mp[word]++;
        }
        pair<string, int> p;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second >= p.second)
            {
                p.first = it->first;
                p.second = it->second;
            }
            // cout <<it->first << " " << it->second << endl;
        }
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}