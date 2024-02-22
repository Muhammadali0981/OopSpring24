/* Programmer:Muhammad Ali 23K-0052
* Date: 22/02/24
* Descrption: Improved Office
*/

#include<iostream>

using namespace std;

class Office {
    
    string location;
    string* furniture;
    int SeatingCapacity;
   

public:

    // Parameterized constructor
    Office(string L, int Cap, int s) : location(L), SeatingCapacity(Cap), furniture(new string[s]) {}

    // Destructor to deallocate memory
    ~Office() {
        delete[] furniture; 
        cout << "deleted successfully";
    }
    
}; //end of class

int main() {
    
  
    Office *myoffice = new Office("London", 15, 10);
    delete myoffice;

    return 0;
}