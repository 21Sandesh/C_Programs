#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,*pa,b,*pb,sum,*psum;
    printf("Enter the First Number: ");
    scanf("%d",&a);
    printf("Enter the Second Number: ");
    scanf("%d",&b);
    pa = &a;
    pb = &b;
    sum = (*pa)+(*pb);
    psum = &sum;
    printf("\nSum of the Two Numbers is: %d",sum);
    printf("\nAddress at which Sum is stored is: %p",pa);
    return 0;
}
