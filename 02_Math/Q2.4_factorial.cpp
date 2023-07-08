#include <iostream>

using namespace std;

long long factorial(long long n)
{
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

long long iterativeFactorail(long long n)
{
    long long res = 1;
    for(long long i = 2;i <= n;i++){
        res = res * i;
    }
    return res;
}

int main()
{
    long long n = 10;

    cout << iterativeFactorail(n) << endl;
    cout << factorial(n);
}