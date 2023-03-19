#include<stdio.h>
#include<stdlib.h>
int addition(int k, int b[]){
    int add=0,i;
    for(i=0; i<k; i++){
        add += b[i];
    }
    return add;
}

int main()
{
    int a[30], i, n, j, sum;
    printf("Enter how many do you want to enter.= ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Enter no. %d = ", i);
        scanf("%d", &a[i]);
    }

    sum = addition(i, a);

    printf("Addition of all numbers is %d", sum);


    return 0;
}
