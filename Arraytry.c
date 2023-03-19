#include<stdio.h>
int main(void)
{
    int a[4];
    int b[4]={1};
    int c[4]={1,2,3,4};
    int i;
    printf("\nArray c:\n");
    for(i = 0; i<=4;i++)
    {
        printf("arr[%d]: %d\n",i,c[i]);
        printf("\nArray c:\n");
    }
    return 0;
}
