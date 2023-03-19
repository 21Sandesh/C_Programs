#include<stdio.h>
int main()
{
    int a,b,c,d,r1,r2,c1,c2,arra[100][100],arrb[100][100],mat[100][100];
    printf("\n Enter the Number of Rows in Matrix: ");
    scanf("%d",&r1);
    printf("\n Enter the Number of Columns in Matrix: ");
    scanf("%d",&c1);
    printf("\n Enter the Number of Rows in Matrix: ");
    scanf("%d",&r2);
    printf("\n Enter the Number of Columns in Matrix: ");
    scanf("%d",&c2);
    if(r1==r2,c1==c2)
    {
        for(a=1;a<=r1;a++)
        {
            for(b=1;b<=c1;b++)
            {
                printf("\nEnter the %d, %d th Number in First Matrix: ",a,b);
                scanf("%d",&arra[a][b]);
            }
        }
        for(c=1;c<=r2;c++)
        {
            for(d=1;d<=c2;d++)
            {
                printf("\nEnter the %d, %d th Number in Second Matrix: ",c,d);
                scanf("%d",&arrb[c][d]);
            }
        }
        printf("The Subtraction of the Two Given Matrix is: \n");
        c=1;
        for(a=1;a<=r1;a++)
        {
            d=1;
            for(b=1;b<=c1;b++)
            {
                mat[a][b] = ((arra[a][b])-(arrb[c][d]));
                printf("\t%d",mat[a][b]);
                d++;
            }
            printf("\n");
            c++;
        }
    }
    else
    {
        if(r1!=r2)
        {
            printf("\nSubtraction is not possible as no. of Rows in the Matrix Entered are not Equal.");
        }
        if(c1!=c2)
        {
            printf("\nSubtraction is not possible as no. of Columns in the Matrix Entered are not Equal.");
        }
    }
    return 0;
}
