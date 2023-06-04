#include <iostream>
using namespace std;

int Fibonacci(int num)
{
   if ((num == 1) || (num == 0))
      return (num);
   else
      return (Fibonacci(num - 1) + Fibonacci(num - 2));
}

int main()
{
   int num, i = 0;
   cout << "\n\nEnter the number of terms of series : ";
   cin >> num;
   cout << "\nFibonnaci Series : ";
   while (i < num)
   {
      cout << " " << Fibonacci(i);
      i++;
   }
   return 0;
}