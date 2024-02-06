/* Programmer:Muhammad Ali 23K-0052
* Date: 06/02/24
* Descrption:recursive swaping
*/

#include <iostream>

using namespace std;

void recursiveSwap(int *a, int *b, int c){

    if (c){//if c is zero the if condition will return zero hence the recursive stack will close
    //using XOR swap
    *a ^= *b;

    return recursiveSwap(b, a, c-1);
    }

}

int main(){

    int a;
    int b;

    cout << "enter a number 'a'" << endl;
    cin >> a;
    cout << "enter second number 'b'" << endl;
    cin >> b;
    cout << "BEFORE SWAP:" << endl;
    cout << "a=" << a << " " << "b=" << b << endl;
    //calling function
    recursiveSwap(&a ,&b, 3);

    cout << "AFTER SWAP:" << endl;
    cout << "a=" << a << " " << "b=" << b << endl;

return 0;

}