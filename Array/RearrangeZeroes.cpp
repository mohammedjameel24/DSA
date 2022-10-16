#include <iostream>
using namespace std;

int * rearrangeZeroestoback(int arr[], int n)
{
    int count = 0; //initialize the count variable with 0
    for(int i = 0; i < n; i++) // iterate over elements 
    {
        if(arr[i] != 0) // if arr[i] is a non zero element then increment the count and  
        {               
            swap(arr[i],arr[count]);// after wards swap it with the count
            count++;
        }
    }
    return arr; 
}

int * rearrangeZeroestofront(int arr[], int n)
{
    int lastIndex = n-1;
    //cout << arr[lastIndex] << endl ;
    //initialize the count variable with 0
    for(int i = lastIndex; i>= 0; --i) // iterate over elements 
    {
        if(arr[i] != 0) // if arr[i] is a non zero element then increment the count and  
        {               
            swap(arr[i],arr[lastIndex]); // after wards swap it with the count
            --lastIndex;
        }
    }
    return arr; 
}
/*
by idententifying the count of non zero elements we swap the current non zero element with the count of non zero element 
1* 10 swaps with itself count = 0 and count++ {10,0,0,0,7,3,20,1}
2* 7 swaps with arr[count = 1] and count++ {10,7,0,0,0,3,20,1}
3* 3 swaps with arr[count = 2] and count++ {10,7,3,0,0,0,20,1}
4* 20 swaps with arr[count = 3] and count++ {10,7,3,20,0,0,0,1}
5* 1 swaps with arr[count = 4] and no more elements left {10,7,3,20,1,0,0,0} ⚡
*/

int main()
{
    int arr[] = {10,0,0,0,7,3,20,1}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    auto p =rearrangeZeroestoback(arr,n);
    for(int i = 0 ; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl ;
    auto q =rearrangeZeroestofront(arr,n);
    for(int j = 0 ; j < n; j++)
    {
        cout << q[j] << " ";
    }

    
}