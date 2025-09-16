#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    while(n--){
        int k,x;
        cin>> k>>x;
        for(int i =0;i<k;i++){
          x =x*2;
        }
        cout <<x<<endl;
    }
    return 0;
}