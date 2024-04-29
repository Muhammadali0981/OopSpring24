#include <iostream>

using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) : name(name), age(age) {}
};

class Teacher : public Person {
public:
    string subject;
    int roomNumber;

    Teacher(string name, int age, string subject, int room) : Person(name, age), subject(subject), roomNumber(room) {}

    void display() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Subject: " << subject << "\n";
        cout << "Room Number: " << roomNumber << "\n";
    }
};

class Student : public Person {
public:
    int id, grade;

    Student(string name, int age, int id, int grade) : Person(name, age), id(id), grade(grade) {}

    void display() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "ID: " << id << "\n";
        cout << "Grade: " << grade << "\n";
    }
};

class GraduateStudent : public Student, public Teacher {
public:
    GraduateStudent(string name, int age, int id, int grade, string subject, int room) :
        Student(name, age, id, grade), Teacher(name, age, subject, room) {}

    void display() {
        cout << "Name: " << Student::name << "\n";
        cout << "Age: " << Student::age << "\n";
        cout << "ID: " << id << "\n";
        cout << "Grade: " << grade << "\n";
        cout << "Subject: " << subject << "\n";
        cout << "Room Number: " << roomNumber << "\n";
    }
};

int main() {
    Teacher teacher("fasih", 18, "math", 3);
    Student student("Abser", 18, 727, 16);
    GraduateStudent graduate_student("Ali", 18, 344, 13, "Physics", 13);

    teacher.display();
    cout << "\n";
    student.display();
    cout << "\n";
    graduate_student.display();

    return 0;
}