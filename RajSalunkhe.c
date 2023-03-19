#include <stdio.h>
void main()
{
    char str[50], sub[50];
    int i=0, j=0 , k=50 , flag=0, l1, l2;

    printf("Main string: ");
    gets(str);

    printf("Sub string: ");
    gets(sub);

    l1=strlen(str);
    l2=strlen(sub);


    while(flag!=l2)
    {
        if(i>(l1-1))
        {
            k=1;
            break;

        }

        if(str[i]==sub[j])
        {
            i++;
            j++;
            flag++;
        }
        else
        {
            j=0;
            i=i+1;
            flag=0;
        }

    }
    if(k==1)
    {
        printf("\nSub string not found");
    }
    else if(flag==l2)
    {
        printf("\nSubstring found");
    }
}
