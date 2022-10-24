#include <iostream>

using namespace std;

int hasEqilibriumPoint(int arr[], int n)
{
    int sum = 0;
    for(int i = 0 ; i < n; i++)
    {
        sum += arr[i];
    }
    int left_sum = 0;
    for(int i = 0; i<n; i++)
    {
        if(left_sum == sum - arr[i])
        {
            return arr[i];
        }
        left_sum += arr[i]; cout << "leftSum " <<left_sum << endl;
        sum -= arr[i]; cout << "Sum " << sum << endl;
    }
    return false;
}

int main()
{
    int arr[] ={3,4,8,-9,20,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << hasEqilibriumPoint(arr,n);
}