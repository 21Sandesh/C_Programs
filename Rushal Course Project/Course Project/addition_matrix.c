// Addition of matrix.
#include<stdio.h>
void addition()
{
    int row1 , column1;
    printf("Enter the no. of rows of matrix: ");
    scanf("%d", &row1);
    printf("Enter the no. of columns of matrix: ");
    scanf("%d", &column1);
    int arr1[row1][column1],arr2[row1][column1],sum[row1][column1];
    printf("\nEnter the elements of first matrix:\n ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("Enter the value of arr1[%d][%d]: ",i,j);
            scanf("%d", &arr1[i][j]);
        }  
    }
    printf("\nEnter the elements of second matrix: \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("Enter the value of arr2[%d][%d]: ",i,j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("\nResulatant matrix is:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

}