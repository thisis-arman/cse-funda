#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<b &&a!=b){
            cout << "<";
        }else if(a>b &&a!=b){
            cout <<">";

        }else{
            cout <<"=";
        }
        cout <<endl;

    }
    return 0;
}