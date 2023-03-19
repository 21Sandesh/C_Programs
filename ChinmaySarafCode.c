#include <stdio.h>

int main()
{
int a,b,sum,sub,mul;
int p1,*p2,**x,**y;
p1=&a;
p2=&b;
*x=&p1;
*y=&p2;

printf("entre  the  value of a:");
scanf("%d",&a);

printf("entre  the  value of b:");
scanf("%d",&b);

sum= **x + **y;
sub= **x - **y;
mul= **x * **y;

printf("the sum of two no. is:%d \n",sum);
printf("the sub of two no. is:%d \n",sub);
printf("the mul of two no. is:%d \n",mul);
    return 0;
}
