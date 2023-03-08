#include <iostream>

using namespace std;
int countWindowDistinct(int win[], int K)
{
    int distinct_count = 0;
    for(int i = 0; i < K;i++)
    {
        int j ;
        for(j = 0;j < i; j++)
        {
            if(win[i] == win[j])
            {
                break;
            }
        }
        if(j==i)
        {
            distinct_count++;
        }
    }
    return distinct_count;
}
void countDistinct(int arr[],int N, int K)
{
    for(int i = 0; i <= N-K; i++)
    {                   
        cout << countWindowDistinct(arr+i,K) << " ";
    }
}
int main()
{
    int arr[] = {1,2,1,3,4,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;

    countDistinct(arr,n,k);
}