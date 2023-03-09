#include <iostream>

using namespace std;

int SquareRoot(int n)
{
    int i = 0;
    while(i*i <= n)
    {
        i++;
    }
    return (i-1);
}

double sqrt(double num) {
    double left = 0;
    double right = num;
    double mid;

    while (left <= right) {
        mid = (left + right) / 2;
        if (mid * mid == num) {
            return mid;
        }
        else if (mid * mid < num) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    // If the square root is not exact, return an approximation
    return (left + right) / 2;
}

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The square root of " << num << " is " << sqrt(num) << endl << SquareRoot(num);
    return 0;
}
