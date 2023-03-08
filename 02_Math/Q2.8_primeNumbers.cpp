#include <iostream>
#include <math.h>
using namespace std;

bool primeNumber(int n)
{
    if(n <= 1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n % 2 == 0 || n % 3 == 0){
        return false;
    }

    for(int i = 5; i <= sqrt(n);i = i+6){
        if(n % i == 0 || n % (i+2) == 0){
            return false;
        }
        return true;
    }
    return true;

}

int main(void)
{
    int n = 17;

    primeNumber(n) ? cout <<endl << "true" : cout << "false" << endl; 
    
}

/* Tip : A floating point exception is an error that occurs when you try to do something impossible with a floating point number, such as divide by zero */