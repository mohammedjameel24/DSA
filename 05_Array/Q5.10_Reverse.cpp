#include <iostream>
using namespace std;

int * reverse(int arr[], int n)
{
    int low = 0, high = n-1; //initialize low with 0 and high with lastIndex
    while(low < high) // uptill low is less than high
    {
        swap(arr[low],arr[high]);// swap arr[low ] with arr[lastindex]
        low++; // increment low 
        high--; // decrement lastIndex
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