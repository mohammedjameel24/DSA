#include <iostream>
#include <vector>

using namespace std;

int findMissing(vector<int> array)
{
    int res = 0;
    
    for(int i=0 ; i < array.size() ; i++)
    {
        res = res ^ array[i];
    }
    for (int i = 1; i <= array.size() + 1; i++) {
        res = res ^ i;
    }
    return res;
}

int main()
{
    vector<int> array{1,3,4,5};
    cout << findMissing(array) << endl ;

}