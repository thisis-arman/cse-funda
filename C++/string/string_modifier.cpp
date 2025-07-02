#include <bits/stdc++.h>
using namespace std;

int main()
{
    string firstName ="Arman";
     firstName +=" Hossen"; // append another string.
     firstName.append(" farabi");
    cout << firstName <<endl;
    firstName.push_back('Nf');
    cout << firstName <<endl;
    firstName.pop_back();
    cout << firstName <<endl;
    firstName.erase(13,6);
    cout << firstName <<endl;
    firstName.replace(13,6,"Title");
    cout << firstName <<endl;
    firstName.insert(13,"OK ");
    cout << firstName <<endl;
    return 0;
}