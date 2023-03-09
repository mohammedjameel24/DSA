#include <iostream>
using namespace std;

int BinarySearch(int arr[] , int n, int x)
{
	int high = n-1;
	int low = 0;
	while(low <= high)
	{
		int mid = (high + low ) / 2;
		if(arr[mid] == x)
		{
			return mid;
		}
		else if(arr[mid] > x)
		{
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}

	}
	return -1;


}

int main()
{
	int arr[] = {11,33,45,89,111,124};
	int n = sizeof(arr)/sizeof(arr[0]);

	int target = 35;

	cout << BinarySearch(arr, n, target);
}