/* Programmer:Muhammad Ali 23K-0052
* Date: 26/02/24
* Descrption:Dahba seating
*/

#include <iostream>

using namespace std;

class table
{
private:
    int seats;
    int occupied_seats;
    int free_seats;
    bool clean;

public:
    table():seats(4), occupied_seats(0), free_seats(4), clean(1){};
    // Parameterized constructor
	table(int seats) {
		// When parameter seats is not 4 or 8
		if (seats != 4 || seats != 8) {
			
			if (abs(8 - seats) < abs(4 - seats)) {
                seats = 8;
            } 
            else {
                seats = 4;
            }
		}
		this->seats = seats;
		this->occupied_seats= 0;
		this->clean = 1;
		this->free_seats = seats;
	}
    void setfree(int n){
        this->free_seats = n;
    }
    void setOccupied(int x){
        this->occupied_seats = x;
    }
    int getcapacity(){
        return seats; 
    }
    int getOccupied(){
        return occupied_seats;
    }
	bool getClean(){
        return clean; 
    }

	int getFree(){
        return free_seats;
    }

	void eatLunch() {
        clean = false; 
    }

	void cleanTable(){
        clean = true;
    }

    void useTable(){
        cout << "this table is in use" << endl;
        free_seats = 0;
    }

    void leaveTable(){
        
        free_seats = this->seats;
    }

    
};

//global functions
void OccupyTable(table *data, int people){
    
    for(int i = 0; i < 5; i++){
        if( (data[i].getcapacity() >= people) && (data[i].getClean() == true) && (data[i].getOccupied() == 0)){
            cout << "You have been given table " << i+1 << " with capacity:" << data[i].getcapacity() << endl;
            data[i].setfree(data[i].getcapacity() - people);
            data[i].setOccupied(people);
            break;
        }
    }
    
}

void EmptyTable(table *data, int number){

    data[number-1].setfree(data[number-1].getcapacity());
    data[number-1].cleanTable();
    data[number-1].setOccupied(0);
    cout << "table now made empty" << endl;
}

int main()
{
    cout << "Name: Muhammad Ali" << endl << "ID: 23K-0052" << endl;

	
	table data[5];
	data[0] = table(4);
	data[1] = table(8);
	data[2] = table(8);
	data[3] = table(4);
	data[4] = table(4);

    OccupyTable(data, 4);
    OccupyTable(data, 6);

    data[0].useTable();
    data[0].eatLunch();
    data[0].leaveTable();
    data[0].cleanTable();

    EmptyTable(data, 2);


    return 0;
}
