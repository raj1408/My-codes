#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float p, r, t, n, c, a, b;
    printf("Enter the principal amount,rate of intrest,time period.\n");
    scanf("%f%f%f", &p, &r, &t);
    printf("Now enter the number times intrest apllied per time period.\n");
    scanf("%f", &n); // n is the number of times intrest is being calculated i.e. yearly(1),(2)
    b = (1 + r / 100 * n);
    a = n * t;
    c = p * pow(b, a) - p;
    printf("Compound intrest is %f", c);
    getch();
}