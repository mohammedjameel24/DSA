#include <iostream>

using namespace std;

void FlipsToMakeSame(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        if(arr[i] != arr[i-1]) // i = 1 : do nothing // i = 5 : do nothing // i = 7 : do nothing
        {
            if(arr[i] != arr[0]) // i = 2 : print(i=2) // i = 3 : do nothing // i = 6 : print(i=6)
            {
                cout << "from" << i << endl;
            }
            else{
                cout << (i-1) << endl; // i = 4 : print(i - 1 = 3) // i = 8 : print(i - 1 = 7)
            }
        }
    }
    if(arr[n-1] != arr[0])
    {
        cout << (n-1) << endl;
    }
}

int main()
{
    int arr[] = {0,0,1,1,0,0,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    FlipsToMakeSame(arr,n);

}