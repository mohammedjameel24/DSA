#include <iostream>
using namespace std;


bool powerOfTwo(int n )
{
    if(n == 0)
    {
        return false;
    }
    while(n != 1)
    {
        if(n%2 != 0)
        {
            return false;
        }
        n = n/2;
    }
    return true;

}

bool powerOfTwoOptimal(int n)
{
    if(n==0)
    {
        return false;
    }
    return ((n & (n-1))== 0);
}
int main()
{
    int n;

    cin >> n;
    cout << powerOfTwo(n) << endl  << powerOfTwoOptimal(n);

   ;
}