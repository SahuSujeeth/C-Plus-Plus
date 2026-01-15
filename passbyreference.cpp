#include <bits/stdc++.h>
using namespace std;
void doSomething(string &s)
{

    s[0] = 'X';
    cout << s << endl;
}
// pass by reference... does can modifies the original value...
// Note does not need the & symbol to pass by reference because it always pass by reference...
int main()
{
    string s = "Sahoo";
    doSomething(s);
    cout << s << endl;
    return 0;
}