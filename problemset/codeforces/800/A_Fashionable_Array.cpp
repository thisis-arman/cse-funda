#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
        int n;
        vector<int> arr(n);
        cin>> n;
        cin>> arr[i];
        sort(arr.begin(),arr.end());
        int mn = arr[0];
        int mx = arr[n-1];
        int d= mn+mx;
        if(d%2==0){
            

        }


        
    }
    return 0;
}