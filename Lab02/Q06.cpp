/* Programmer:Muhammad Ali 23K-0052
* Date: 06/02/24
* Descrption:lcm and gcd through recrusions
*/


#include <iostream>

using namespace std;

int calculateGCD(int a, int b, int maxnum) {

    if (maxnum == 0) {

        return 1;
    } 
    else {

        if (a % maxnum == 0 && b % maxnum == 0) {

            return maxnum; //if mod is zero maxnum is a factor/divisor
        } 
        else {
            return calculateGCD(a, b, maxnum - 1); //factor are always lower than a number hence maxnum - 1
        }

    }
}


int calculateLCM(int a, int b, int maxnum) {

    if (maxnum % a == 0 && maxnum % b == 0){

        return maxnum; //if mod is zero maxnum is a multiple
    } 

    else {
        return calculateLCM(a, b, maxnum + 1); // this will increase the value until a multiple is found
    }
}

int main() {
  	
  	int a,b;
  	cout << "enter a:" << endl;
  	cin >> a;
  	cout << "enter b:" << endl;
  	cin >> b;

    cout << "GCD = " << calculateGCD(a, b, max(a,b)) << endl;
    cout << "LCM = " << calculateLCM(a, b, max(a,b)) << endl;

    return 0;
}