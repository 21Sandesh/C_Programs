#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
float sum(float *ap, float *bp)
{
    float A,*AP;
    A = (*ap)+(*bp);
    AP = &A;
    printf("\t\tThe Sum is: %f\n",*AP);
}
float diff(float *ap, float *bp)
{
    float A,*AP;
    A = (*ap)-(*bp);
    AP = &A;
    printf("\t\tThe Difference is: %f\n",*AP);
}
float mult(float *ap, float *bp)
{
    float A,*AP;
    A = (*ap)*(*bp);
    AP = &A;
    printf("\t\tThe Multiplication is: %f\n",*AP);
}
float divi(float *ap, float *bp)
{
    float A,*AP;
    A = (*ap)/(*bp);
    AP = &A;
    printf("\t\tThe Answer is: %f\n",*AP);
}
/*int rem(int a, int b)
{
    int A;
    A = a%b;
    return A;
}*/
int main()
{
    float a,b,*ap,*bp,A;
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
        ap = &a;
        printf("\tEnter the Second Number: ");
        scanf("%f",&b);
        bp = &b;
        printf("\tEnter the Sign of Operation to be Performed: ");
        scanf("%s",&o);
        switch(o)
        {
            case '+':
            {
                sum(ap, bp);
                break;
            }
            case '-':
                {
                    diff(ap, bp);
                    break;
                }
            case '*':
                {
                    mult(ap,bp);
                    break;
                }
            case '/':
                {
                    divi(ap,bp);
                    break;
                }
            default:
                {
                    printf("\t\tEnter Valid Input\n");
                    break;
                }
        }
        printf("\n\t\tPress any Key to Clear Screen\n");
        getch();
            system("cls");
    }
    return 0;
}
