#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(int arr[] , int x, int high , int low)
{
	int mid = (high + low ) / 2;
	while(low <= high)
	{
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
    return mid;

}

int FindNumPos(int arr[], int x)
{
    if(arr[0] == x) return 0;
    int i =1;

    while(arr[i] < x)
    {
        i *= 2;
        
    }
    if(arr[i] != x) return i;
    
    	return BinarySearch(arr, x, i/2 + 1, i -1);
}

int main()
{
    int arr[]= {1,10,15,25,30,55,80,99,130,150};
    int x = 140;

    cout << FindNumPos(arr,x);
}