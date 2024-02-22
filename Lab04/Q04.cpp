/* Programmer:Muhammad Ali 23K-0052
* Date: 22/02/24
* Descrption: Office
*/


#include <iostream>

using namespace std;

class Office {
public:
    string Location;
    string Furniture[3] = { "","","" };
    int SeatingCapacity;

    Office(
        string location = "Oslo", int seatingCapacity = 0, string f1= "", string f2="", string f3="") : 
        Location(location), SeatingCapacity(seatingCapacity),Furniture({ f1, f2, f3 }) {}

    void show() {
        cout << "Location: " << Location << endl << "Seating Capacity: " << SeatingCapacity << endl << "Furniture:" << endl;

        for (int i = 0; i < 3; i++)
        {
            if(Furniture[i] !=  "") cout << Furniture[i] << endl;
        }
            
        cout << endl;
    }
};

int main()
{
    Office myoffice;
    Office bigoffice("London", 20, "Chairs", "Sofa", "big desk");
    Office office("Paris", 1, "Table");

    myoffice.show();
    bigoffice.show();
    office.show();

    return 0;
}