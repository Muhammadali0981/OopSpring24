/* Programmer:Muhammad Ali 23K-0052
* Date: 14/02/24
* Descrption:Smartphone 
*/

#include <iostream>

using namespace std;

class Smartphone {
private:

    string brand, model, resolution;
    int ram, rom, storage;

public:

    void Setbrand(string b){
        brand = b;
    }

    string Getbrand(){
        return brand;
    }
    
    void Setmodel(string m){
        model = m;
    }

    string Getmodel(){
        return model;
    }

    void Setresolution(string r){
        resolution = r;
    }

    string Getresolution(){
        return resolution;
    }

    void Setram(int ra){
        ram = ra;
    }

    int Getram(){
        return ram;
    }

    void Setrom(int ro) {
        rom = ro;
    }

    int Getrom(){
        return rom;
    }

    void Setstorage(int s) {
        storage = s;
    }

    int Getstorage(){
        return storage;
    }

    void call(string contact) {
        cout << "calling " << contact << "........" << endl;
    }

    void message(string message,string contact) {
        cout << "sent message:" << endl;
        cout << message << endl;
        cout << "to " << contact << endl;
    }

    void wifi(string wifi) {
        cout << "connected to " << wifi << endl;
    }

    void internet() {
        cout << "browsing internet" << endl;
    }
};

int main()
{
    Smartphone p1, p2;
    p1.Setbrand("nokia");
    p1.Setmodel("G21");
    p1.Setram(4);
    p1.Setrom(16);
    p1.Setstorage(32);

    p2.Setbrand("Redmi");
    p2.Setmodel("A1+");
    p2.Setram(128);
    p2.Setrom(64);
    p2.Setstorage(123);

    cout << "Trial on Phone 1:" << endl;
    cout << "Brand: " << p1.Getbrand() << endl; 
    cout << "Model: " << p1.Getmodel() << endl; 
    cout << "RAM: " << p1.Getram() << endl; 
    cout << "ROM: " << p1.Getrom() << endl;
    cout << "Storage: " << p1.Getstorage() << endl; 
    p1.call("Friend");
    p1.message("hello i am at home","father");
    p1.wifi("HomeNet");
    p1.internet();

    cout << endl << "Trial on Phone 2:" << endl;
    cout << "Brand: " << p2.Getbrand() << endl; 
    cout << "Model: " << p2.Getmodel() << endl; 
    cout << "RAM: " << p2.Getram() << endl; 
    cout << "ROM: " << p2.Getrom() << endl;
    cout << "Storage: " << p2.Getstorage() << endl; 
    p2.call("Mom");
    p2.message("please send me GCR code","Class CR");
    p2.wifi("UNI WIFI");
    p2.internet();

    return 0;
}