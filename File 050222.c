#include<stdio.h>
void main()
{
    FILE *f1;
    char c;
    f1 = fopen("INPUT.txt","w");
    while((c=getchar())!=EOF)
    {
        putc(c,f1);
    }
    fclose(f1);
    f1 = fopen("INPUT.txt","r");
    while((c=getc(f1))!= EOF)
    {
        printf("%c",c);
    }
    fclose(f1);
}
