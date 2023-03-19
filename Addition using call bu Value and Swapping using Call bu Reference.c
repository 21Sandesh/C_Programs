#include<stdio.h>
#include<stdlib.h>
int swap(int *a,int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("\tSwapped Numbers are: %d\t%d\n",*a,*b);
}
int add(int x, int y)
{
    int s;
    s = x+y;
    printf("\tAddition of the Given Numbers is: %d\n\n",s);
}
int main()
{
    int input,a,b;
    while(1)
    {
    printf("Enter:\n\t1. Swap Number using Call by Reference\n\t2. Add Numbers using Call by Value\nINPUT: ");
    scanf("%d",&input);
    switch(input)
    {
    case 1:
    {
        printf("\tEnter the Numbers: \n");
        scanf("%d %d",&a,&b);
        printf("\tNumbers Entered are: %d\t%d\n",a,b);
        swap(&a,&b);
    }break;
    case 2:
    {
        printf("\tEnter the Numbers: \n");
        scanf("%d %d",&a,&b);
        printf("\tNumbers Entered are: %d\t%d\n",a,b);
        add(a,b);
    }break;
    default:
    {
        printf("Invalid Input!!!");
    }break;
    }
    }
    return 0;
}
