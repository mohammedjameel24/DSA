#include<iostream>

using namespace std;

int maxNoOf1(int arr[] , int n)
{
    int res = 0 , current =0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == 0)
        {
            current = 0;
        }
        else{
            current++;
            res = max(res,current);
        }
    }
    return res;
}

int main()
{
    int arr[] = {1,0,0,0,1,1,1,1,0,1,1};
    int n  = sizeof(arr)/sizeof(arr[0]);

    cout << maxNoOf1(arr,n);
}