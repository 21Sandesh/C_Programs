/*C program to read a one dimensional array, print sum of all elements along with inputted array elements using array-pointer concept.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int arr[50],*arrp[50],i=0,sum=0;
    printf("Enter the Elements in the Array: ");
    scanf("%d",&arr[i]);
    arrp[i] = &arr[i];

    while(arr[i]!=0)
    {
        sum = (sum+(*arrp[i]));
        i++;
        scanf("%d",&arr[i]);
        arrp[i] = &arr[i];
    }

    printf("\n\tArray is: ");
    for(int a=0;a<i;a++)
    {
        printf("%d\t",*arrp[a]);
    }
    printf("\nSum of the Elements inputed in Array is: %d\n\n",sum);
}

