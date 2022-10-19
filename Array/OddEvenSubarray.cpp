#include<iostream>

using namespace std;

int OddEvenSubarray(int arr[], int n)
{
    int res = 1, current = 1;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] % 2 == 0 && arr[i-1] % 2 != 0 || arr[i] % 2 != 0 && arr[i-1] % 2 == 0) 
        {   // if ( arr[i] is even & arr[i-1] is odd ) || arr[i] is odd & arr[i-1] is even
            current++; // update the current chain of elements
            res = max(res,current); // compare it with default result value i.e 1
        }
        else{
            current = 1; // if this is not the case then keep reseting current to 1
        }
    }
    return res;
}
int main()
{
    int arr[] = {7,8,9,10,11,12};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << OddEvenSubarray(arr, size);
}