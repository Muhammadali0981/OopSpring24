/* Programmer:Muhammad Ali 23K-0052
* Date: 02/05/24
* Descrption:Pet class
*/

#include <iostream>

using namespace std;

template <typename T>

class pet {
private:

    T name;
    T age;

public:

    pet<T>(T n, T a) : name(n), age(a) {}
    virtual void makeSound() = 0;


    void display(){
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;

    }
};


class cat: public pet<string>{
public:

    cat(string n, string a) : pet<string> (n, a) {}
    void makeSound(){
        cout << "Meow!" << endl;
        
    }

};

class dog: public pet<string>{
public:

    dog(string n, string a) : pet<string>(n, a) {}
    void makeSound(){
        cout << "Woof!" << endl;

    }

};

class bird: public pet<string>{
public:
    bird(string n, string a) : pet<string>(n, a) {}
    void makeSound(){
        cout << "Chrip!" << endl;

    }
};

int main(){
    
    pet<string>* c;
    pet<string>* d;
    pet<string>* b;

    cat x("Tom", "15");
    dog y("Bob", "12");
    bird z("Madame Chika", "18");

    c = &x;
    d = &y;
    b = &z;

    c->display();
    c->makeSound();

    d->display();
    d->makeSound();

    b->display();
    b->makeSound();

    return 0;
}
