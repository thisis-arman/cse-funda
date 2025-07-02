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
    for(int num:v){
        if(num <0){
            cout << 2<<" ";
        }else if (num >0){
            cout << 1<<" ";

        }else{

            cout << num <<" ";
        }
    }
    return 0;
}