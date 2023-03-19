#include<Stdio.h>
int main()
{
    int i,*p[10];
    int q[10];
    for(i=0;i<3;i++)
    {
        printf("\nEnter the Number: ");
        scanf("%d",&p[i]);
        p[i] = &q[i];
    }
    for(i=0;i<3;i++)
    {
        printf("\nOutput : %p",p[i]);
    }
    return 0;
}
