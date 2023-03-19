#include<stdio.h>
#include<stdlib.h>
float sum(float a, float b)
{
    float A;
    A = a+b;
    return A;
}
float diff(float a, float b)
{
    float A;
    A = a-b;
    return A;
}
float mult(float a, float b)
{
    float A;
    A = a*b;
    return A;
}
float divi(float a, float b)
{
    float A;
    A = a/b;
    return A;
}
/*int rem(int a, int b)
{
    int A;
    A = a%b;
    return A;
}*/
int main()
{
    float a,b,A;
    while(1)
    {
        char o;
        printf("*     *  *****  *      *****  *****  *     *  *****\n");
        printf("*     *  *      *      *      *   *  * *  **  *    \n");
        printf("*  *  *  ****   *      *      *   *  *  *  *  **** \n");
        printf("* * * *  *      *      *      *   *  *     *  *    \n");
        printf("*     *  *****  *****  *****  *****  *     *  *****\n");
        printf("\t\tCALCULATOR\n\n");
        printf("\tEnter the First Number: ");
        scanf("%f",&a);
        printf("\tEnter the Second Number: ");
        scanf("%f",&b);
        printf("\tEnter the Sign of Operation to be Performed: ");
        scanf("%s",&o);
        switch(o)
        {
            case '+':
            {
                A = sum(a,b);
                printf("\t\tThe Sum is: %f\n",A);
                break;
            }
            case '-':
                {
                    A = diff(a,b);
                    printf("\t\tThe Difference is: %f\n",A);
                    break;
                }
            case '*':
                {
                    A = mult(a,b);
                    printf("\t\tThe Multiplication is: %f\n",A);
                    break;
                }
            case '/':
                {
                    A = divi(a,b);
                    printf("\t\tThe Answer is: %f\n",A);
                    break;
                }
            default:
                {
                    printf("\t\tEnter Valid Input\n");
                    break;
                }
        }
        printf("\n\t\tEnter '0' to clear Screen or press any Number to proceed\n");
        scanf("%f",&a);
        if(a==0)
        {
            system("cls");
        }
    }
    return 0;
}
