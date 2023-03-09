#include <iostream>

using namespace std;

int FirstOccurence(int arr[], int n , int x)
{
    int high = n-1;
    int low = 0;
    
    while(low <= high)
    {
        int mid = (high + low) / 2;

        if(arr[mid] > x)
        {
            high = mid - 1; //middle element is greater than target move to the left by putting upper bound to mid -1;
        }
        else if(arr[mid] < x){
            low = mid + 1; //middle element is lesser than target move to the right by putting lower bounf as mid  +1;
        }
        else{
            if(mid == 0 || arr[mid-1] != arr[mid])
            {
                cout << mid << endl;

                return mid; // first occurence from first index;
            }
            else{
                high = mid -1;
            }
        }
    }
    return -1;
}

int LastOccurence(int arr[], int n , int x)
{
    int high = n-1;
    int low = 0;

    while(low <= high)
    {
        int mid = (high + low)/2;
        if(arr[mid] > x)
        {
            high = mid - 1;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else{
            if(mid == n-1 || arr[mid+1] != arr[mid])
            {
                cout << mid << endl;
                return mid;// last occurence from the last index
            }
            else{
                low = mid +1;
            }
        }
    }
    return -1;
}

int CountOccurences(int arr[], int n, int x)
{
    int first = FirstOccurence(arr,n,x);
    if(first == -1)
    {
        return 0; // if first occurrence dosent exist
    }
    else{
        return (LastOccurence(arr,n,x)-first + 1); // count occurence by 5-3+1 = 3
    }
}

int main()
{
    int arr[] = {10,10,10,100,100,100,1000,1000,1000,10000};

    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 100;

    cout << CountOccurences(arr,n,x);
}