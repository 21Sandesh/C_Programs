//Multiplication of matrix.
#include <stdio.h>
 
void multiplication()
{
  int m, n, p, q,c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
  
 
  printf("\tEnter number of rows in first matrix: ");
  scanf("%d", &m);
  printf("\tEnter number of columns in first matrix: ");
  scanf("%d", &n);
  
  printf("Enter elements of first matrix\n");

  for (c = 0; c < m; c++)
  {
      for (int d = 0; d < n; d++)
      {
          printf("Enter a[%d][%d]: ",c,d);
          scanf("%d", &first[c][d]);
      } 
  }
 
  printf("\tEnter number of rows of second matrix: ");
  scanf("%d", &p);
  printf("\tEnter number of columns of second matrix: ");
  scanf("%d", &q);
 
  if (n != p)
    printf("Multiplication not possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");
    for (c = 0; c < p; c++)
  {
      for (int d = 0; d < q; d++)
      {
          printf("Enter b[%d][%d]: ",c,d);
          scanf("%d", &second[c][d]);
      } 
  }
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }

}