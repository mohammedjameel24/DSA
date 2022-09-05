#include <iostream>
#include<algorithm>
using namespace std;

int gcd(int a , int b)
{
    int res = min(a,b);
    while(res > 0)
    {
        if(a %res == 0 && b%res == 0)
        {
            break;
        }
        res++;
    }
    return res;
}

int gcdOptimized(int c , int d){

    while( c!=d)
    {
        if(c>d)
        {
            c = c-d ;
        }
        else{
            d = d-c ;
        }
    }
    return c;
}

int gcdOptimal(int e , int f)
{
    if(f == 0)
    {
        return e;
    }
    else{
        return gcdOptimal(f, e%f);
    }
}
int main(){
    int a,b;
    cin >> a;
    cin >> b;
    
    cout <<gcdOptimal(a,b) << endl << gcdOptimized(a,b) <<endl << gcd(a,b) << endl << __gcd(a,b) << endl;

}