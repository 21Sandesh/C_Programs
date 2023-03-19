#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("Press any character: ");
ch = getch();
printf("\nPressed character is:");
putch(ch);
getch(); /* Holding output */
}
