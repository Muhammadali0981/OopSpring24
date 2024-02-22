/* Programmer:Muhammad Ali 23K-0052
* Date: 15/02/24
* Descrption: Week Days 
*/

#include <iostream>
using namespace std;


class WeekDays
{
private:
    string Days[7]= {"Sunday","Monday","Tuesday", "Wednesday","Thrusday","Friday","Saturday"};
    int CurrentDay;

public:
   //intialization is not possible here since parametrized constructors need to have days as input 
   WeekDays(){

   }

    WeekDays(int num){
        if (num > 6) num = 6%7;
        CurrentDay = num;

    }

    string getCurrentDay(){

        return(this->Days[CurrentDay-1]);

    }

    string getNextDay(){

        return(this->Days[CurrentDay]);

    }

    string getPreviousDay(){

        if (CurrentDay == 0) return (this->Days[6]);
        return(this->Days[CurrentDay - 2]);

    }

    string getNthDayFromToday(int N){

        if ((N+CurrentDay) > 7) return(Days[((N+CurrentDay)%7) - 1]);
        return(Days[(CurrentDay+N)- 1]);

    }
};

int main(){

    WeekDays days(7);
    cout << "Current Day:" << days.getCurrentDay() << endl;
    cout << "Next Day:" << days.getNextDay() << endl;
    cout << "Previous Day:" << days.getPreviousDay() << endl;
    cout << "Nth Day from today:" << days.getNthDayFromToday(3) << endl;
}