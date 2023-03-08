#include <iostream>
#include <vector>
using namespace std;

int findOdd(vector<int> arr)
{
    int res = 0;
    for(int i = 0; i< arr.size(); i++)
    {
       res = res ^ arr[i] ;
    }
    return res;
}

int main()
{
    vector<int> arr{4,3,4,4,4,5,5,3,3};
    
    cout << findOdd(arr) << endl;

}