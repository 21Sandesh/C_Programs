#include<stdio.h>
void swap(int *x , int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
    printf("\n\tFirst Number = %d  \n\tSecond Number = %d",*x ,*y);
}

int add(int *x ,int *y)
{
    return (*x)+(*y);
}

int main()
{
    int a , b;
    printf("\tEnter first number: ");
    scanf("%d",&a);
    printf("\tEnter second number: ");
    scanf("%d",&b);
    int d= add(&a,&b);
    printf("\tAddition is: %d",d);
    swap(&a,&b);
    return 0;
}
