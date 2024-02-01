#include <iostream>

/* Programmer:Muhammad Ali 23K-0052
* Date: 25/01/24
* Descrption:student registration 
*/

struct Register{

    int CourseId;
    std::string CourseName;

};

struct student:Register{

    int studentId;
    std::string fname, lname, email, cellNo;

};

int main()
{
    student students[2];
    for (int i = 0; i < 2; i++)
    {
       std::cout << "enter student id:" << std::endl;
       std::cin >> students[i].studentId;

       std::cout << "enter student phone number:" << std::endl;
       std::cin >> students[i].cellNo;

       std::cout << "enter first name of student:" << std::endl;
       std::cin >> students[i].fname;

       std::cout << "enter last name of student:" << std::endl;
       std::cin >> students[i].lname;

       std::cout << "enter student email id:" << std::endl;
       std::cin >> students[i].email;


    }
    
    std::cout << "data is as follows" << std::endl;

    for (int i = 0; i < 2; i++)
    {
       std::cout << "data of student" << i+1 << std::endl;
       std::cout << "student id:" << std::endl;
       std::cout << students[i].studentId << std::endl;

       std::cout << "student phone number:" << std::endl;
       std::cout << students[i].cellNo << std::endl;

       std::cout << "first name of student:" << std::endl;
       std::cout << students[i].fname << std::endl;

       std::cout << "last name of student:" << std::endl;
       std::cout << students[i].lname << std::endl;

       std::cout << "student email id:" << std::endl;
       std::cout << students[i].email << std::endl;
    }
    
    return 0;
}
