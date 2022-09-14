#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int a[50], n, s = 0;
    cout << "Enter the number of elements you want to insert in the array.\n";
    cin >> n;
    cout << "Enter the elements of the array.\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n - i ; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
            else
            {
                continue;
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    return 0;
}