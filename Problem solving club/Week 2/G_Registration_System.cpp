#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<string> s;
    while (t--)
    {
        string str;
        cin >> str;
        s.push_back(str);
    }

    vector<string> ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
        {
            ans.push_back("OK");
            continue;
        }
        auto it = find(s.begin(), s.end(), s[i]);

        int dis = distance(s.begin(), it);
        if (dis < i)
        {

            string str = s[i] + "1";
            ans.push_back(str);
        }
        else
        {
            ans.push_back("OK");
        }

        // cout << *it << " ";
        // if(it!=s.begin()+i){
        //     ans.push_back("Ok");
        // }else{
        // }
    }
    for (auto c : ans)
    {
        cout << c << endl;
    }
    return 0;
}