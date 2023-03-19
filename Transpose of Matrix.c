#include<stdio.h>
int main()
{
    int a,b,r1,r2,c1,c2,arra[100][100],arrb[100][100];
    printf("\n Enter Number of Rows in First Matrix:     ");
    scanf("%d",&r1);
    printf("\n Enter Number of Columns in First Matrix:  ");
    scanf("%d",&c1);
    printf("\nEnter the Matrix: \n");
    for(a=1;a<=r1;a++)
        {
            for(b=1;b<=c1;b++)
            {
                printf("\nEnter the %d, %d th Number in First Matrix: ",a,b);
                scanf("%d",&arra[a][b]);
            }
        }
    printf("The Transpose of Given Matrix is: \n");
    for(b=1;b<=r1;b++)
        {
            for(a=1;a<=c1;a++)
            {
                printf("%d \t",arra[a][b]);
            }
            printf("\n");
        }
}
