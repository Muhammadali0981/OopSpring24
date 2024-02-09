/* Programmer:Muhammad Ali 23K-0052
* Date: 09/02/24
* Descrption:board marker class
*/


#include <iostream>

using namespace std;

class boardmarker
{
private:
	
	string brand;
	string shade;
	bool Refillable;
	bool inkstatus;

public:

	void setbrand(string b){

		brand = b;
	}
	
	string getbrand(){

		return brand;
	}

	void setshade(string s){

		shade = s;
	}
	
	string getshade(){

		return shade;
	}

	void setrefill(bool r){

		Refillable = r;
	}
	
	bool getrefill(){

		return Refillable;
	}

	void setinkstatus(bool i){

		inkstatus = i;
	}

	bool getinkstatus(){

		return inkstatus;
	}
	
	void writingstatus(){

		if (getinkstatus()) cout << "can write" << endl;
		else cout << "cant write" << endl;
	}

	void refillmethod(){

		if (getrefill()) cout << "can refill" << endl;
		else cout << "cant refill" << endl;
	}
};

int main()
{
	boardmarker m;
	string x;
	x = "dollar";
	string y = "blue";

	m.setbrand(x);
	m.setshade(y);
	m.setrefill(true);
	m.setinkstatus(true);

	cout << m.getbrand() << endl;
	cout << m.getshade() << endl;
	cout << m.getrefill() << endl;
	cout << m.getinkstatus() << endl;
	m.writingstatus();
	m.refillmethod();

	return 0;
}
