#include <stdio.h>
#include <conio.h>
float main()
{
    float x, y, z;
    char op;
    printf("Enter two numbers for calculation.\n");
    scanf("%f%f", &x, &y);
    printf("1.Adittion(+)\n");
    printf("2.Subtraction(-)\n");
    printf("3.Multiplication(*)\n");
    printf("4.Division(/)\n");
    printf("Enter the operator(+,-,*,/).\n");
    getchar();
    scanf("%c", &op);
    switch (op)
    {
    case '+':
    {
        z = x + y;
        printf("Your desired output is %f", z);
    }
    break;
    case '-':
    {
        z = x - y;
        printf("Your desired output is %f", z);
    }
    break;
    case '*':
    {
        z = x * y;
        printf("Your desired output is %f", z);
    }
    break;
    case '/':
    {
        if (y == 0)
        {
            printf("Undefined");
        }
        else
        {
            z = x / y;
            printf("Your desired output is %f", z);
        }
    }
    break;
    default:
        printf("Please enter a valid input.");
        break;
    }
    printf("\n Thankyou for using this program designed by Raj Saini.");
    getch();
}
