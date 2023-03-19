#include<stdio.h>
int main()
{
    int a,b,c=0,r1,c1,mat[10][10],trans[10][10];
    printf("Enter the Number of Rows in A Matrix: ");
    scanf("%d",&r1);
    printf("Enter the Number of Columns in A Matrix: ");
    scanf("%d",&c1);
    if(r1==c1)
    {
        for(a=0;a<r1;a++)
    {
        for(b=0;b<c1;b++)
        {
            printf("Enter the %d, %d th Elements of the Matrix: ",a+1,b+1);
            scanf("%d",&mat[a][b]);
            trans[b][a]= mat[a][b];
        }
    }
    for(a=0;a<r1;a++)
        {
            for(b=0;b<c1;b++)
            {
                if(mat[a][b]!=trans[a][b])
                {
                    c++;
                }
            }
        }
        if(c==0)
        {
            printf("Entered Matrix is Symmetric");
        }
        else
        {
            printf("Entered Matrix is not Symmetric");
        }
    }
    else
    {
        printf("Input Matrix is not Square Matrix");
    }
    return 0;
}
