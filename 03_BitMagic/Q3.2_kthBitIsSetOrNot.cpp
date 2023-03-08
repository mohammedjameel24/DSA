#include <iostream>
using namespace std;

void KthBitLeftShift(int n , int k)
{
    if(n & (1<<(k-1)) != 0)
    {
        cout << "yes";
    }
    else{
        cout << "no";
    }
}

void KthBitRightShift(int n , int k)
{
    if((n >> k -1)  & 1 == 1)
    {
        cout << "yes";
    }
    else{
        cout << "no";
    }
}
int main()
{
    int n , k;
    cin >> n ;
    cin >> k ;
    KthBitLeftShift(n,k);
    cout << endl;
    KthBitRightShift(n,k);
}