#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,o,p,arra[100][100],arrb[100][100],ans[100][100];
    char a;
    printf("Enter the Number of Rows in A Matrix: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns in A Matrix: ");
    scanf("%d",&n);
    printf("Enter the Number of Rows in B Matrix: ");
    scanf("%d",&k);
    printf("Enter the Number of Columns in B Matrix: ");
    scanf("%d",&l);
    if(m==k,n==l)
        {
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("\nEnter the %d,%dth Number in First Matrix: ",i,j);
                scanf("%d",&arra[i][j]);
            }
        }
        for(k=1;k<=m;k++)
        {
            for(l=1;l<=n;l++)
            {
                printf("\nEnter the %d,%dth Number in Second Matrix: ",k,l);
                scanf("%d",&arrb[k][l]);
            }
        }
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                ans[i][j] = (arra[i][j] + arrb[k][l]) ;
            }
            }
        for(i=1;i<=m;i++)
        {
            printf("\n");
            for(j=1;j<=n;j++)
            {
                printf("\t%d",ans[i][j]);
            }
        }
        }
        else
        {
            if(m!=l)
            printf("\nAddition of the two Matrix is not possible as no.of Columns in both Matrix is not equal.");
            else
            printf("\nAddition of the two Matrix is not possible as no. of Rows in both Matrix is not equal.");
        }
    return 0;
}
