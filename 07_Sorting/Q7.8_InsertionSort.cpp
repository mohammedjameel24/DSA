#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i =1; i< n; i++)
    {
        int key = arr[i]; // store the current index
        int j = i-1; // store the current but one index
        while(j >= 0 && arr[j] > key) // while current but one index is >= 0 and it is > current index
        {
            arr[j+1] = arr[j]; // move forward the elements
            j--; // move the index backward
        }
        arr[j+1] = key; // place the current element at its place 
    }
}

int main()
{
    int arr[] = {11,44,33,99,55,22};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }

}