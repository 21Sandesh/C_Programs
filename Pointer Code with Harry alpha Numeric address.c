#include<stdio.h>
int main()
{
    int a=21,*pa;
    float b=21.7,*pb;
    double c=21.07,*pc;
    char d='S',*pd;
    printf("\nAddress of Integer is: %x",pa);
    printf("\nAddress of Float is: %x",pb);
    printf("\nAddress of Double is: %x",pc);
    printf("\nAddress of Char is: %x",pd);
    pa--;
    pb--;
    pc--;
    pd--;
    printf("\n");
    printf("\nAddress of Integer is: %x",pa);
    printf("\nAddress of Float is: %x",pb);
    printf("\nAddress of Double is: %x",pc);
    printf("\nAddress of Char is: %x",pd);
    pa = pa+2;
    pb = pb+2;
    pc = pc+2;
    pd = pd+2;
    printf("\n");
    printf("\nAddress of Integer is: %x",pa);
    printf("\nAddress of Float is: %x",pb);
    printf("\nAddress of Double is: %x",pc);
    printf("\nAddress of Char is: %x",pd);
    return 0;
}
