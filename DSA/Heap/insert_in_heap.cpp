#include <bits/stdc++.h>
using namespace std;

int factorial( int n){
    if(n==1){
        return 1;
    }
    int total = n* n-1;
   int res=  factorial(n-1);
    return total + res;
}

int main()
{
    int res= factorial(6);
    return 0;
}