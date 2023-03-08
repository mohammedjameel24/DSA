#include<stdio.h>
#include<iostream>

using namespace std;

bool isSorted(int arr[] , int n)
{
    for(int i = 0;i < n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;

}

bool isSortedOptimal(int arr[], int n)
{
    for(int i = 0 ; i < n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << isSorted(arr,n) << endl << isSortedOptimal(arr,n);
}