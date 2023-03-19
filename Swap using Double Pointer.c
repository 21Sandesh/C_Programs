#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void swap(int **app, int **bpp)
{
    int temp;
    temp = **app;
    **app = **bpp;
    **bpp = temp;
}
int main()
{
    int a,b,*ap,*bp,**app,**bpp;
    printf("Enter the First Number: ");
    scanf("%d",&a);
    ap = &a;
    printf("Enter the Second Number: ");
    scanf("%d",&b);
    bp = &b;
    system("cls");
    printf("\nFirst Number:  %d", a);
    printf("\nSecond Number: %d", b);
    swap(&ap,&bp);
    app = &ap;
    bpp = &bp;
    printf("\n\nAfter Swapping");
    printf("\nFirst Number:  %d",**app);
    printf("\nSecond Number: %d\n\n",**bpp);
    return 0;
}
