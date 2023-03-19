#include<stdio.h>
#include<stdlib.h>
float average(float num[], int n)
{
    int i=0;
    float sum=0,avg;
    for(i=0;i<n;i++)
    {
        sum = (sum+num[i]);
    }
    avg = (sum/n);
    printf("Average is: %f",avg);
    //return (avg);
}
void main()
{
    int i=0,n=0;
    float num[10],av;
    printf("Enter the Elements: ");
    scanf("%f",&num[i]);
    while(num[i]!=0.1)
    {
        i++;
        scanf("%f",&num[i]);
    }
    average(num[n],n);
    //printf("The Average of Number entered is: %.2f",avg);
}
