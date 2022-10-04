#include <iostream>
using namespace std;

void TOH(int n,  char &A, char &B, char &C)
{
    if(n==1)
    {
        cout << "move from " << A << "To" << C <<endl;
        return ;
    }
    TOH(n-1,A,C,B);
    cout << "move " << n << "from" << A << "To" << C << endl;
    TOH(n-1,B,A,C);
}
int main()
{
    int n ;
  

    n = 3;
    char A = "A";
    char B = "B";
    char C = "C";

    TOH(n,A,B,C);
}