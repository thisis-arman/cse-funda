#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(int v[], int sz){
    // if(v[sz]){
    //     return;
    // }
    int res= sum_of_digits(v[sz],sz-1);

}

int main()
{
    int q;
    cin>> q;
    vector<int> v(q);
    while(q--){
        int val;
        cin>>val;
        v.push_back(val);
    }

    int total= sum_of_digits(v.data(),q);
    return 0;
}