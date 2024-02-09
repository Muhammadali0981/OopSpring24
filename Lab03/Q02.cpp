/* Programmer:Muhammad Ali 23K-0052
* Date: 09/02/24
* Descrption:water bottle class
*/


#include <iostream>

using namespace std;

class WaterBottle;
{
private:
	
	string company;
	string colour;
	int capacity;

public:

	void setcompany(string b){

		company = b;
	}
	
	string getcompany(){

		return company;
	}

	void setcolour(string s){

		colour = s;
	}
	
	string getcolour(){

		return colour;
	}

	void setcapacity(int r){

		capacity = r;
	}
	
	int getcapacity(){

		return capacity;
	}

	
	int UpdatedCapcity(int c){

		c = c/1000; 
		capacity  = capacity - c;

		cout << capacity;

	}

	
};

int main()
{
	WaterBottle w;
	string x;
	x = "nike";
	string y = "blue";
	int a;

	w.setcompany(x);
	w.setcolour(y);
	w.setcapacity(1000);

	cout << w.getcompany() << endl;
	cout << w.getcolour() << endl;
	cout << w.getcapacity() << endl;
	cout << "enter water consumed" << endl;
	cin >> a;
	w.UpdatedCapcity(a);
	return 0;
}
