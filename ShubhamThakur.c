#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewatergun(char you, char comp)
{

    // return 1 if you win,-1 if you loss and 0 if draw.

    // Draw Condition
    if (you == comp)
    {
        return 0;
    }

    // non-draw condition
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    int random,input,counterw=0,counterl=0,counterd=0;
    printf("Enter: \n\t1. Play Game\n\t2. View Records\nINPUT: ");
    while(1)
    {
        scanf("%d",&input);
    switch(input)
    {
    case 1:
        {
        srand(time(NULL));
        random = rand();
    int number = (random % 10);
    if (number < 3)
    {
        comp = 's';
    }
    if (number > 3 && number < 6)
    {
        comp = 'g';
    }
    else
    {
        comp = 'w';
    }
    printf("Enter:\n\t's' for Snake\n\t'g' for Gun\n\t'w' for Water\nINPUT: ");
    fflush(stdin);
    scanf("%c", &you);
    int result;
    result = snakewatergun(you, comp);
    printf("You chose %c and computer chose %c.\n\n", you, comp);

    if (result == 0)
    {
        printf("\t\tGame draw\n");
        counterd++;
    }
    else if (result == 1)
    {
        printf("\t\tYou win\n");
        counterw++;
    }
    else
    {
        printf("\t\tYou lose\n");
        counterl++;
    }
    printf("\n1 To Retry\n2 To View Records\nINPUT: ");
        }break;
    case 2:
        {
            printf("\tNumber of Wins: %d\n",counterw);
            printf("\tNumber of Loses: %d\n",counterl);
            printf("\tNumber of Draws: %d\n",counterd);
            printf("Enter 1 to Play!\nINPUT: ");
        }break;
    default:
        {
            printf("\nInvalid Input\n\n");
            printf("Enter: \n\t1. Play Game\n\t2. View Records\nINPUT: ");
        }break;
        }
    }
    return 0;
}
