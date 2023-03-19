#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int input;
    while(1)
    {
        printf("Enter:\n\t1.Write Records\n\t2.Read Records\n\t3.Edit Record\n\t4.Delete Record\nINPUT: ");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            {
                write();
            }
            break;
        case 2:
            {
                read();
            }
            break;
    }
}
