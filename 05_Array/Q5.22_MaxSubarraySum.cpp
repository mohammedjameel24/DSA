#include <iostream>

using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int res = 0; 
    int globalMax = arr[0]; // global max element 

    for(int i = 0; i < n; i++)
    {
        globalMax = max(globalMax + arr[i],arr[i]); // global max = maximum of (gloabal max + arr[i] , arr[i])
        res = max(res, globalMax); // res = maximum of (res, globalMax)
    }
    return res;
}

int main()
{
    int arr[] = {-3,8,-2,4,-5,6}; // subarray {8,-2,4,-5,6} = 11
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << maxSubarraySum(arr,n); // to find maximum sum for contiguous elements in an array
}