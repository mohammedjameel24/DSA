#include <iostream>
#include <algorithm>

using namespace std;

int lcm(int a , int b)
{
    int res = max(a,b);
    while(true)
    {
        if(res%a == 0 && res%b == 0)
        {
            return res;
        }
        res++;
    }
    return res;
}

int lcmOptimal(int c, int d)
{
    return (c*d)/ __gcd(c,d);
}

int main()
{
    int a,b;
    cin >> a;
    cin >> b;

    cout << lcm(a,b) << endl << lcmOptimal(a,b) << endl;
}