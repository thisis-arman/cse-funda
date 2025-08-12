#include <bits/stdc++.h>
using namespace std;

int factorial( int n){
    if(n==1)return 1;
    
    int res= factorial( n-1);
    return res *n;
}

int main()
{
    int res= factorial(5);
    cout <<res;
    return 0;
}