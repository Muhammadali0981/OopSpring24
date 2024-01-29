/* Programmer:Muhammad Ali 23K-0052
* Date: 25/01/24
* Descrption:checking which elements of a given array add up to a certain target 
*/

#include <iostream>

int main()
{
	int n,x,index_one,index_two;
	std::cout << "enter array size:";
	std::cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; ++i)
	 {
	 	std::cout << "enter element " << i+1 << ":";
	 	std::cin >> arr[i];

	 } 

	std::cout << "enter target:" << std::endl;
	std::cin >> x;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i == j) continue;
			if(arr[i]+arr[j] == x)
			{
				index_one = i;
				index_two = j;

			}

		}
	}
	std::cout << "(" << std::min(index_one,index_two) << "," << std::max(index_one,index_two) << ")";

	return 0;
}
