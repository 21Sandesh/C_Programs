#include<stdio.h>

void ascending(int *a, int n)
{
    int temp, i, j;
    for(i=0;i<(n-1);i++){

        for(j=0;j<(n-1-i);j++){

            if(a[j]>a[j+1]){

                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }

        }
    }
}
void descending(int *a, int n)
{
    int temp, i, j;
    for(i=0;i<(n-1);i++){

        for(j=0;j<(n-1-i);j++){

            if(a[j]<a[j+1]){

                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }

        }
    }
}
int main()
{
    int arr1[15],arr2[15],merge[30],a=0,b=0,j=0,input;
    printf("Enter the First Array: ");
    scanf("%d",&arr1[a]);
    while(arr1[a] != 0)
    {
        a++;
        scanf("%d",&arr1[a]);
    }
    printf("Enter the Second Array: ");
    scanf("%d",&arr2[b]);
    while(arr2[b] != 0)
    {
        b++;
        scanf("%d",&arr2[b]);
    }
    printf("Enter: \n1. Sort Both Arrays in Ascending Order\n2. Sort Both Arrays in Descending Order\n");
    scanf("%d",&input);
    if(input == 1)
    {
        ascending(arr1, a);
        ascending(arr2, b);
        printf("\nFirst Array: ");
        for(int i=0;i<a;i++)
        {
            printf("%d\t",arr1[i]);
        }
        printf("\nSecond Array: ");
        for(int i=0;i<b;i++)
        {
            printf("%d\t",arr2[i]);
        }
        printf("\n");
    }
    if(input == 2)
    {
        descending(arr1, a);
        descending(arr2, b);
        printf("\nFirst Array: ");
        for(int i=0;i<a;i++)
        {
            printf("%d\t",arr1[i]);
        }
        printf("\nSecond Array: ");
        for(int i=0;i<b;i++)
        {
            printf("%d\t",arr2[i]);
        }
        printf("\n");
    }
    if(input != 1 && input != 2)
    {
        printf("\nEnter valid Input");
    }
    for(int i=0; i<(a);i++)
    {
        merge[i] = arr1[i];
    }
    for(int i=a; i<(a+b);i++)
    {
        merge[i] = arr2[j];
        j++;
    }
    printf("\n\nEnter 1. To Print Merged array in Descending Order\n2. To Print Merged array in Ascending order\n");
    scanf("%d",&input);
    if(input == 1)
    {
        descending(merge, (a+b));
    }
    if(input == 2)
    {
        ascending(merge, (a+b));
    }
    printf("Merged Array: ");
    for(int i=0; i<(a+b); i++)
    {
        printf("%d\t",merge[i]);
    }
    return 0;
}
