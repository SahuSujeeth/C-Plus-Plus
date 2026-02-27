#include <bits/stdc++.h>
using namespace std;

int main (){
    vector<string>cousins;
    cousins.push_back("Shriyanshs");
    cousins.push_back("Sameera");
    cousins.push_back("Maneesha");
    cousins.push_back("Bujji");
    cousins.push_back("Sujeeth");

    cousins.insert(cousins.begin()+2,"Sahu");
    cousins.pop_back();
    for(auto name : cousins)
    {
        cout << name << endl;
    }
    return 0;
}