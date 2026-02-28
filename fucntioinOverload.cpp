#include <bits/stdc++.h>
using namespace std;
int getSum(int num1, int num2)
{
    return num1 + num2;
}
string getSum(string str1, string str2)
{
    return str1 + " " + str2;
}
int getSum(int num)
{
  return num * num;
}
int main()
{
    int num1 = 10;
    int num2 = 20;
   int result = getSum(num1,num2);
   cout << result << endl;
   string result2 = getSum("Sahu","Sujeeth");
   cout << result2 << endl;
   int result3 = getSum(7);
   cout << result3 << endl;
    return 0;
}