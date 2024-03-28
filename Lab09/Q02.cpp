/* Programmer:Muhammad Ali 23K-0052
* Date: 28/03/24
* Descrption: geometry 
*/

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

class shape{
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void displaydetails() const = 0;
};

class triangle:public shape
{
private:
    int a;
    int b;
    int c;
public:
    virtual double area() const{
        double s = (a + b + c)/2;
        return sqrt(s(s - a)(s - b)(s - c));    
    }
    virtual double perimeter() const{
        return a + b + c;
    }
    virtual void displaydetails(){
        cout << "Area:" << this->area() << endl;
        cout << "Perimeter:" << this->perimeter() << endl;

    } 

};





