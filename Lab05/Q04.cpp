/* Programmer:Muhammad Ali 23K-0052
* Date: 22/02/24
* Descrption: Bank Account details
*/

#include <iostream>

using namespace std;

class BankAccount
{
private:
    int AccountNum;
    string AccountHolderName;
    double balance;
    
public:
    BankAccount(int a = 0, string b = "no name", double c = 0.00){
        this->AccountNum = a;
        this->AccountHolderName = b;
        this->balance = c;

    }

    void deposit(double amount){

        this->balance += amount;
        cout << "deposited" << endl;
    }

    void withdraw(double amount){
        if (this->balance < amount) cout << "Not enough funds" << endl;
        else this->balance -= amount;
    }

    void display(){

        cout << "Holder Name:" << this->AccountHolderName << endl;
        cout << "Account ID:" << this->AccountNum << endl;
        cout << "Balance:" << this->balance << endl << endl;
    }

};

int main(){
    
    BankAccount accounts[3];
    accounts[0] = {123,"Abser Mansoor", 2000.00};
    accounts[1] = {1234,"Muhammad Fasih hassan", 1000.00};
    accounts[2] = {123,"Muhammad Owais", 800.00};

    for (int i = 0; i < 3; i++) accounts[i].display();
    
    accounts[0].withdraw(500);
    accounts[0].deposit(200);
    accounts[0].display();
    
}
