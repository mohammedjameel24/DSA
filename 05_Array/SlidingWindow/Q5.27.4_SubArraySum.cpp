#include <iostream>
using namespace std;

bool subArraySum(int arr[] , int n , int sum)
{
    int currentSum = arr[0] , s = 0;
    for(int e = 1 ; e < n; e++)
    {
        while(currentSum > sum && s < e-1)
        {
            currentSum -= arr[s];
            s++;
        }
        if(currentSum == sum)
            return true;
        if(e < n)
            currentSum += arr[e];
    }
    return (currentSum == sum);
    
}

int main()
{
    int arr[] = {1,4,20,3,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 33;
    cout << subArraySum(arr,n,k);
}