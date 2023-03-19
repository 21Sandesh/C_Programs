#include <stdio.h>
void orthogonal()
{
  int m, n, p, c, d, k, sum = 0;
  int matrix[10][10], transpose[10][10], product[10][10];

    printf("Enter the no. of rows of matrix: ");
    scanf("%d", &m);
    printf("Enter the no. of columns of matrix: ");
    scanf("%d", &n);

   printf("\nEnter the elements of first array:\n ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of arr[%d][%d]: ",i,j);
            scanf("%d", &matrix[i][j]);
        }  
    }

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      transpose[d][c] = matrix[c][d];

  for (c = 0; c < m; c++)
  {
    for (d = 0; d < n; d++)
    {
      for (k = 0; k < n; k++)
      {
        sum = sum + matrix[c][k]*transpose[k][d];
      }

      product[c][d] = sum;
      sum = 0;
    }
  }

  for (c = 0; c < m; c++)
  {
    for (d = 0; d < m; d++)
    {
      if (c == d)
      {
        if (product[c][d] != 1)
          break;
      }
      else
      {
        if (product[c][d] != 0)
          break;
      }
    }
    if (d != m)
      break;
  }
  if (c != m)
    printf("The matrix isn't orthogonal.\n");
  else
    printf("The matrix is orthogonal.\n");

}