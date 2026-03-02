#include <bits/stdc++.h>
using namespace std;
class House
{
    public:
    void setnumStories(int numStories)
    {
        this->numStories = numStories;
    }
    void setnumWindows(int numWindows)
    {
        this->numWindows = numWindows;
    }
    void setnumColor(string color)
    {
        this->color = color;
    }
    int getnumStories() const
    {
        return numStories;
    }
    int getnumWindows() const
    {
        return numWindows;
    }
    string getColor() const
    {
        return color;
    }
    
    private:
    int numStories;
    int numWindows;
    string color;
};

void printHouseData(House house)
{
   cout << "The house is " << house.getColor()
         << " and has " << house.getnumStories()
         << " Stories and " << house.getnumWindows()
         << " windows." << endl;  
}
int main()
{
    House myHouse;
    House yourHouse;
    
    myHouse.setnumStories(9);
    myHouse.setnumWindows(2);
    myHouse.setnumColor("Yellow");
    
    yourHouse.setnumStories(1);
    yourHouse.setnumWindows(3);
    yourHouse.setnumColor("Black");
    
    printHouseData(myHouse);
    printHouseData(yourHouse);
    return 0;
}
