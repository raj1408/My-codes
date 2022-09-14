#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],sum;
    float avg;
    printf("Enter 10 numbers for which you wish to calculate the average.\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum+=a[i];
    }
    avg=sum/10;
    printf("Average of above 10 numbers is %f",avg);
    getch();
}