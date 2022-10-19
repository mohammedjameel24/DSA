#include<iostream>

using namespace std;

int OddEvenSubarray(int arr, int n)
{
    int res = 0;
    for(int i =0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            //even 
            if(arr[i+1] % 2 != 0)
            {
                res++;
            }
    
        }
        else{
            res = 1;
        }
    }
    return res;
}
int main()
{
    int arr[] = {7,10,5,8,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    OddEvenSubarray(arr, size);
}