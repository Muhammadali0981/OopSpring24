/* Programmer:Muhammad Ali 23K-0052
* Date: 01/02/24
* Descrption:product manager 
*/

#include <iostream>
#include <iomanip>

using namespace std;
#define Max 100 //defining for max size

//Making structure for product
struct product 
 {
 	string ProductId;
 	string name;
 	float price;
 	int quantity;
 }; 


//This function is for my own convenience
product* findproduct(product *a,int size,string checkid){

	for (int i = 0; i < size; ++i)
	{
		if(a[i].ProductId == checkid){
			return &a[i];//returning data so that i can use it in other functions
		}
			
	}
	return nullptr;
	//if the product is not found it returns a null pointer
}


void printsinfo(product *x,int size,string checkid){

	//checks value
	bool check = 0;
	int y = 0;
	for (int i = 0; i < size; ++i)
	{
		if(x[i].ProductId == checkid){
			check = 1;
			y = i;
		}
		
	}
	
	if (check){

		cout << "Product id:" << endl;
		cout << x[y].ProductId << endl;

		cout << "Product name:" << endl;
		cout << x[y].name << endl;
		
		cout << "Product price:" << endl;
		cout << fixed << setprecision(2) << x[y].price << endl;//this is used to print price in currency format

		cout << "Product quantity:" << endl;
		cout << x[y].quantity << endl;

	}
	else cout << "product not found" << endl;
}	


void addproduct(product *b, int size){

	cout << "enter product id:"<< endl; 
	cin.ignore();//this is used to remove endl form the input buffer
	getline(cin, b[size].ProductId);

	cout << "enter product name:"<< endl;

	getline(cin, b[size].name);

	cout << "enter product price:"<< endl;
	cin >> b[size].price;
	cin.ignore();

	cout << "enter product quantity:"<< endl;
	cin >> b[size].quantity;
	cin.ignore();
}


void update(product *c, int size, string id){

	if (findproduct(c, size, id) != nullptr){//if a null pointer is not return the update happens

	cout << "product id:" << endl;
	cout << findproduct(c, size, id)->ProductId;
	cout << endl << "Enter new data:" << endl;

	//arrows are used to access pointer
	cout << "enter product id:"<< endl;
	cin.ignore();
	getline(cin,findproduct(c, size, id)->ProductId);
	
	cout << "enter product name:"<< endl;
	cin.ignore();
	getline(cin,findproduct(c, size, id)->name);

	cout << "enter product price:"<< endl;
	cin >> findproduct(c, size, id)->price;
	cin.ignore();

	cout << "enter product quantity:"<< endl;
	cin >> findproduct(c, size, id)->quantity;
	cin.ignore();

	}
	else cout <<  "product not found" << endl;
}

int main()
{
	int choice = 0; 
	int num;
	string id;
	product data[Max];
	num = 0;
	//simple UI
	while (choice != 4)
	{
		cout << "Welcome to Product managemnet system" << endl << "Enter choice:" << endl;
		cout << "1.Add Product" << endl << "2.Search for Product" << endl << "3.Update Product Data" << endl << "4.Exit" << endl;
		cin >> choice;


		switch (choice)
		{
		case 1:
			addproduct(data, num);
			num++;
			break;

		case 2:
			cout << "enter id of the product you wish to look for:" << endl;
			cin.ignore();
			getline(cin, id);
			
			printsinfo(data,num,id);
			break;

		case 3: 
			cout << "enter id of the product you wish to update:" << endl;
			cin.ignore();
			getline(cin ,id);

			update(data,num,id);
			break;

		default:
			break;
		}
	} 
	
	return 0;
}
