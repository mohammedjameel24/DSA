#include <iostream>
using namespace std;
int powers(int n, int power)
{
    int res = 1;
    for(int i = 0; i <power; i++)
    {
        res *= n;
    }
    return res;
}

int powersOptimized(int n , int power)
{
    if(power == 0)
    {
        return 1;
    }
    int temp = powersOptimized(n , power/2);
    temp = temp * temp;
    if(power %2 == 0)
    {
        return temp;
    }
    else{
        return temp * n;
    }
}
int main()
{
    int n, power ;
    n  = 2;
    power = 10;

    cout << powers(n , power) << endl << powersOptimized(n , power);

}