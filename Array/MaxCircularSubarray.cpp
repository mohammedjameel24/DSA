#include <iostream>
using namespace std;


int maxCircularSubarray(int arr[], int n)
{
    int res = arr[0] ;
    for(int i = 0 ; i < n; i++)
    {
        int currentMax = arr[i];
        int currentSum = arr[i];
        for(int j = 1; j < n; j++)
        {
            int index = (i+j) % n; cout<<arr[index]<<" "; //all combinations of indeces to calculate subarrays
            currentSum += arr[index]; // 5 -> 3 -> 6 -> 10
            currentMax = max(currentMax,currentSum); // current max will be 10
            //cout << " sum "<< res << endl;
        }
        cout << endl ;
        res = max(res, currentMax); // for i = 2 the currentMax  = 12 and stored in res
    }
    return res;
}
int main()
{
    int arr[] = {5,-2,3,4}; // {...,3,4,5} = 12
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << maxCircularSubarray(arr, n);
}