#include <iostream>

using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int res = 0;
    int maxEnding = arr[0];

    for(int i =0; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i],arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int main()
{
    int arr[] = {-3,8,-2,4,-5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << maxSubarraySum(arr,n);
}