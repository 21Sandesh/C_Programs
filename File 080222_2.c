#include<stdio.h>
void main()
{
    int i, sum=0;
    FILE *f2;
    f2 = fopen("int_sumd.txt","w");
    for(i=1;i<10;i++)
    {
        fprintf(f2,"%d\n",i);
    }
    fclose(f2);
    f2 = fopen("int_sumd.txt","r");
    while(fscanf(f2,"%d",&i)!=EOF)
    {
        sum +=i;
        printf("text file: i=%d\n",i);
    }
    printf("Summation is: %d\n",sum);
    fclose(f2);
}
