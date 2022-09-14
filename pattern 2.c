#include <stdio.h>
#include <conio.h>
void main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int k = 10; k >= 2 * i; k--)
        {
            printf("");
            for (int j = 1; j <= i; j++)
            {
                printf("%d", j);
                for (int l = j - 2; l >= 1; l--)
                {
                    printf("%d", l);
                    printf("\n");
                }
            }
        }
    }

    getch();
}