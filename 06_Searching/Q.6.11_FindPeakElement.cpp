#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> nums)
{
    int n = nums.size();
    int max = nums[0];
    int index = 0;
    for(int i=1; i<=n-2; i++){
        int prev = nums[i-1];
        int curr = nums[i];
        int next = nums[i+1];
        if(curr > prev && curr > next && curr > max){
            index = i;
            max = curr;
        }
    }
    if(nums[n-1] > max){
        return n-1;
    }
    return nums[index];
}

int findPeakElementBinarySearch(vector<int> nums)
{
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = (left + right) / 2;
        if (nums[mid] < nums[mid+1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

int main()
{
    vector<int> arr ={10,7,8,20,12};

    cout << findPeakElement(arr);
    cout << endl;
    cout << findPeakElementBinarySearch(arr);

}