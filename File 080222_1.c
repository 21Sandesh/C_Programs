#include<stdio.h>
void main()
{
    int i,sum=0;
    FILE *f1;
    f1 = fopen("int_sum.bin","w");
    for(i=1;i<10;i++)
    {
        putw(i,f1);
    }
    fclose(f1);
    f1 = fopen("int_sum.bin","r");
    while((i=getw(f1))!=EOF)
    {
        sum = sum+i;
    }
    printf("Binary Sum is: %d\n",sum);
    fclose(f1);
}
