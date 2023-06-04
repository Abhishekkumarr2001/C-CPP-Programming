#include <iostream>
using namespace std;

long double multiplyNumbers(int n)
{
    if (n >= 1)
        return n * multiplyNumbers(n - 1);
    else
        return 1;
}

int main()
{
    int n;
    cout << "\n\nEnter a positive integer: ";
    cin >> n;
    cout << "\nFactorial of " << n << " is " << multiplyNumbers(n);
    return 0;
}
