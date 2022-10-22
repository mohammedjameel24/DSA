#include <iostream>

using namespace std;

int maxSumOfKconsecutives(int arr[], int n, int k)
{
    int currentSum = 0;
    for(int i  = 0 ;  i < k; i++)
    {
        currentSum += arr[i];
    }
    int maxSum = currentSum ;
    for(int i = k ; i < n; i++)
    {
        currentSum += (arr[i] - arr[i-k]);
        maxSum = max(maxSum,currentSum);
    }
    return maxSum;

}
int main()
{
    int arr[] = {1,8,30,-5,20,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;
    cout << maxSumOfKconsecutives(arr, n , k);


}