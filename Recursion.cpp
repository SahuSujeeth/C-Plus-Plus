#include <bits/stdc++.h>
using namespace std;
void oneToNumber(int num)
{
    if(num > 0)
    {
        oneToNumber(num-1);
        cout << num << endl;
    }
}
int sum(int num)
{
    if(num > 1)
    {
      return num + sum(num - 1);
    }
    return num;
}
int factorial(int num)
{
    if(num > 1)
    {
        return num * factorial(num-1);
    }
    return 1;
}
int main()
{
   oneToNumber(10);
   int sumofnumbers = sum(10);
   cout << sumofnumbers << endl;
   int resultoffactorial = factorial(6);
   cout << resultoffactorial << endl;
    return 0;
}