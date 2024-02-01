/* Programmer:Muhammad Ali 23K-0052
* Date: 01/02/24
* Descrption:product manager 
*/

#include <iostream>

using namespace std;

struct product 
 {
 	int ProductId;
 	string name;
 	float price;
 	int quantity;
 }; 

product findproduct(product *a,int size,string checkid){

	for (int i = 0; i < size; ++i)
	{
		if(a[i].ProductId == checkid) return a[i];
		else cout << "product not found";
	}

}

void addproduct(product *b, int size){

	cout << "enter product id:"<< endl;
	cin >> b[size+1].ProductId;

	cout << "enter product name:"<< endl;
	cin >> b[size+1].name;

	cout << "enter product price:"<< endl;
	cin >> b[size+1].price;

	cout << "enter product quantity:"<< endl;
	cin >> b[size+1].quantity;
}
