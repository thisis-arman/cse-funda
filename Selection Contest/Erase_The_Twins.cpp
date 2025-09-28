#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int s;
        cin>>s;
        string str;
        cin>> str;
         string result;
        for (char c : str) {
            if (!result.empty() && result.back() == c)
                result.pop_back();
            else
                result.push_back(c);
        }

        cout << result.size() << "\n"; 
    }

    return 0;
}