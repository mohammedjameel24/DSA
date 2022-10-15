#include <iostream>
#include <algorithm>

using namespace std;

void frequencyOfElements(int arr[], int n)
{
    sort(arr, arr+n) ;
    int freq = 1 ;
    int i = 1;
    while(i < n )
    {
        while(i<n && arr[i] == arr[i-1])
        {
            freq++;
            i++;

        }
        cout << "("<< arr[i-1] << " " << freq << ")"<< endl;
        i++;
        freq = 1;
    }
    if(n ==1 || arr[n-1] != arr[n-2])
    {
        cout << arr[n-1] << " " << 1;
    }

}

int main()
{
    int arr[] = {40,50,50,50,40};
    int n = sizeof(arr)/sizeof(arr[0]);

    frequencyOfElements(arr,n);
}