/* Programmer:Muhammad Ali 23K-0052
* Date: 26/02/24
* Descrption:roller coaster
*/

#include <iostream>
#include <vector>
using namespace std;


class restaurant
{
public:

    string restaurant_name;
    string location;
    vector<float> price;
    vector<string> menu;
    vector<string> valid_coupon_codes_list;
    static int coupons_redeemed_count;
    //thses memebers are for the bill
    vector<int> bill; 
    float total;

    restaurant(string name, string location, vector<string> menu, vector<string> valid_coupon_codes_list, vector<float> price) 
    : restaurant_name(name), location(location), menu(menu),valid_coupon_codes_list(valid_coupon_codes_list), price(price), total(0)  {}


   void display_menu() {
        cout << "Items" << " " << "Price" << endl;
        for (int i = 0; i < menu.size(); i++)
            cout << menu[i] << " " << price[i] << endl; 
    }

    void generate_bill() {
        cout << "Bill" << endl;
        cout << "Items" << " " << "Price" << endl;
        for (int i : bill) {
            cout  << i  <<  menu[i] << " " << price[i] << endl;
            total += price[i];
        }

        cout << "Total: Rs." << total << endl;
    }

    void apply_discount() {
        int num = 0;
        for (int i : bill) {
            for (int j : bill)
                if (i == j) num++;

            if (num >= 2) {
                //since big one get one free we subract using mutiplies of 2 if 3 items then price od one is removedd
                int x = num/2;
                cout << "Discounted: $" << total - (x*price[i]) << endl;
                return;
            }
        }
    }


};

int restaurant::coupons_redeemed_count = 0;//static intialization

class BOGOCoupon
{
private:
    string coupon_code;
    int valid_from, valid_until;
    string restaurant_code;

public:
    BOGOCoupon(string coup_code, int from, int until)
    : coupon_code(coup_code),  valid_until(until), valid_from(from) {}

    bool is_valid(BOGOCoupon coupon,restaurant rest){

        for(int i = 0; i <= (rest.valid_coupon_codes_list).size(); i++){
            if((rest.valid_coupon_codes_list[i] == coupon.coupon_code) && (coupon.valid_from > 2020) && (coupon.valid_until <= 2025))return true;

        }
    return false;
    }
};

class User 
{
private:

    string name, mobile_number;
    int age;
    vector<BOGOCoupon> accumulated_coupons, redeemed_coupons;
    

public:
    User(string name, string phone, int age) : name(name), mobile_number(phone), age(age) {}

    void accumulate_coupon(BOGOCoupon coupon) { accumulated_coupons.push_back(coupon); }

    bool Has_valid_coupon(restaurant r){
        for(int i = 0; i <= (accumulated_coupons).size(); i++){
            if(accumulated_coupons[i].is_valid(accumulated_coupons[i],r)) return true;
        }
    return false;
    }

    bool redeem_coupon(BOGOCoupon c,restaurant x){
        if (c.is_valid(c,x)) return true;
        return false;
    }

    void buyitem(restaurant r, int items){
        int x = 0;
        cout << "enter index of item you wish to buy:" << endl;
        for(int i = 0; i <= items; i++){
            
            cin >> x;
            r.bill.push_back(x);
        }
        
    }
};

int main()
{
    cout << "Name: Muhammad Ali" << endl << "ID: 23K-0052" << endl;
    restaurant foodhaven("Food Haven","City Center",{ "Sushi", "Pad Thai", "Mango Tango" },{"FH-BOGO-12345","FH-BOGO-98765","FH-BOGO-986545"}, { 1500, 960, 360 });
    restaurant pixelbits("Pixel Bites", "Cyber Street", { "Binary Burger", "Quantum Quinoa", "Data Donuts" },{"PB-BOGO67890","PB-BOGO98765","PB-BOGO-986545"}, { 900, 1000, 650 });
    User Ali("Ali","03303715814", 18);
    //showing menu
    cout << "menu of food haven:" << endl;
    foodhaven.display_menu();
    cout << endl;
    cout << "menu of pixel bites:" << endl;
    pixelbits.display_menu();

    Ali.buyitem(foodhaven, 5);
    BOGOCoupon c("FH-BOGO-12345",2021,2024);
    Ali.accumulate_coupon(c);
    Ali.redeem_coupon(c,foodhaven);
    cout << "before discount:" << endl;
    foodhaven.generate_bill();
    cout << "after discount:" << endl;
    foodhaven.apply_discount();
    foodhaven.generate_bill();
    return 0;

}






