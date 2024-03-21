/* Programmer:Muhammad Ali 23K-0052
* Date: 20/03/24
* Descrption: Bank account 
*/

#include <iostream>

using namespace std;

class bank_account
{
private:
    int account_id,num_trans;
    double balance;
    int* trans_history;

public:
    bank_account(int id,int num,double bal,int* history) : account_id(id),num_trans(num), balance(bal){
        trans_history = new int[num];
        for (int i = 0; i < num; i++)
        {
            trans_history[i] = history[i];
        }
        
    }
    bank_account(bank_account& b){
        account_id = b.account_id;
        balance = b.balance;
        num_trans = b.num_trans;
        trans_history = new int[num_trans];
         for (int i = 0; i < num_trans; i++)
        {
            trans_history[i] = b.trans_history[i];
        }
    }
    ~bank_account(){
        delete[] trans_history;
    }

    void display(){
        cout << "ID: " << account_id << "\n";
        cout << "Balance: " << balance << "\n";
        cout << "Number of transactions: " << num_trans << "\n";
        for (int i = 0; i < num_trans; i++)
            cout << "Transaction " << i+1 << ":" << trans_history[i] << "\n";
    }

    void updateTransactionHistory(int *t, int count) {
        delete[] trans_history;

        trans_history = new int[count];
        for (int i = 0; i < count; i++)
            trans_history[i] = t[i];
    }
};
int main() {
    int history[5] = {1, 2, 3, 4, 8};

    bank_account account(234, 5,15000.00,history);
    bank_account copy(account);

    cout << "data of account" << "\n";
    account.display();
    cout << "\ndata of copy" << "\n";
    copy.display();
    cout << "\n";

    history[0] = 2;
    account.updateTransactionHistory(history, 5);
    
    cout << "data of account" << "\n";
    account.display();
    cout << "\ndata of copy" << "\n";
    copy.display();

    return 0;
}

