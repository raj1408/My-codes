#include <stdio.h>
#include <conio.h>
void main()
{
    char x;
    printf("Enter the alphabet(A to Z) upto which you want to print alphabet tree.\n");
    scanf("%c", &x);
    x = (int)x - 65;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 65; j <= 65 + i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    getch();
}
