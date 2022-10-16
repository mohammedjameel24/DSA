#include<iostream>

using namespace std;

int maxDifference(int arr[], int n)
{
    int res = 0;//arr[1] - arr[0]; //first minimum value is taken as difference of arr[1] & arr[0]
    int minVal = arr[0]; // initialize minVal with value of arr[0]

    for(int j  = 1; j < n ; j++) // for every value of j 
    {
        res  = max(res, arr[j] - minVal); //update res with difference of current arr[i] & minValue so far 
        minVal = min(minVal, arr[j]); // update the minVal if encounters minimum value than arr[j]
    }
    return res; //return res
}

int main()
{
    int arr[] = {2,15,10,6,4,8,21};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << maxDifference(arr,n);
}