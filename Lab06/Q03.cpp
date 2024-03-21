/* Programmer:Muhammad Ali 23K-0052
* Date: 21/03/24
* Descrption: appointment manager
*/

#include <iostream>

using namespace std;

class Appointment {
private:
    int time;
    double cost;
public:
    static int appointments;
    static double total;

    Appointment(double cost, int time) : cost(cost), time(time) {
        Appointment::total += cost;
        Appointment::appointments++;
    }

    double getCost(){ 
        return cost;
    }
    double getTime(){
        return time;
    }

    static double getAverageCost(){
        return Appointment::total/Appointment::appointments; 
    }
};

double Appointment::total = 0.f;
int Appointment::appointments = 0;

int main(){
    Appointment first(85, 3);
    cout << first.getTime() << "PM" << endl << "$" << first.getCost() << endl << endl;
    Appointment second(90, 8);
    cout << second.getTime() << "AM" << endl << "$" << second.getCost() << endl << endl;
    Appointment third(35, 5);
    cout << third.getTime() << "PM" << endl << "$" << third.getCost() << endl << endl;
    Appointment fourth(190, 7);
    cout << fourth.getTime() << "AM" << endl << "$" << fourth.getCost() << endl << endl;

    cout << "Average:" << Appointment::getAverageCost() << endl;

    return 0;
}