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

// kadane algorithm

int normalMaxSum(int arr[], int n)
{
    int res = arr[0], globalMax =arr[0];
    for(int i =1; i < n ; i++)
    {
        globalMax = max(arr[i], globalMax + arr[i]);
        res = max(res,globalMax);
    }
    return res; //{seqential max = 10}
}
// kadane algorithm end 
int overallMax(int arr[],int n)
{
    int maxNormal = normalMaxSum(arr,n);
    if(maxNormal < 0)
    {
        return maxNormal;
    }
    int arr_sum = 0;
    for(int i= 0; i < n; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i] ; //{-5,2,-3,-4 = -10}
    }
    int max_circular = arr_sum + normalMaxSum(arr,n);

    return max(maxNormal, max_circular); 
}
int main()
{
    int arr[] = {5,-2,3,4}; // {...,3,4,5} = 12
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << maxCircularSubarray(arr, n);
    cout << endl ;
    cout << overallMax(arr,n);
}