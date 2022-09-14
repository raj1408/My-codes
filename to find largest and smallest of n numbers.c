#include <stdio.h>
#include <conio.h>
void main()
{
    int n, r, s, l;
    printf("Enter the number upto which you want to find smallest and largest number.\n");
    scanf("%d", &n);
    printf("Enter %d numbers.\n", n);
    scanf("%d", &r);
    s = l = r;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &r);

        if (r > l)
        {
            l = r;
        }
        if (r < s)
        {
            s = r;
        }
    }
    printf("Largest number is %d and smallest number is %d", l, s);
    getch();
}