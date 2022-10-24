#include <iostream>
using namespace std;

int getSum(int prefixSum[],int l, int r)
{
    int IndecesSum = 0;
    if(l != 0)
    {
        IndecesSum = prefixSum[r]-prefixSum[l-1];

    }
    else{
        IndecesSum = prefixSum[r];
    }
    return IndecesSum;
}
int main()
{
    int arr[] = {2,8,3,9,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int prefix_Sum[n];
    prefix_Sum[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        prefix_Sum[i] = prefix_Sum[i-1] + arr[i];
    }

    cout << getSum(prefix_Sum,0,3);
}