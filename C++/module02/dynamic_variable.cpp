#include "bits/stdc++.h"
using namespace std;

int *p;
void fun()
{
    int *x = new int;
    *x = 10;
    p = x;
    cout << "FUN -> " << *p << endl;
    return;
}

int main()
{
    fun();
    cout << "Main -> " << *p << endl;
}