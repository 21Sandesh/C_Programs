#include<stdio.h>
#include<string.h>
#include<stdio.h>
#define number 7
struct alphabets
{
    char *lns[number],*lna[number],*lnb[number],*lnc[number],*lnd[number];
    char *lne[number],*lnf[number],*lng[number],*lnh[number],*lni[number];
    char *lnj[number],*lnk[number],*lnl[number],*lnm[number],*lnn[number];
    char *lno[number],*lnp[number],*lnq[number],*lnr[number],*lnt[number];
    char *lnu[number],*lnv[number],*lnw[number],*lnx[number],*lny[number];
    char *lnz[number];
}a1;
int main()
{
    char *lns[number]={
        " ..... ",
        ".     .",
        ".      ",
        " ..... ",
        "      .",
        ".     .",
        " ..... ",
        };
    char *lna[number]={
        " ..... ",
        ".     .",
        ".     .",
        ". ... .",
        ".     .",
        ".     .",
        ".     .",
    };
    char *lnb[number]={
        " ..... ",
        ".     .",
        ".     .",
        ". .... ",
        ".     .",
        ".     .",
        "...... ",
    };
    char *lnc[number]={
        " ......",
        ".      ",
        ".      ",
        ".      ",
        ".      ",
        ".      ",
        " ......",
    };
    char *lnd[number]={
        "...... ",
        ".     .",
        ".     .",
        ".     .",
        ".     .",
        ".     .",
        "...... ",
    };
    char *lne[number]={
        ".......",
        ".      ",
        ".      ",
        ".....  ",
        ".      ",
        ".      ",
        ".......",
    };
    char *lnf[number]={
        ".......",
        ".      ",
        ".      ",
        ".....  ",
        ".      ",
        ".      ",
        ".      ",
    };
    char *lng[number]={
        " ......",
        ".      ",
        ".      ",
        ".  ... ",
        ".     .",
        ".     .",
        " ..... ",
    };
    char *lnh[number]={
        ".     .",
        ".     .",
        ".     .",
        ". ... .",
        ".     .",
        ".     .",
        ".     .",
    };
    char *lni[number]={
        ".......",
        "   .   ",
        "   .   ",
        "   .   ",
        "   .   ",
        "   .   ",
        ".......",
    };
    char *lnj[number]={
        ".......",
        "   .   ",
        "   .   ",
        "   .   ",
        "   .   ",
        ".  .   ",
        " ...   ",
    };
    char *lnk[number]={
        ".    . ",
        ".   .  ",
        ".  .   ",
        ". .    ",
        ".. .   ",
        ".   .  ",
        ".    . ",
    };
    char *lnl[number]={
        ".      ",
        ".      ",
        ".      ",
        ".      ",
        ".      ",
        ".      ",
        " ......",
    };
    char *lnm[number]={
        ".     .",
        "..   ..",
        ". . . .",
        ".  .  .",
        ".     .",
        ".     .",
        ".     .",
    };
    char *lnn[number]={
        ".     .",
        "..    .",
        ". .   .",
        ".  .  .",
        ".   . .",
        ".    ..",
        ".     .",
    };
    char *lno[number]={
        " ..... ",
        ".     .",
        ".     .",
        ".     .",
        ".     .",
        ".     .",
        " ..... ",
    };
    char *lnp[number]={
        "...... ",
        ".     .",
        ".     .",
        ".....  ",
        ".      ",
        ".      ",
        ".      ",
    };
    char *lnq[number]={
        " ..... ",
        ".     .",
        ".     .",
        ".     .",
        ".  .  .",
        " ......",
        "     . ",
    };
    char *lnr[number]={
        "...... ",
        ".     .",
        ".     .",
        ".....  ",
        ".  .   ",
        ".   .  ",
        ".    . ",
    };
    char *lnt[number]={
        ".......",
        "   .   ",
        "   .   ",
        "   .   ",
        "   .   ",
        "   .   ",
        "   .   ",
    };
    char *lnu[number]={
        ".     .",
        ".     .",
        ".     .",
        ".     .",
        ".     .",
        ".     .",
        " ..... ",
    };
    char *lnv[number]={
        ".     .",
        ".     .",
        ".     .",
        ".     .",
        " .   . ",
        "  . .  ",
        "   .   ",
    };
    char *lnw[number]={
        ".     .",
        ".     .",
        ".     .",
        ".  .  .",
        ". . . .",
        "..   ..",
        ".     .",
    };
    char *lnx[number]={
        ".     .",
        " .   . ",
        "  . .  ",
        "   .   ",
        "  . .  ",
        " .   . ",
        ".     .",
    };
    char *lny[number]={
        ".     .",
        " .   . ",
        "  . .  ",
        "   .   ",
        "   .   ",
        "   .   ",
        "   .   ",
    };
    char *lnz[number]={
        ".......",
        "     . ",
        "    .  ",
        "   .   ",
        "  .    ",
        " .     ",
        ".......",
    };
    for(int i=0;i<number;i++)
    {
        printf("%s %s %s %s %s %s",lna[i],lnb[i],lnc[i],lnd[i],lne[i],lnf[i]);
        printf("\n");
    }
    printf("\n---------------------------------------\n");
    for(int i=0;i<number;i++)
    {
        printf("%s %s %s %s %s %s",lng[i],lnh[i],lni[i],lnj[i],lnk[i],lnl[i]);
        printf("\n");
    }
    printf("\n---------------------------------------\n");
    for(int i=0;i<number;i++)
    {
        printf("%s %s %s %s %s %s",lnm[i],lnn[i],lno[i],lnp[i],lnq[i],lnr[i]);
        printf("\n");
    }
    printf("\n---------------------------------------\n");
    for(int i=0;i<number;i++)
    {
        printf("%s %s %s %s %s %s",lns[i],lnt[i],lnu[i],lnv[i],lnw[i],lnx[i]);
        printf("\n");
    }
    printf("\n---------------------------------------\n");
    for(int i=0;i<number;i++)
    {
        printf("%s %s",lny[i],lnz[i]);
        printf("\n");
    }
    return 0;
}
