#include <iostream>
#include <math.h>
using namespace std;

int countDigit(long n)
{
    if(n == 0){
        return 0;
    }
    int digits = 1;
    return digits++ + countDigit(n/10);
}

int countDigitLograthmic(long n)
{
    int digits = 1;
    return floor(log10(n)) + digits++;
}

int main()
{
    long n = 86713;
    cout << countDigit(n) << endl;
    cout << countDigitLograthmic(n) << endl;
}