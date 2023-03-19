#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,o,p,q,r,arra[100][100],arrb[100][100],sum[100][100];
    printf("Enter the no. of Rows in First Matrix: ");
    scanf("%d",&m);
    printf("Enter the no. of Columns in First Matrix: ");
    scanf("%d",&n);
    printf("Enter the no. of Rows in Second Matrix: ");
    scanf("%d",&o);
    printf("Enter the no. of Columns in Second Matrix: ");
    scanf("%d",&p);
    for(q=1;q<=o;q++)
    {
        for(r=1;r<=o;r++)
        {
            sum[q][r]=0;
        }
    }
    if(n==o)
    {
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("Enter the %d,%dth Element in the First Matrix: ",i,j);
                scanf("%d",&arra[i][j]);
            }
        }
        for(k=1;k<=o;k++)
        {
            for(l=1;l<=p;l++)
            {
                printf("Enter the %d,%dth Element in the Second Matrix: ",k,l);
                scanf("%d",&arrb[k][l]);
            }
        }
        for(q=1;q<=o;q++)
        for(i=1;i<=m;i++)
        {
            for(r=1;r<=o;r++)
            for(l=1;l<=p;l++)
            {
                for(j=1;j<=n;j++)
                for(k=1;k<=o;k++)
                {
                    sum[q][r] = sum[q][r] + (arra[i][j]*arrb[k][l]);
                }
            }
        }
        for(q=1;q<=o;q++)
        {
            for(r=1;r<=n;r++)
            {
                printf("\t%d",sum[q][r]);
            }
            printf("\n");
        }
    }

    return 0;
}
