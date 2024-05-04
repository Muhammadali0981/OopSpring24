/* Programmer:Muhammad Ali 23K-0052
* Date: 02/05/24
* Descrption:Time medicos
*/

#include <iostream>

using namespace std;


class medicine{
    private:
    string name, formula, m_date, e_date;
    float price;

    public:

    medicine(string n, string f, string m, string e, float p);

    void setname(string n);
    void setformula(string f);
    void setmdate(string m);
    void setedate(string e);
    void setprice(float f);

    string getname();
    string getformula();
    string getmdate();
    string getedate();
    float getprice();


    bool operator == (const medicine& obj){
        return this->e_date == obj.e_date;
    }

    virtual void print_details() = 0;

};

class tablet: public medicine{
    private:
    bool sucrose_level;

    public:
    tablet(string n, string f, string m, string e, float p, bool sucrose_level);

    void print_details();

};

class capsule: public medicine{
    private:
    int absorption;

    public:
    tablet(string n, string f, string m, string e, float p, int absorption);

    void print_details();

};

class syrup: public medicine{
    
    public:
    tablet(string n, string f, string m, string e, float p);

    void print_details();

};

class pharmacist{
    public:

    void Search_Medicine();
    
};

class counter{
    public:

    void Search_Medicine();
    void Update_Revenue();
};