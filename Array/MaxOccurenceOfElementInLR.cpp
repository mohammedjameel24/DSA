#include <iostream>
#include <vector>

using namespace std;

int maxOcc(int L[],int R[], int n)
{
    int arr[1000] = {0};

    for(int i = 0; i <n; i++)
    {
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int maxM = arr[0], res= 0;
    for(int i = 1; i <1000; i++)
    {
        arr[i] += arr[i-1];
        if(maxM < arr[i])
        {
            maxM = arr[i];
            res = i;
        }
    }
    return res;
}

int main()
{
    int L[]={1,2,5,15};
    int R[]={5,8,7,18};
    int n = sizeof(L)/sizeof(L[0]);

    std::cout << maxOcc(L,R,n);
}