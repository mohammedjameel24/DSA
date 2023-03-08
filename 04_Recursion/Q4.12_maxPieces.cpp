#include <iostream>
#include <algorithm>

using namespace std;

int maxPiece(int n, int a, int b, int c)
{

    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }

    int res = max({maxPiece(n - a, a, b, c),
                   maxPiece(n - b, a, b, c),
                   maxPiece(n - c, a, b, c)});

    if (res == -1)
    {
        return -1;
    }
    return res + 1;
}

int main()
{
    int n, a, b, c;

    n = 23;
    a = 9;
    b = 11;
    c = 12;

    cout << maxPiece(n, a, b, c);
}