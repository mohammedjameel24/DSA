#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool isPrime(int n)
{
    if(n<=1)
    {
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n%2 == 0 || n%3 == 0){
        return false;
    }
    for(int i =5 ; i <= sqrt(n); i += 6)
    {
        if(n %i == 0 || n % (i+2) == 0)
        {
            return false;
        }
        return true;
    }
    return true;
}

void sieveOfEratosthenes(int num)
{
    for(int j= 2 ; j <=num; j++)
    {
        if(isPrime(j))
        {
            cout << j << ",";
        }
    }
}

void sieveOfEratosthenesOptimized(int n)
{
    vector<bool> isPrime(n+1,true);
    int i ;
    for(i = 2 ; i <= sqrt(n); i++)
    {
        if(isPrime[i])
        {
            for(int j = 2 * i ; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    for(int k = 2; k <= n; k++)
    {
        if(isPrime[k])
        {
            cout << k << ",";
        }
    }
}


int main()
{
    int num = 37;

    sieveOfEratosthenes(num);
    cout << endl ;
    sieveOfEratosthenesOptimized(num);
}