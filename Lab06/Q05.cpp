/* Programmer:Muhammad Ali 23K-0052
* Date: 20/03/24
* Descrption: course registeration
*/

#include <iostream>

using namespace std;

class Course {
public:
    string code, name;
    int hours;

    Course(string code = "", string name  = "", int ch = 0) : code(code), name(name), hours(ch) {}
};

class Student {
private:
    string id, name;
    Course *courses;
    int num;
public:
    Student(string id, string name) : id(id), name(name), courses(nullptr), num(0) {}

    void enroll(const Course& course) {
        Course *new_courses = new Course[++num];
        // copy courses
        for (int i = 0; i < num-1; i++)
            new_courses[i] = courses[i];
        delete[] courses;
        courses = new_courses;
        courses[num-1] = course;
    }

    void drop(const Course& course) {
        Course *new_courses = new Course[num-1];
        for (int i = 0, j = 0; i < num; i++, j++) {
            if (courses[i].code == course.code) {
                j--;
                continue;
            }
            new_courses[j] = courses[j];
        }
        delete[] courses;
        courses = new_courses;
        --num;
    }

    int getTotalCreditHours() {
        int ch = 0;
        for (int i = 0; i < num; i++) ch += courses[i].hours;
        return ch;
    }

    void printEnrolledCourses() {
        for (int i = 0; i < num; i++) {
            cout << "Course " << i+1 << endl;
            cout << "Code: " << courses[i].code << endl; 
            cout << "Name: " << courses[i].name << endl;
            cout << "Credit Hours: " << courses[i].hours << endl << endl;
        }
    }
};

int main() {
    Course pf("122", "Programming Fundamentals", 3);
    Course icp("223", "idealogy and constitution of pakistan", 2);
    Course ew("398", "Expository Writing", 2);

    Student student("52", "ali");

    student.enroll(pf);
    student.enroll(icp);
    student.enroll(ew);

    student.printEnrolledCourses();
    student.drop(ew);
    cout << "Total Credit Hours: " << student.getTotalCreditHours() << endl;

    cout << endl;
    student.printEnrolledCourses();

    return 0;
}
