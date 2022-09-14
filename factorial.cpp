#include <iostream>
using namespace std;
float fact(float n)
{
    float f;
    for (int i = 1; i <= n; i++)
    {
        f = n * i;
        return f;
    }
}
int main()
{
    float x, y;
    cout << "Please enter the number for which you want to calculate the factorial value.\n";
    cin >> x;
    if (x == 0)
    {
        cout << "Required factorial value is 1.";
    }
    else
    {
        y = fact(x);
        cout << "Required factorial value is " << y;
    }
    return 0;
}