#include <iostream>

using namespace std;

struct student
{
    int math;
    int eng;
    int sci;
    float total;
    float average;
    char Grade;

};

int main(){

    int n;
    cout << "Enter number of students"<< endl;
    cin >> n;
    student students[n];
    
    for (int i = 0; i < n ; i++)
    {
        cout << "Enter English marks:";
        cin >> students[i].eng;
        cout << "Enter Maths marks:";
        cin >> students[i].math;
        cout << "Enter Scinece marks:";
        cin >> students[i].sci;
        students[i].total = students[i].eng + students[i].math + students[i].sci;
        students[i].average = students[i].total/3;
        
        if (students[i].average >= 90) students[i].Grade = 'A';
        else if (students[i].average > 80) students[i].Grade = 'B';
        else if (students[i].average > 70) students[i].Grade = 'C';
        else if (students[i].average > 60) students[i].Grade = 'D';
        else if (students[i].average <60) students[i].Grade = 'F';
        
        cout << "Student" << i+1 << "result" << endl;
        cout << "English:"<< students[i].eng << endl;
        cout << "Math:"<< students[i].math << endl;
        cout << "Science:"<< students[i].sci << endl;
        cout << "Total:"<< students[i].total << endl;
        cout << "Average:"<< students[i].average << endl;
        cout << "Grade:"<< students[i].Grade << endl;
    }
    
}
