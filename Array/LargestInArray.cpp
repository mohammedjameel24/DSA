// C++ program to find maximum
// in arr[] of size n
#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		bool flag = true;
		for(int j = 0; j < n; j++)
		{
			if(arr[j] > arr[i])
			{
				flag = false;
				break;
			}
		}
		if(flag == true)
		{
			return i;
		}
	}
	return -1;
}

// Driver Code
int main()
{
	int arr[] = {10, 324, 45, 90, 8};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Largest in given array is "
		<< largest(arr, n);
	return 0;
}

        