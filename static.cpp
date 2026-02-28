#include <bits/stdc++.h>
using namespace std;

double myGlobalDouble = 3.1415;
void someFunction(int aParam)
{
  static int myNum = 500;
  int localToFunction = 1;
  cout << " My Local function number is this : " << localToFunction << endl;
  cout << "The parameter number is this : " << aParam << endl;
  myGlobalDouble++;
  cout <<"My global double number is this : " << myGlobalDouble << endl;
  myNum++;
  cout << "My static number is this : " << myNum << endl;
}

int main()
{
    int localToMain = 10;
    cout << "My local number is this: " << localToMain << endl;
    cout <<"My global double number is this : " << myGlobalDouble << endl;
    someFunction(20);
    cout << "\n";
    cout << "My local number is this: " << localToMain << endl;
    cout <<"My global double number is this : " << myGlobalDouble << endl;
    someFunction(20);

    return 0;
}