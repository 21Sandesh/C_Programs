#include<stdio.h>
#include<stdlib.h>
void swap(int x, int y)
{
    int *px,*py,z,*pz;
    px = &x; py = &y; pz = &z;
    z = *px; x = *py; y = *pz;
}
int main()
{
    int a,b;
    while(1)
    {
        printf("\tEnter the First Number A  =  ");
        scanf("%d",&a);
        printf("\tEnter the Second Number B =  ");
        scanf("%d",&b);
        swap(a,b);
        printf("\tEnter the First Number A  =  %d\n",b);
        printf("\tEnter the Second Number B =  %d\n",a);
        scanf("%d",&a);
        system("cls");
    }
}
