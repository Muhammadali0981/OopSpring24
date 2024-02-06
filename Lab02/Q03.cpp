/* Programmer:Muhammad Ali 23K-0052
* Date: 06/02/24
* Descrption:sreaching if elements of an array add up to a target through recrusive function
*/

#include <iostream>

using namespace std;

bool hasSubsetSum(int arr[], int size, int targetSum) {
  
    if (targetSum == 0)
        return true;
    if (size == 0)
        return false;
    
    //excluding elements graeter than target
    if (arr[size - 1] > targetSum)
        return hasSubsetSum(arr, size - 1, targetSum);
    
    //check two condition using or if either one is true, true is returned
    //the conditions are to check if including the current element leads to the target or not
    return hasSubsetSum(arr, size - 1, targetSum) || hasSubsetSum(arr, size - 1, targetSum - arr[size - 1]);
}

int main() {

    int n;
    int target;
    cout << "enter number of elements of array" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
    	cout << "enter element " << i+1 << endl;
    	cin >> arr[i];
    }
    int size = sizeof(arr);
   
   	cout << "enter target:" << endl;
   	cin >> target; 

    if (hasSubsetSum(arr, size, target))
        cout << "Array has elements adding up to target";
    else
        cout << "Array does not have elements adding up to target";
    return 0;
}
