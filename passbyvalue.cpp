#include <bits/stdc++.h>
using namespace std;
void doSomething(string s )
{
   // cout << s << endl;
    s[0] = 'X';
    cout << s << endl;
}
//pass by value... does not modifies the original value...
int main (){
    string s = "Sahoo";
    doSomething(s);
    cout << s << endl;
    return 0;
}