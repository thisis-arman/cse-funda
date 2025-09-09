#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> arr;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '+')
        {
            arr.push_back(str[i]);
        }
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if(i!=arr.size()-1){
            cout << char(arr[i]) <<"+";
        }else{
            cout <<char(arr[i]) ;

        }
        
    }

    return 0;
}