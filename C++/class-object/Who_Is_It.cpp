#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int roll;
    string name;
    char section;
    int marks;

    Student() {} 

    Student(int roll, string name, char section, int marks) {
        this->roll = roll;
        this->name = name;        
        this->section = section;
        this->marks = marks;
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        Student bestStudent;
        bool is_first = true;

        for (int i = 0; i < 3; i++) {
            int roll, marks;
            string name;
            char section;

            cin >> roll >> name >> section >> marks;

            Student c(roll, name, section, marks);

            if (is_first || c.marks > bestStudent.marks ||
                (c.marks == bestStudent.marks && c.roll < bestStudent.roll)) {
                bestStudent = c;
                is_first = false;
            }
        }

        cout << bestStudent.roll << " " << bestStudent.name << " "
             << bestStudent.section << " " << bestStudent.marks << endl;
    }

    return 0;
}
