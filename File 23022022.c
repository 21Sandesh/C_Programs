#include<stdio.h>
#include<stdlib.h>
int i=-1,*ip,arr[20];
void asc(int *a, int n)
{
    int temp,i,j;
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void desc(int *a, int n)
{
    int temp,i,j;
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(a[j]<a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void write()
{
    FILE *file;
    file = fopen("F1.txt","a");
    printf("Enter the Numbers: ");
    do
    {
        i++;
        scanf("%d",&arr[i]);
    }
    while(arr[i]!=0);
    ip = &i;
    printf("OUTPUT: %d",i);
}
void read()
{
    int n=0;
    FILE *file;
    file = fopen("F1.txt","r");
    if(file==NULL)
    {
        printf("Can't Open File");
        exit(1);
    }
    i = *ip;
    printf("OUTPUT: %d",i);
    scanf("%d",&n);
    while(n!=i)
    {
        printf("%d\n",arr[n]);
        n++;
    }
}
int main()
{

    int input;
    printf("Enter To perform Following Operations\n\t1.Write\n\t2.Read\nINPUT: ");
    scanf("%d",&input);
    while(1)
    {
        switch(input)
    {
    case 1:
        {

            write();
            asc(arr,i);
            break;
        }
    case 2:
        {
            read();
            break;

        }
    }
    }
}




/*int main()
{
    int n=(-1),arr[10];
    printf("Enter the Numbers: ");
    do
    {
        n++;
        scanf("%d",&arr[n]);
    }
    while((arr[n])!=0);
    printf("Numbers in Ascending Order: ");
    asc(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("Numbers in Descending Order: ");
    desc(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
    return 0;
}*/

