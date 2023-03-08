#include <iostream>

using namespace std;

void reverse(int arr[], int low , int high)
{
    while(low < high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int * leftRotateByd(int arr[], int n, int d)
{
    int k = 0 ;
    reverse(arr, k, d-1);
    reverse(arr, d, n-1);
    reverse(arr, k, n-1);

    return arr;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;

    auto p = leftRotateByd(arr,n,d);

    for(int i = 0; i < n;  i++)
    {
        cout << p[i] << " ";
    }
}