#include <iostream>
using namespace std;

int CountSetBit(int n)
{
    int res = 0;
    while(n > 0)
    {
        if((n&1) == 1)  // if(n%2 != 0)
        {
            res++;
        }
        n = n >> 1;    // n = n/2 ;
    }
    return res;
}
int main()
{
    int n ;
    cin >> n;

    cout << CountSetBit(n);
}