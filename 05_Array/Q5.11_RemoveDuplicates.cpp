#include<iostream>
using namespace std;

int * removeDuplicates(int arr[], int n)
{
    int res = 1;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] != arr[res-1]) //if arr[i] is not equal to previous element res-1 = 0 i.e new element
        {
            arr[res] = arr[i]; // arr[res] = arr[i]
            res++; // increment the res
        }
    }
    return arr;
}


int main()
{
    int arr[] = {10,10,20,30,30};// {10,20,30,30,30}
    int n = sizeof(arr)/ sizeof(arr[0]);

    
    auto p = removeDuplicates(arr,n);
    for(int i = 0; i < n ; i++)
    {
        cout << p[i] << " "; 
    }

}