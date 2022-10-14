#include<iostream>

using namespace std;

int * rightRotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int j = n-1; j > 0; j--){  
        
        arr[j] = arr[j-1];  
    }  
    arr[0] = temp;

    return arr;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    auto p = rightRotate(arr,n);
    for(int i = 0 ; i <n; i++)
    {
        cout << p[i] << " ";
    }
}