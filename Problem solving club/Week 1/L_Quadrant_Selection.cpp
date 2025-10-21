#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(x<1){
        if(y>1){
            cout <<2;
        }else{
            cout <<3;
        }
    }else if (y<1){
        cout <<4;
    }else{
        cout <<1;
    }
    return 0;
}