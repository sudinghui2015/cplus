//sqrt.cpp -- using the sqrt() function
//
//
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double area;
    cout << "Enter the floor area, in square feet, of your home:  ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That is the equivalent of a square " << side
         << " feat to the side." << endl;
    cout << " How fascinating! " << endl;
    return 0;

}
