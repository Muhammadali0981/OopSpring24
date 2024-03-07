/* Programmer:Muhammad Ali 23K-0052
* Date: 07/03/24
* Descrption: stirng
*/
#include<iostream>

class ValidateString{

    std::string inputString;

    //access modifier
    public:

    //parameterized constructor
    ValidateString(std::string String) : inputString(String) {}

    /*constant function to check the validity of string
     *Ques: why do we make a function constant?
     *Ans: This is done because the function only reads the state of the object and does not modify it. 
           Marking it as constant ensures that the function can be called on constant objects, 
           and it helps in expressing the intent that the function doesn't alter the object's state.*/
    void stringValidation() const {

        bool check = true;

        for (char valid: inputString) {
            
            if (!isalpha(valid) && !isspace(valid)) { 
                //if not using the libraray function it could have beendone by 
                //if (!(inputString[i] >= 'a' && inputString[i] <= 'z') && !(inputString[i] >= 'A' && inputString[i] <= 'Z') && (inputString[i] != ' '))
                
                check = false;
               
                break;  // Once an invalid character is found, no need to continue checking
            }
        }       

        //check for validity and output according to it
        if(check) {
            std::cout<< "string is valid\n";
        }

        else {
            std::cout<< "string is not valid\n";
        }

    }

}; //end class

int main() { //start main

    //intance 1
    ValidateString String1("laiba");
    String1.stringValidation();

    //intance 2
    ValidateString String2("my name is laiba");
    String2.stringValidation();

    //intance 3
    ValidateString String3("12jhd.");
    String3.stringValidation();

    //intance 4
    ValidateString String4("_hi");
    String4.stringValidation();

}//end main
