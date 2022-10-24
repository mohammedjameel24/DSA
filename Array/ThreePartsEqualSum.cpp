#include <bits/stdc++.h>
using namespace std;
bool canThreePartsEqualSum(vector<int>& arr) {
    int sum = 0;
    for(int i=0;i<arr.size();i++)
        sum += arr[i];
    if(sum % 3 != 0)
        return false;
    int sum3 = sum/3, partitions = 0;
    sum = 0;
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
        if(sum == sum3){
            ++partitions;
            sum = 0;
        }
    }
    return partitions >= 3;
}
int main() {
  vector<int> arr{5,2,6,1,1,1,5}; 
  cout<<canThreePartsEqualSum(arr);
  return 0;
}