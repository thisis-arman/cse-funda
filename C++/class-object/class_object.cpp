#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int age;
    int cls;
    double gpa;

    Student(int age, int cls, double gpa)
    {
        this->age = age;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student hasan(20, 4, 5);
    cout << hasan.age << " " << hasan.cls << " " << hasan.gpa;
}