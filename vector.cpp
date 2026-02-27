#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> someVec;
    vector<string> anotherVec(3);
    someVec.push_back(92);
    someVec.push_back(99);
    someVec.push_back(66);

    cout << "Size of someVec: " << someVec.size() << endl;
    anotherVec[0] = "Sahu";
    anotherVec[1] = "Surada";
    anotherVec[2] = "Sai";
    anotherVec.push_back("Siddi");
    for (int n : someVec)
    {
        cout << n << endl;
    }
    cout << endl;
    for (string s : anotherVec)
    {
        cout << s << endl;
    }
    cout << endl;
    cout << "Front and End of the anothereVec: " << endl;
    cout << anotherVec.front() << endl;
    cout << anotherVec.back() << endl;
    anotherVec.pop_back();
    anotherVec.insert(anotherVec.begin(), "Sujeeth");
    cout << "Aftere modifications..." << endl;
    cout << anotherVec.front() << endl;
    cout << anotherVec.back() << endl;

    return 0;
}