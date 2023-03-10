// Simple C++ program to find k'th smallest element
#include <algorithm>
#include <iostream>
using namespace std;

// Function to return k'th smallest element in a given array
int kthSmallest(int arr[], int n, int k)
{
	// Sort the given array
	sort(arr, arr + n);
	return arr[k - 1];
}
int mthLargest(int arr[], int n, int m)
{
    // Sort the given array arr in reverse
    // order.
    sort(arr, arr + n, greater<int>());
 
    // Print the first kth largest elements
    // for (int i = 0; i < k; i++)
    //     cout << arr[i] << " ";
    return arr[m - 1];
}

// Driver program to test above methods
int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int n = sizeof(arr) / sizeof(arr[0]),
    k = 1,
    m = 1;
	cout << "K'th smallest element is " << kthSmallest(arr, n, k) << endl ;
    cout << "K'th smallest element is " << mthLargest(arr, n, m) << endl ;
	return 0;
}
