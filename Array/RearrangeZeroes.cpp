#include <iostream>
using namespace std;

int  rearrangeZeroes(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {10,0,0,0,7,3,20,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << rearrangeZeroes(arr,n);
    
}