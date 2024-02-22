/* Programmer:Muhammad Ali 23K-0052
* Date: 14/02/24
* Descrption:Smartphone 
*/

#include <iostream>

#define MAX 100

using namespace std;

class StationaryShop {
private:
    string items[MAX];
    float prices[MAX];
    int count = 0;
public:
    void Additem(string item, float price) {
        items[count] = item;
        prices[count] = price;
        cout << count << endl;
    }

    string Getitem(string item) {
        for (int i = 0; i < count; i++)
        {
            if (items[i] == item){
                return items[i];
            }
        }
    
    }

    float Getprice(string item) {
            for (int i = 0; i < count; i++)
        {
            if (items[i] == item){
                return prices[i];
            }
        }
    }


    void Modifyprice(int newprice, string item) {
        for (int i = 0; i < count; i++)
        {
            if(items[i] == item){
                prices[i] = newprice;
            }
        }
        
    }

    void display() {
        cout << "ITEMS" << ": "<< "PRICES" << endl;
        for (int i = 0; i < count; i++) {
             cout << items[i] << ": " << prices[i] << endl;
        }
       
    }
};


void Inputitem(StationaryShop &data) {
    string i;
    float p;

    cout << "Enter item name= ";
    cin >> i;
    cout << "Enter item price= ";
    cin >> p;

    data.Additem(i, p);
}

void Changeprice(StationaryShop &data) {
    string i;
    float p;

    cout << "Enter item name: ";
    cin >> i;
    cout << "Enter new item price: ";
    cin >> p;

    data.Modifyprice(p, i);
}

void buy(string items[MAX], float prices[MAX], int &c, StationaryShop &data) {
    string item;

    cout << "Enter item to buy: ";
    cin >> item;

    items[c] = data.Getitem(item);
    prices[c] = data.Getprice(item);
    c++;
}

float sum(float arr[MAX], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];//for bill
    return sum;
}

void receipt(string items[MAX], float prices[MAX], int c) {
    for (int i = 0; i < c; i++) cout << items[i] << ": " << prices[i] << endl;
    cout << "Total: " << sum(prices, c);
}

int main()
{
    StationaryShop data;
    string Billitems[MAX];
    float Billprices[MAX];
    int count = 0;
    int choice = 0; 
    
    while(choice != 6) {
        cout << "Enter choice:" << endl << "1. Add shop item" << endl<< "2. Change item price" << endl<< "3. Display items" << endl<< "4. Buy items" << endl<< "5. Print receipt" << endl<< "6. Exit" << endl;
        
        cin >> choice;

        switch(choice) {
            case 1:
                Inputitem(data);
                break;
            case 2:
                Changeprice(data);
                break;
            case 3:
                data.display();
                break;
            case 4:
                cout << "enter numbers of i tems you want to buy:" << endl;
                int x;
                cin >> x;

                for (int i = 0; i < x; i++)
                {
                    buy(Billitems, Billprices, count, data);
                }
                 
                break;
            case 5:
                receipt(Billitems, Billprices, count);
                break;
            default:
                break;
        }
    }

    return 0;
}