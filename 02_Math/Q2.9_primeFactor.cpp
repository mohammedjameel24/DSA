#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int j)
{
    if(j <= 1)
    {
        return false;
    }
    if(j == 2 || j == 3)
    {
        return true;
    }
    if(j % 2 ==0 || j % 3 == 0)
    {
        return false;
    }

    for(int i = 5; i <= sqrt(j); i = i + 6)
    {
        if(j % i == 0 || j % (i+2) == 0)
        {
            return false;
        }
        return true;
    }
    return true;
}

void primeFactor(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(isPrime(i))
        {    
            int x = i;
            while(n % x == 0)
            {
                cout << i << "," ;
                x = x * i;
            }
        }
    }
}
int main()
{
    int num = 13;
    primeFactor(num);
}