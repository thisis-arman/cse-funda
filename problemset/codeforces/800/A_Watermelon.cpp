#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin>> w;
    vector<int> v;
    if(w%2!=0){
        cout <<"NO";
    }
    for(int i=1;i<=w;i++){
        if(w%i==0 && (w%i)%2==0){
            v.push_back(i);
        }
    }
    for(int x:v){
        cout << x<<" ";
    }
  
    return 0;
}