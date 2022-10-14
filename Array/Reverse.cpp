#include <iostream>
using namespace std;

int * reverse(int arr[], int n)
{
    int low = 0, high = n-1;
    while(low < high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
        /*
            x = x + y
            y = x - y
            x = x - y
        */
    }
    return arr;
}
int main()
{
    int arr[] = {2,4,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    auto p = reverse(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    
}