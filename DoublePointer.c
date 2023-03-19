#include<stdio.h>
int main()
{
    int a,b,*ap,*bp,*app,*bpp,input,s;
    while(1)
    {
        printf("Enter:\n\t1.using Values\n\t2.using Pointer\n\t3.using double Pointer\nINPUT: ");
    scanf("%d",&input);
    switch(input)
    {
    case 1:
        {
            printf("Enter:\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division\nINPUT: ");
            scanf("%d",&input);
            switch(input)
            {
            case 1:
                {
                    printf("Enter the First Number: ");
                    scanf("%d",&a);
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    s = a+b;
                    printf("Addition of the Numbers is: %d",s);
                }
                break;
            case 2:
                {
                    printf("Enter the First Number: ");
                    scanf("%d",&a);
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    s = a-b;
                    printf("Subtraction of the Numbers is: %d",s);
                }
                break;
            case 3:
                {
                    printf("Enter the First Number: ");
                    scanf("%d",&a);
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    s = a*b;
                    printf("Multiplication of the Numbers is: %d",s);
                }
                break;
            case 4:
                {
                    printf("Enter the First Number: ");
                    scanf("%d",&a);
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    s = a/b;
                    printf("Division of the Numbers is: %d",s);
                }
                break;
            }
        }
        break;
    case 2:
        {
            printf("Enter:\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division\nINPUT:");
            scanf("%d",&input);
            switch(input)
            {
            case 1:
                {
                    printf("Enter the First Number: ");
                    scanf("%d",&a);
                    ap = &a;
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    bp = &b;
                    s = (*ap)+(*bp);
                    printf("Addition of the Numbers is: %d",s);
                }
                break;
            case 2:
                {
                    printf("Enter the First Number: ");
                    scanf("%d",&a);
                    ap = &a;
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    bp = &b;
                    s = (*ap)-(*bp);
                    printf("Subtraction of the Numbers is: %d",s);
                }
                break;
            case 3:
                {
                    printf("Enter the First Number: ");
                    scanf("%d",&a);
                    ap = &a;
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    bp = &b;
                    s = (*ap)*(*bp);
                    printf("Multiplication of the Numbers is: %d",s);
                }
                break;
            case 4:
                {
                    printf("Enter the First Number: ");
                    scanf("%d",&a);
                    ap = &a;
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    bp = &b;
                    s = (*ap)/(*bp);
                    printf("Division of the Numbers is: %d",s);
                }
                break;
            }
        }
        break;
        /*case 3:
        {
            printf("Enter:\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division\nINPUT:");
            scanf("%d",&input);
            switch(input)
            {
            case 1:
                {
                    printf("Enter the First Number: ");
                    scanf("%d",&a);
                    ap = &a;
                    app = &ap;
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    bp = &b;
                    bpp = &bp;
                    s = (**app)+(**bpp);
                    printf("Addition of the Numbers is: %d",s);
                }
            case 2:
                {
                    printf("Enter the First Number: ");
                    scanf("%d",&a);
                    ap = &a;
                    app = &ap;
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    bp = &b;
                    bpp = &bp;
                    s = (**app)-(**bpp);
                    printf("Subtraction of the Numbers is: %d",s);
                }
            case 3:
                {
                    printf("Enter the First Number: ");
                    scanf("%d",&a);
                    ap = &a;
                    app = &ap;
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    bp = &b;
                    bpp = &bp;
                    s = (**app)*(**bpp);
                    printf("Multiplication of the Numbers is: %d",s);
                }
            case 4:
                {
                    printf("Enter the First Number: ");
                    scanf("%d",&a);
                    ap = &a;
                    app = &ap;
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    bp = &b;
                    bpp = &bp;
                    s = (**app)/(**bp);
                    printf("Division of the Numbers is: %d",s);
                }
            }
        }*/
    }
    printf("Enter any Key to Clear Screen: ");
    getch();
    system("cls");
    }
    return 0;
}
/*printf("Enter the First Number: ");
                    scanf("%d",&a);
                    ap = &a;
                    app = &ap;
                    printf("Enter the Second Number: ");
                    scanf("%d",&b);
                    bp = &b;
                    bpp = &bp;
                    s = a+b;*/
