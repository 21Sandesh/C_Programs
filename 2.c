#include <stdio.h>
int main()
{
    int array[4];
    int i;
    int *arrayp[4];
    printf("Print  4 array values :");
    for(i=0;i<4;i++)
    {
        scanf("%d",&array[i]);
        arrayp[i] = &array[i];
    }
    printf("\n Values of array elements: \n");
    for(i=0;i<4;i++)
    {
      printf("Array Address = %d\n",array[i]);
    }
    printf("\n Address of array elements: \n");
    for(i=0;i<4;i++)
    {
      printf("Array Address = %d\n",arrayp[i]);
    }

    return 0;
}
