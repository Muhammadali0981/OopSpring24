/* Programmer:Muhammad Ali 23K-0052
* Date: 09/02/24
* Descrption:calendar task manager
*/

#include <iostream>

class calendar
{
public:
	std::string jan[31];
	std::string feb[29];
	std::string mar[31];
	std::string apr[30];
	std::string may[31];
	std::string jun[30];
	std::string jul[31];
	std::string aug[31];
	std::string sep[30];
	std::string oct[31];
	std::string nov[30];
	std::string dec[31];
	bool leap;//info about year
};

bool checkleap(x){

	if (x) return true;
	else return false;	

}
void addtask(int date,int month,calendar *a,bool b){
	//checks 
	if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && date > 31) std::cout << "enter valid date" << std::endl;
	if (checkleap(b) && date > 29 && month == 2) std::cout  << "enter valid date" << std::endl;
	if((month == 4 || month == 6 || month == 9 || month == 11) && date > 30) std::cout << "enter valid date" << std::endl;
	if (!checkleap(b) && date > 28 && month == 2) std::cout  << "enter valid date" << std::endl;
	if (date < 1) std::cout  << "enter valid date" << std::endl;

	switch(month){
		case 1:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].jan);
            break;

        case 2:
        	
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].feb);
            break;

        case 3:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].mar);
            break;

        case 4:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].apr);
            break;

        case 5:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].may);
            break;

        case 6:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].jun);
            break;

        case 7:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].jul);
            break;

        case 8:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].aug);
            break;

        case 9:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].sep);
            break;

        case 10:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].oct);
            break;

        case 11:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].nov);
            break;

        case 12:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].dec);
            break;
	}

}

void remove 

int main()
{
	calendar cal;
	return 0;
}
