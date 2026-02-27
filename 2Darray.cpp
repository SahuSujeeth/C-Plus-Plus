#include <bits/stdc++.h>
using namespace std;

int main (){
    //2D array
    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    cout << arr[0][2] << endl;
    arr[1][0] = 14;

    cout << arr[1][0] << endl;
    // This is for the reverse order...
    // for (int row = 1; row >= 0; row--)
    // {
    //     for (int col = 2; col >= 0; col--)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    //This is for the correct order..
    // for (int row = 0; row < 2; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }
    
    return 0;
}