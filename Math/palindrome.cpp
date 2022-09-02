#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int rev = 0;
    int temp = n;
    while(temp != 0)
    {
        int lastDigit = temp % 10 ;
        rev = rev * 10 + lastDigit;
        temp = temp / 10;
        if(rev == temp){

            return true;
        }
    }
    return false;
    
}

int main()
{
    int n = 1421;

    isPalindrome(n) ? cout << "yes" <<endl : cout << "No" << endl;
}