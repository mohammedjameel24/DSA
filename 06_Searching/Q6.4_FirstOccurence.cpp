#include <iostream>
using namespace std;

int BinarySearch(int arr[] , int n, int x)
{
	int high = n-1;
	int low = 0;
	while(low <= high)
	{
		int mid = (high + low ) / 2;
		if(arr[mid] > x)
		{
			high = mid - 1;
		}
		else if(arr[mid] < x)
		{
			low = mid + 1;
		}
		else{
			if( mid == 0 || arr[mid-1] != arr[mid]) //this will ensure that the current mid element is not same as previous element & the lower bound is mid which is = first index
			{
				return mid; // this element is first occurence 
			}
			else { //else the current & previous elements are same so move to the left keeping high = {`mid` current element} -1
				high = mid -1;
			}
		}
		/*
		else{
			if( mid == n-1 || arr[mid] != arr[mid+1])
			{
				return mid;
			}
			else {
				low = mid +1;
			}
		}
		*/

	}
	return -1;


}

int main()
{
	int arr[] = {10,10,10,100,100,100,1000,1000,1000,10000};
	int n = sizeof(arr)/sizeof(arr[0]);

	int target = 100;

	cout << BinarySearch(arr, n, target);
}