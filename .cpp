#include <iostream>
using namespace std;

class Student {
public:
    string name;
    Student(string n) { name = n; }
};

class Course {
public:
    string title;
    Course(string t) { title = t; }
};

class Registration {
    Student* student;
    Course* course;
public:
    Registration(Student* s, Course* c) {
        student = s;
        course = c;
    }

    void display() {
        cout << student->name << " registered for " << course->title;
    }
};

int main() {
    Student s("Josh");
    Course c("Computer Programming");
    Registration r(&s, &c);
    r.display();
    return 0;
}
