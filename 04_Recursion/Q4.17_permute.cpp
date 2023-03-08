#include<iostream>
#include<string.h>

using namespace std;

void permute(string s, int i = 0)
{
    if(i == s.length() -1)
    {
        cout << s << " ";
        return;
    } // return empty string if length = 0
    for(int j = i; j < s.length();j++)
    {
        swap(s[i],s[j]);
        permute(s, i+1);
        swap(s[i],s[j]);
    } // swap [i] with [j] and increment i on every permute 
}
int main()
{
    string s = "ABC";
    permute(s);

}