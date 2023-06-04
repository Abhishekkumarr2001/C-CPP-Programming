#include <iostream>
using namespace std;

long int Sum(int n)
{
  if (n != 0)
    return n + Sum(n - 1);
  else
    return n;
}

int main()
{
  int num;
  cin >> num;
  cout << "\nSum : " << Sum(num);
  return 0;
}
