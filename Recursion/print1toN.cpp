#include<iostream>

using namespace std;

void print1toN(int n)
{
    if(n < 1)
    {
        return ;
    }
    else{
        print1toN(n-1);
        cout << n << " ";
    }
}

int main()
{
    int n = 3;
    print1toN(n);
}