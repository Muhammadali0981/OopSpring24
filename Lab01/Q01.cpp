#include <iostream>
using namespace std;

int main(){

    int num;
    int count;
    cout << "Enter a Number"<< endl;
    cin >> num;
    count = 0;
    for (int i = 2; i*i <= num ; i++)
    {
        if( num%i == 0 ) count++;
    }
    if (count>2) cout << "not prime";
    else cout << "prime";
}
