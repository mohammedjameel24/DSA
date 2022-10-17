#include<iostream>

using namespace std;

void leaders(int arr[], int n)
{
    int current_leader = arr[n-1];
    cout << current_leader << " ";
    for(int i = n-2; i >= 0; i--)
    {
        if(current_leader < arr[i]){
            current_leader = arr[i];
            cout << current_leader << " ";
        }
    }
}

int main()
{
    int arr[]={7,10,4,10,6,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    leaders(arr,n);
}