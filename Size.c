#include<stdio.h>
int main()
{
    int a,sizea,sizeb,sizec,sized;
    float b;
    char c;
    double d;
    a = 21;
    b = 21.07;
    c = 'S';
    d = 21.072003;
    sizea = sizeof(a);
    sizeb = sizeof(b);
    sizec = sizeof(c);
    sized = sizeof(d);
    printf("Value of a is: %d\n",a);
    printf("Size of a is: %d\n",sizea);
    printf("Value of b is: %f\n",b);
    printf("Size of b is: %d\n",sizeb);
    printf("Value of c is: %c\n",c);
    printf("Size of c is: %d\n",sizec);
    printf("Value of d is: %f\n",d);
    printf("Size of d is: %d\n",sized);
}
