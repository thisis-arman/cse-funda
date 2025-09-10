#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>> str;
    for(int i =0;i<str.length();i++){
        if(i==0 && (str[i]>=97 && str[i]<=122)){
            cout <<char(str[i]-32);
        }else{
            cout << str[i];
        }
    }

    return 0;
}