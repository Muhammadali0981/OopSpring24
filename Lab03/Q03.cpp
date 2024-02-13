/* Programmer:Muhammad Ali 23K-0052
* Date: 09/02/24
* Descrption:calendar task manager
*/

#include <iostream>
#include <string>
using namespace std;
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


void addtask(int date,int month,calendar &a,bool b){

	//check
	if(!checksvalid(date,month,b)) std::cout << "enter valid date" << std::endl;
    //using switch case
	switch(month){
		case 1:
			std::cout << "enter task:"<< std::endl;
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a.jan[date-1]);
            break;

        case 2:
			std::cout << "enter task:"<< std::endl;
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a.feb[date-1]);
            break;

        case 3:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a.mar[date-1]);
            break;

        case 4:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a.mar[date-1]);
            break;

        case 5:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a.apr[date-1]);
            break;

        case 6:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a.jun[date-1]);
            break;

        case 7:
			cout << "enter task:"<< endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a.jul[date-1]);
            break;

        case 8:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a.aug[date-1]);
            break;

        case 9:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a.sep[date-1]);
            break;

        case 10:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a.oct[date-1]);
            break;

        case 11:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a.nov[date-1]);
            break;

        case 12:
			std::cout << "enter task:"<< std::endl; 
            cin.ignore();//this is used to remove endl form the input buffer
            getline(cin, a.dec[date-1]);
            break;

        default:
    		std::cout << "Enter valid date" << std::endl;
	}

}

void removetask(int date,int month,calendar &a,bool b){

	//check
	if(!checksvalid(date,month,b)) std::cout << "enter valid date" << std::endl;
    //switch case for all months
	switch(month){
		case 1:
			a.jan[date-1] = "";
            break;

        case 2:
			a.feb[date-1] = "";
            break;

        case 3:
			a.mar[date-1] = "";
            break;

        case 4:
			a.apr[date-1] = "";
            break;

        case 5:
			a.apr[date-1] = "";
            break;

        case 6:
			a.jun[date-1] = "";
            break;

        case 7:
			a.jul[date-1] = "";
            break;

        case 8:
			a.aug[date-1] = "";
            break;

        case 9:
			a.sep[date-1] = "";
            break;

        case 10:
			a.oct[date-1] = "";
            break;

        case 11:
			a.nov[date-1] = "";
            break;

        case 12:
			a.oct[date-1] = "";
            break;

        default:
    		std::cout << "Enter valid date" << std::endl;
	}

}

void displaytasks(calendar a){

    int c = 0;//a variable to keep track of task 

    //for loops for all months
    cout << "Tasks in January" << endl;
    for (int i = 0; i < 31; i++)
    {
        if(!(a.jan[i] == "")){

        cout << "task on " << i + 1 << "/01 " << endl << a.jan[i] << endl;
        c++;

        }
    }
    if (c == 0){

        cout << "no tasks" << endl;
    }
    c = 0;

    cout << "Tasks in February" << endl;
    for (int i = 0; i < 29; i++)
    {
        if(!(a.feb[i] == "")){

        cout << "task on " << i + 1 << "/02 " << endl << a.feb[i] << endl;
        c++;

        }
    }
    if (c == 0){

        cout << "no tasks" << endl;
    }
    c = 0;

    cout << "Tasks in March" << endl;
    for (int i = 0; i < 31; i++)
    {
        if(!(a.mar[i] == "")){

        cout << "task on " << i + 1 << "/03 " << endl << a.mar[i] << endl;
        c++;

        }
    }
    if (c == 0){

        cout << "no tasks" << endl;
    }
    c = 0;

    cout << "Tasks in April" << endl;
    for (int i = 0; i < 30; i++)
    {
        if(!(a.apr[i] == "")){

        cout << "task on " << i + 1 << "/04 " << endl << a.apr[i] << endl;
        c++;

        }
    }
    if (c == 0){

        cout << "no tasks" << endl;
    }
    c = 0;

    cout << "Tasks in May" << endl;
    for (int i = 0; i < 31; i++)
    {
        if(!(a.may[i] == "")){

        cout << "task on " << i + 1 << "/05 " << endl << a.may[i] << endl;
        c++;

        }
    }
    if (c == 0){

        cout << "no tasks" << endl;
    }
    c = 0;

    cout << "Tasks in June" << endl;
    for (int i = 0; i < 30; i++)
    {
        if(!(a.jun[i] == "")){

        cout << "task on " << i + 1 << "/06 " << endl << a.jun[i] << endl;
        c++;

        }
    }
    if (c == 0){

        cout << "no tasks" << endl;
    }
    c = 0;

    cout << "Tasks in July" << endl;
    for (int i = 0; i < 31; i++)
    {
        if(!(a.jul[i] == "")){

        cout << "task on " << i + 1 << "/07 " << endl << a.jul[i] << endl;
        c++;

        }
    }
    if (c == 0){

        cout << "no tasks" << endl;
    }
    c = 0;

    cout << "Tasks in August" << endl;
    for (int i = 0; i < 31; i++)
    {
        if(!(a.aug[i] == "")){

        cout << "task on " << i + 1 << "/08 " << endl << a.aug[i] << endl;
        c++;

        }
    }
    if (c == 0){

        cout << "no tasks" << endl;
    }
    c = 0;

    cout << "Tasks in September" << endl;
    for (int i = 0; i < 30; i++)
    {
        if(!(a.sep[i] == "")){

        cout << "task on " << i + 1 << "/09 " << endl << a.sep[i] << endl;
        c++;

        }
    }
    if (c == 0){

        cout << "no tasks" << endl;
    }
    c = 0;

    cout << "Tasks in October" << endl;
    for (int i = 0; i < 31; i++)
    {
        if(!(a.oct[i] == "")){

        cout << "task on " << i + 1 << "/10 " << endl << a.oct[i] << endl;
        c++;

        }
    }
    if (c == 0){

        cout << "no tasks" << endl;
    }
    c = 0;

    cout << "Tasks in November" << endl;
    for (int i = 0; i < 30; i++)
    {
        if(!(a.nov[i] == "")){

        cout << "task on " << i + 1 << "/11 " << endl << a.nov[i] << endl;
        c++;

        }
    }
    if (c == 0){

        cout << "no tasks" << endl;
    }
    c = 0;

    cout << "Tasks in December" << endl;
    for (int i = 0; i < 31; i++)
    {
        if(!(a.dec[i] == "")){

        cout << "task on " << i + 1 << "/12 " << endl << a.dec[i] << endl;
        c++;

        }
    }
    if (c == 0){

        cout << "no tasks" << endl;
    }
    c = 0;
}

int main()
{
	calendar cal;
    int choice,date,month;
    bool l;
    cout << "is current year leap press 1 for yes 0 for no" << endl;
    cin >> l;
    while (choice != 4)
	{   
        //build simple ui
		cout << "Welcome to Task Manager" << endl << "Enter choice:" << endl;
		cout << "1.Add Task" << endl << "2.Remove Task" << endl << "3.Display Task" << endl << "4.Exit" << endl;
		cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "enter month of task 1 for january, 2 for feb....and so on" << endl;
            cin >> month;
            cout << "enter day of task" << endl;
            cin >> date;
            addtask(date, month, cal,l);
            break;

        case 2:
            cout << "enter month of task to remove 1 for january, 2 for feb....and so on" << endl;
            cin >> month;
            cout << "enter day of task to remove" << endl;
            cin >> date;
            removetask(date, month, cal,l);
            break;

        case 3:
            displaytasks(cal);
            break;    
        default:
            break;
        }
    }
	return 0;
}
