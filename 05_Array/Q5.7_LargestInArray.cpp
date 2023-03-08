#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
	for (int i = 1; i < n; i++) 
	{
		if (arr[0] < arr[i]) // check whether arr[0] is less than arr[1] to arr[n]
		{
			arr[0] = arr[i]; // if so move current index value to arr[0]
		}
	}
	return arr[0];
}
/*
To find the largest element,

the first two elements of array are checked and the largest of these two elements are placed in arr[0]
the first and third elements are checked and largest of these two elements is placed in arr[0].
this process continues until the first and last elements are checked
the largest number will be stored in the arr[0] position
*/


int main()
{
	int arr[] = {10, 324, 45, 900, 8};// {324,10,45,900,8 // 324,10,45,900,8 // 900,10,45,900,8 // 900,10,45,900,8}
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Largest in given array is "
		<< largest(arr, n);
	return 0;
}

        