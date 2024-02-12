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

//this function is to check for valid date input
bool checksvalid(int d,int m,bool x){

	if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31) return false;
	if (x && d > 29 && m == 2)  return false;
	if((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) return false;
	if (!x && d > 28 && m == 2) return false;	
	if (d < 1) return false;
	else return true;
}


void addtask(int date,int month,calendar *a,bool b){

	//check
	if(!checksvalid(date,month,b)) std::cout << "enter valid date" << std::endl;

	switch(month){
		case 1:
			std::cout << "enter task:"<< std::endl;
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].jan);
            break;

        case 2:
			std::cout << "enter task:"<< std::endl;
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].feb);
            break;

        case 3:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].mar);
            break;

        case 4:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].apr);
            break;

        case 5:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].may);
            break;

        case 6:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].jun);
            break;

        case 7:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].jul);
            break;

        case 8:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].aug);
            break;

        case 9:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].sep);
            break;

        case 10:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].oct);
            break;

        case 11:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].nov);
            break;

        case 12:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a[date].dec);
            break;

        default:
    		std::cout << "Enter valid date" << std::endl;
	}

}

void removetask(int date,int month,calendar *a,bool b){

	//check
	if(!checksvalid(date,month,b)) std::cout << "enter valid date" << std::endl;

	switch(month){
		case 1:
			a[date].jan = "";
            break;

        case 2:
			a[date].feb = "";
            break;

        case 3:
			a[date].mar = "";
            break;

        case 4:
			a[date].apr = "";
            break;

        case 5:
			a[date].apr = "";
            break;

        case 6:
			a[date].jun = "";
            break;

        case 7:
			a[date].jul = "";
            break;

        case 8:
			a[date].aug = "";
            break;

        case 9:
			a[date].sep = "";
            break;

        case 10:
			a[date].oct = "";
            break;

        case 11:
			a[date].nov = "";
            break;

        case 12:
			a[date].oct = "";
            break;

        default:
    		std::cout << "Enter valid date" << std::endl;
	}

}

int main()
{
	calendar cal;
	return 0;
}
