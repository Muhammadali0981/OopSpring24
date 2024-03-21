/* Programmer:Muhammad Ali 23K-0052
* Date: 21/03/24
* Descrption: cricket
*/

#include <iostream>

using namespace std;

inline double sr(int runs, int balls) {
    return runs/balls * 100;
}
inline double average(int runs, int outs){
    return runs/outs;
}

int main() {
    int balls, runs, outs;
    cout << "Enter number of balls: ";
    cin >> balls;
    cout << "Enter number of runs: ";
    cin >> runs;
    cout << "Enter number of outs: ";
    cin >> outs;

    cout << "Strike rate: " << sr(runs, balls) << endl;
    cout << "Batting average: " << average(runs, outs) << endl;

    return 0;
}