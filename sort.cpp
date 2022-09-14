#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void sort(int a[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                swap(a[j],a[i]);
            }
        }
    }
}
int main()
{
    int p, m[100];
    char op;
    cout << "Please enter the number of elements you want store in the array.\n";
    cin >> p;
    cout << "Enter the elements of the array.\n";
    for (int i = 0; i < p; i++)
    {
        cin >> m[i];
    }
    sort(m, p);
    cout << "Enter o to search any element or enter l to print sorted array.\n";
    cin >> op;
    switch (op)
    {
    case 'l':
    {
        for (int i = 0; i < p; i++)
        {
            cout << m[i] << "\t";
        }
        break;
    }
    case 'o':
    {
        int x, i, c = -1;
        cout << "Please enter the element you want to search.\n";
        cin >> x;
        for (i = 0; i < p; i++)
        {
            if (m[i] == x)
            {
                cout << "Element " << x << " found at position " << i << endl;
                c = i;
            }
        }
        if (c == -1)
        {
            cout << "Element " << x << " not found.";
        }

        break;
    }
    default:
        cout << "Please enter a valid input";
        break;
    }
    return 0;
}