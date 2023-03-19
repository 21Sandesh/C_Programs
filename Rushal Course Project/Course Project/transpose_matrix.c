// Transpose of matrix
#include<stdio.h>
void transpose_matrix()
{
    int a, b;
    printf("Enter the no. of rows of matrix: ");
    scanf("%d", &a);
    printf("Enter the no. of columns of matrix: ");
    scanf("%d", &b);
    int arr[a][b], transpose[b][a];
    printf("\nEnter the elements of first array:\n ");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the value of arr[%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }  
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t",arr[i][j]);
        }  
        printf("\n");
    }

    for (int i = 0; i < a; i++) //a=2
    {
        for (int j = 0; j < b; j++) // b=3
        {
            transpose[j][i]= arr[i][j];
        }
    }
    printf("\nTranspose of matrix is: \n");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }

}
