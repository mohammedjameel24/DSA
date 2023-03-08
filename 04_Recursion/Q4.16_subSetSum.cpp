#include <iostream>
#include <vector>

using namespace std;

int subSetSum(vector<int> arr,int n, int sum)
{
    if(n == 0)
    {
        return (sum == 0) ? 1:0;
    }

    return subSetSum(arr,n-1,sum) + subSetSum(arr,n-1, sum - arr[n-1]);

}
int main()
{
    vector<int> arr{5,10,20,15,25};
    int n = arr.size();
    int sum = 25;
    cout << subSetSum(arr,n,sum);

}