#include <bits/stdc++.h>
using namespace std;
void printName(string name)
{
    cout << "Hey " << name << endl;
}
int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}
int main()
{
    // Functions types
    // Void --> Does not return any anything...
    // return
    // parameterised
    // Non parameterised
    //  string name;
    //  cin >> name;
    //  printName(name);

    // string name2;
    // cin >> name2;
    // printName(name2);
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << res;

    return 0;
}