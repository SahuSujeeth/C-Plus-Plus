#include <bits/stdc++.h>
using namespace std;

int main (){
    //String
    string s = "Sahoo";//string also store in indexes..and characters are at every indexes...
    int lenght = s.size();
    s[lenght-1] = 'z';
    cout << s[lenght-1];
    return 0;
}