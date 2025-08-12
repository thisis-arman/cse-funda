#include <bits/stdc++.h>
using namespace std;
int sumofN(int n){
    if(n==1){
        return 1;
    }
    int sum = sumofN(n-1);
    return sum+n;
}

int main()
{
    int total= sumofN(100);
    cout <<total;
    return 0;
}