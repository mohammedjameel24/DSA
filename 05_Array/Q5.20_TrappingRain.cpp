#include <iostream>
using namespace std;

int getWater(int arr[], int n)
{
    int res = 0; // initialize result as 0
    int lMax[n], rMax[n]; // initialize 2 arrays with size of n

    lMax[0] = arr[0]; // initialize the 0th index of lMax with value of arr[0]
    for(int i = 1; i < n; i++) // traverse left to right the lMax from index 1
    {
        lMax[i] = max(arr[i],lMax[i-1]); //store lMax[i] with maximum value i.e lMax = {5,5,6,6,6} 

    }
    rMax[n-1] = arr[n-1]; // initialize rMax[lastIndex] with arr[lastIndex] 
    for(int i = n - 2; i >= 0; i--) // traverse right to left  rMax
    {
        rMax[i] = max(arr[i],rMax[i+1]); // stor rMax[i] with maximum value i.e rMax = {6,6,6,3,3}
    }
    for(int i = 1 ; i < n - 1; i++)
    {   // to calculate result
        res = res + (min(lMax[i],rMax[i]) - arr[i]); //    lmax = {5,5,6,6,6} 
                                                     //    rMax = {6,6,6,3,3}
                                                     //         - {5,0,6,2,3}
                                                     //   result = 0+5+0+1+0
                                                     //          = 6
    }
    return res ;
}

int main()
{
    int arr[] = {5,0,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << getWater(arr,n);
}