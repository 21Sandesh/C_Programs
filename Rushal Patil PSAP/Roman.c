#include<stdio.h>
#include<string.h>
int main()
{
    int number,k,rem,i=0,a;
    char roman[40];
    printf("Enter the Number: ");
    scanf("%d",&number);
    if(number<5000)
    {
        k = number;
        do
        {
            k = k/10;
            i++;
        }
        while(k>=1);
        if(i==4)
        {
            rem = k%1000;
            k = k/1000;
            for(a=0;a<k;a++)
            {
                roman[a]= 'M';
            }
            if(rem>=900)
            {
                a++;
                roman[a] = 'C';
                a++;
                roman[a] = 'M';
                rem = k%100;
                if(rem>=90)
                {
                    a++;
                    roman[a] = 'X';
                    a++;
                    roman[a] = 'C';
                }
            }
        }
        printf("OUTPUT: ")
        //strrev(roman);
        printf("Roman Notation is: ");
        for(int n=0;n<=a;n++)
        {
            printf("%c",roman[n]);
        }
    }
    else
    {
        printf("Not Available for Numbers Greater than 4999");
    }

    return 0;
}
