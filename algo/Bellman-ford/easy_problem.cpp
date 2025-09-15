#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool is_easy= false;
    while(n--){
        int a;
        cin>>a;
        if(a==1){
            is_easy= false;
            break;
        }
        is_easy= true;

    }

    cout <<( is_easy?"EASY":"HARD");

    return 0;
}