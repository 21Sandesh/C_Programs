#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b,*ap,*bp,s;
    float sol;
    while(1)
    {
        printf("\n\n\tEnter First Number:  ");
        scanf("%d",&a);
        ap = &a;
        printf("\tEnter Second Number: ");
        scanf("%d",&b);
        bp = &b;
        printf("Enter\n\t1. Addition\n\t2. Subtraction\n\t3. Multiplication\n\t4. Division\nINPUT: ");
        scanf("%d",&s);
        switch(s)
        {
        case 1:
            {
               sol = (*ap)+(*bp);
               printf("Addition of the Numbers is: %.4f",sol);
            }break;
        case 2:
            {
                sol = (*ap)-(*bp);
                printf("Subtraction of the Numbers is: %.4f",sol);
            }break;
        case 3:
            {
                sol = (*ap)*(*bp);
                printf("Product of the Numbers is: %.4f",sol);
            }break;
        case 4:
            {
                sol = (*ap)/(*bp);
                printf("Division of the Numbers is: %.4f",sol);
            }break;
        default :
            {
                printf("\nInvalid Input\n");
            }break;
        }
        printf("\nPress any Key to Clear Screen");
        getch();
        system("cls");
    }
    return 0;
}
