#include <bits/stdc++.h>
using namespace std;


int* sort_it(int t){
  
  int*  arr= new int[t];
  
  for(int i =0;i<t;i++){
    cin >> arr[i];
  }
  
  sort(arr, arr+t,greater<int>());

  
  return arr;
}

int main() 
{
    int t;
    cin >> t;
    
     int* res = sort_it(t);
     for(int i =0 ; i<t;i++){
       cout << res[i]<<" ";
     }
    
    return 0;
};