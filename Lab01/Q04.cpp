/* Programmer:Muhammad Ali 23K-0052
* Date: 29/01/24
* Descrption:checking max area in an area if elements are assumed to be heights
*/

#include <iostream>
#include <math.h>

int FindMaxArea(int *arr, int size)
{
	int MaxArea=0;

	for (int i = 0; i < size ; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if(i == j) continue;

			MaxArea = std::max(MaxArea, (abs(i - j) * std::min(arr[i], arr[j])));
		}
	}
	return MaxArea;
}

int main()
{
	int n;
	std::cout << "enter array size:";
	std::cin >> n;
	int* numbers = new int[n];

	for (int i = 0; i < n; ++i)
	 {
	 	std::cout << "enter element " << i+1 << ":";
	 	std::cin >> numbers[i];

	 } 
	 std::cout << "Max Area is:" << FindMaxArea(numbers, n) << std::endl; 
	return 0;
}
