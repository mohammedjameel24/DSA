#include<iostream>

using namespace std;

int search(int nums[], int n ,int target) {
    int low = 0;
    int high = n -1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(nums[mid] == target)
            return mid;
        if(nums[low] < nums[mid]) //left half is sorted
        {
            if(target >= nums[low] && target < nums[mid]){
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(target > nums[mid] && target <= nums[mid])
            {
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
    }
    return -1;
}

int * rightRotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int j = n-1; j > 0; j--){  
        
        arr[j] = arr[j-1];  
    }  
    arr[0] = temp;

    return arr;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    rightRotate(arr,n);
    rightRotate(arr,n);
    rightRotate(arr,n);
    rightRotate(arr,n);
    //rightRotate(arr,n);
    //rightRotate(arr,n);
    //rightRotate(arr,n);
    for(int i = 0 ; i <n; i++)
    {
        cout << arr[i] << " ";
    } 
    cout << endl;

    int target = 4;
    cout << search(arr,n,target);
    

}

