#include <bits/stdc++.h>
using namespace std;
/*
Gradeing system for marks..
*/
int main()
{
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "Not eligible for job";
    }
    else if (age <= 57)
    {
        cout << "Eligible for job";
        if (age >= 55)
        {
            cout << ", but Retirement soon!";
        }
    }
    else
    {
        cout << "Retirement time";
    }

    return 0;
}