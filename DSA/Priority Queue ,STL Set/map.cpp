#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["rakib"] = 10;
    mp["sakib"] = 20;
    mp["akib"] = 30;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // to check the key is available or not 

    cout << mp.count("sakib");
    return 0;
}