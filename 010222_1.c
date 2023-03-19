#include<stdio.h>
void change(int z)
{
    printf("Before adding value inside function z= %d\n",z);
    z = z+100;
    printf("After adding value inside function z= %d \n",z);
    return z;
}
int main()
{
    int x=100;
    printf("Before function call x= %d \n",x);
    change(x);
    printf("After function call x= %d \n",x);
    return 0;
}
