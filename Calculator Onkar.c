#include <stdio.h>

float repeat()
{
    int z;
    printf("\t\tDo you want to continue\n ");
    printf("\t\tEnter 1 for continue \n");
    printf("\t\tEnter 2 for NO \n");
    scanf("%d", &z);
    return z;
}

int main()
{
    int num;
    double x, y;
    printf("Enter first number:");
    scanf("%lf", &x);
    printf("Enter second number:");
    scanf("%lf", &y);
        printf("********************* SIMPLE CALCULATOR *************\n\n\n");
    do
    {
        printf("******************* OPERATIONS*******************\n");
        printf("\t\t1) Enter 1 for Addition\n");
        printf("\t\t2) Enter 2 for Subtraction\n");
        printf("\t\t3) Enter 3 for Multiplication\n");
        printf("\t\t4) Enter 4 for Division\n");
        printf("\t\t5) Enter 5 for Squares of number\n");
        printf("Enter the number for operation:");

        scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("Addition is : %.1f\n", x + y);
            break;
        case 2:
            printf("Subtration is : %.1f\n", x - y);
            break;
        case 3:
            printf("Multiplition is : %.1f\n", x * y);
            break;
        case 4:
            printf("Division is : %.1f\n", x / y);
            break;
        case 5:
            printf("square of first number is : %.1f\n  square of second number is %.1f\n ", x * x, y * y);
            break;

        default:
            printf("Invalid input!");
        }

    } while (repeat() == 1);

    return 0;
}