#include <iostream>

using namespace std;

int OccurenceOf1(int arr[], int n)
{
    int high = n-1;
    int low = 0;
    
    while(low <= high)
    {
        int mid = (high + low) / 2;

        if(arr[mid] == 0){
            low = mid + 1; //middle element is lesser than target move to the right by putting lower bounf as mid  +1;
        }
        else{

            if(mid == 0 || arr[mid-1] != arr[mid])
            {
                cout << mid << endl;

                return (n-mid); // first occurence from first index;
            }
            else{
                high = mid -1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = {0,0,1,1,1,1,1,1};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << OccurenceOf1(arr,n);
    
}