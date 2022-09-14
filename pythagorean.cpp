#include <iostream>
#include <math.h>
using namespace std;
bool pytho(int a, int b, int c)
{
    int temp, p, q;
    temp = a;
    p = b;
    q = c;
    if (b > a && b > c)
    {
        temp = b;
        p = a;
    }
    if (c > a && c > b)
    {
        temp = c;
        p=a;
        q = b;
    }
    if (temp * temp == p * p + q * q)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x, y, z;
    bool m;
    cout << "Please enter the triplet that you want to check for pythagorean triplet.\n";
    cin >> x >> y >> z;
    if (pytho(x, y, z))
    {
        cout << "Provided triplet is a pythagorean triplet.";
    }
    else
    {
        cout << "Provided triplet is not a pythagorean triplet.";
    }
    return 0;
}