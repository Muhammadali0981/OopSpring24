/* Programmer:Muhammad Ali 23K-0052
* Date: 15/02/24
* Descrption: Week Days 
*/

#include <iostream>
using namespace std;


class WeekDays
{
private:
    string Days[7];
    int CurrentDay;

public:
   WeekDays(){
    Days[0] = "Sunday";
    Days[1] = "Monday";
    Days[2] = "Tuesday";
    Days[3] = "Wednesday";
    Days[4] = "Thrusday";
    Days[5] = "Friday";
    Days[6] = "Saturday";
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

        if (CurrentDay = 0) return (this->Days[6]);
        else return(this->Days[CurrentDay - 2]);

    }

    string getNthDayFromToday(int N){

        if (N+CurrentDay > 7) return(this->Days[(N+CurrentDay%7) - 1]);
        else return(this->Days[CurrentDay+N - 1]);

    }
};