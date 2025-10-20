#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>> str;
    int len = str.length();
    for(int i=0;i<len;i++){
        // cout << int(str[i]) <<" ";
        if(int(str[i])>=65 && int(str[i])<=90){
            cout <<str[i];
        }
    }





    return 0;
}