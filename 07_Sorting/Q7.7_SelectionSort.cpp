#include <iostream>
using namespace std;

void selectioSort(int arr[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        int min_index = i;
        for(int j = i + 1 ; j < n;j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }
}

int main()
{
    int arr[]={10,88,66,22,33,77};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectioSort(arr,n);

    for(int i =0 ; i < n ; i++)
    {
        cout << arr[i] << ",";
    }

}