#include <iostream>
using namespace std;
int countTrailingZeros(int n)
{
    int res = 0;
    for(int i = 5; i <= n; i *= 5)
    {
        res += n/i ;
    }
    return res;
}

int main()
{

    int n = 50 ;

    cout << countTrailingZeros(n) << endl;
}