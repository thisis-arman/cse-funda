#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin>> n;
    cin.ignore();
    Student a[n];
    for(int i =0;i<n;i++){
        cin>> a[i].name >> a[i].roll >> a[i].marks;

    }
    // for(int i =0;i<n;i++){
    //     cout << a[i].name <<" "<< a[i].roll <<" "<< a[i].marks << endl;

    // }

    Student x;
    x.marks = INT_MAX;
    for( int  i = 0 ; i<n;i++){
        if(a[i].marks <x.marks){
            x= a[i];
        }
    }

    cout << x.name << " "<<x.roll <<" "<< x.marks;

    return 0;
}