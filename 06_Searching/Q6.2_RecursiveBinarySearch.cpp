#include <iostream>

using namespace std;

int RecursiveBinarySearch(int arr[], int low, int high, int x)
{
    if(low > high)
    {
        return -1;
    }
    int mid = (low + high)/2;

    if(arr[mid] == x) return mid;
    else if(arr[mid] > x)
    {
        return RecursiveBinarySearch(arr,low, mid-1, x);
        //high = mid - 1;
    }
    else{
        return RecursiveBinarySearch(arr,mid+1,high, x);
        //low = mid + 1;
    }
}

int main()
{
    int arr[] = {11,33,45,89,111,124};
	int n = sizeof(arr)/sizeof(arr[0]);

	int target = 33;
    int low = 0;
    int high = n -1;


cout << RecursiveBinarySearch(arr, low,high,target); // O(logn);
}