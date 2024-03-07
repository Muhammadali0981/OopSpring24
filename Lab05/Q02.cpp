/* Programmer:Muhammad Ali 23K-0052
* Date: 07/03/24
* Descrption: loan
*/

#include<iostream>


//define a class
class LoanHelper {

    //private data members
    const float interestRate = 0.04;
    int loanTaken;
    int returnInMonths;

    //access modifier
    public:

    //parameterized constructor
    LoanHelper(int loanTaken, int returnInMonths) {

        this->loanTaken = loanTaken;
        this->returnInMonths = returnInMonths;

    }

    //function to calculate loan
    void loanRepayment() {

        //variable to store final loan return per month
        float loanReturn;

        //calculating loan return
        loanReturn = loanTaken / returnInMonths;
        loanReturn = loanReturn + (interestRate * loanReturn);

        //printinf loan
        std::cout<< "Total loan: " << loanTaken <<std::endl;
        std::cout<< "Months to return loan in: " << returnInMonths <<std::endl;
        std::cout<< "you have to pay " << loanReturn << " every month for " << returnInMonths << " months, to repay your loan." <<std::endl;

    }

};//end of class

int main() { //start main

    //instance 1
    LoanHelper loan1(12000, 3);
    loan1.loanRepayment();

    //instance 2
    LoanHelper loan2(450000, 24);
    loan2.loanRepayment();

    return 0;
}//end of main
