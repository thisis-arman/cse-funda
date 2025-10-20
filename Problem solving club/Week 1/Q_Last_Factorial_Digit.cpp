#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int num=1;
        for(int i=1;i<=a;i++){
            num=num*i;
        }
        cout <<num%10 <<endl;
    }
    return 0;
}