#include <iostream>

using namespace std;

int * leftRotate(int arr[] , int n)
{
    int temp = arr[0];
    for(int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    return arr;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    auto p = leftRotate(arr,n);

    for(int i = 0 ; i < n ; i++)
    {
        cout << p[i] << " ";
    }
}