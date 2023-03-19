#include<stdio.h>
#include<stdlib.h>
int main()
{
    int clr,a,b,c,d,r1,c1,r2,c2,arra[100][100],arrb[100][100],mat[100][100];
    while(1)
    {
        printf("\n Enter Number of Rows in First Matrix: ");
    scanf("%d",&r1);
    printf("\n Enter Number of Columns in First Matrix: ");
    scanf("%d",&c1);
    printf("\n Enter Number of Rows in First Matrix: ");
    scanf("%d",&r2);
    printf("\n Enter Number of Columns in First Matrix: ");
    scanf("%d",&c2);
    if(c1==r2)
    {
        printf("Enter the First Matrix: \n");
        for(a=1;a<=r1;a++)
    {
        for(b=1;b<=c1;b++)
        {
            //printf("\nEnter the %d, %dth Element in First Matrix: ",a,b);
            scanf("%d",&arra[a][b]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Enter the Second Matrix: \n");
    for(c=1;c<=r2;c++)
    {
        for(d=1;d<=c2;d++)
        {
            //printf("\nEnter the %d, %dth Element in Second Matrix: ",c,d);
            scanf("%d",&arrb[c][d]);
            printf("\t");
        }
        printf("\n");
    }
    for(a=1;a<=r1;a++)
    {
        for(d=1;d<=c2;d++)
        {
            mat[a][d] = 0;
        }
    }
    c = 1;
    for(a=1;a<=r1;a++)
    {
        for(d=1;d<=c2;d++)
        {
            for(b=1;b<=c1;b++)


                {
                    mat[a][d] = (mat[a][d]+(arra[a][b]*arrb[b][d]));
                }

        }
        c++;
    }
    printf("\n Multiplication of the given Matrix is: \n");
    for(a=1;a<=r1;a++)
    {
        for(d=1;d<=c2;d++)
        {
            printf("\t%d",mat[a][d]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("\nMatrix Multiplication is not Possible as No. of Columns in First Matrix is not Equal to No. of Rows in Second Matrix.");
    }
    printf("Enter any Number to clear Screen");
    scanf("%d",&clr);
    system("cls");
    }
    return 0;
}
