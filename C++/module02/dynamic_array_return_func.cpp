#include <bits/stdc++.h>
using namespace std;

int* fun (){
    int *a = new int[5]; // dynamic array needed
    // int a[5]; wont work
    for(int i =0; i<5;i++){
        cin >> a[i];
    }
    return a;
}


int main ( ){
    int *x = fun();

    for(int i = 0; i <5;i++){
        cout << x[i] << " "<<endl;
    }
}