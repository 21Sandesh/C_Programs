#include<stdio.h>
#include<string.h>
#include<stdio.h>
#define number 7
struct student
{
    char *name[number];
}s1;
int main()
{
    char *name[number]={"Sandesh",
                    "AndeshS",
                    "NdeshSa",
                    "DeshSan",
                    "EshSand",
                    "ShSande",
                    "HSandes"};
    for(int i=0;i<number;i++)
    {
        printf("%s",name[i]);
        printf("\n");
    }
    return 0;
}
