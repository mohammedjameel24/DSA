#include<iostream>
#include<string.h>

using namespace std;

bool isPalindrome(string &str, int start, int end )
{
    if(start >= end)
    {
        return true;
    }
    return (str[start] == str[end]) && isPalindrome(str,start + 1, end - 1);
}

int main()
{
    string str = "oereo";
    int start = 0;
    int end = str.size() -1;
    cout << isPalindrome(str,start,end );
}