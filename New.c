#include<stdio.h>
int main()
{
    int a=21,*pa;
    float b=21.7,*pb;
    double c=21.07,*pc;
    char d='S',*pd;
    printf("\nAddress of Integer is: %d",pa);
    printf("\nAddress of Float is: %d",pb);
    printf("\nAddress of Double is: %d",pc);
    printf("\nAddress of Char is: %d",pd);
    pa--;
    pb--;
    pc--;
    pd--;
    printf("\n");
    printf("\nAddress of Integer is: %d",pa);
    printf("\nAddress of Float is: %d",pb);
    printf("\nAddress of Double is: %d",pc);
    printf("\nAddress of Char is: %d",pd);
    pa = pa+2;
    pb = pb+2;
    pc = pc+2;
    pd = pd+2;
    printf("\n");
    printf("\nAddress of Integer is: %d",pa);
    printf("\nAddress of Float is: %d",pb);
    printf("\nAddress of Double is: %d",pc);
    printf("\nAddress of Char is: %d",pd);
    return 0;
}
