#include   <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include   <conio.h>
#include  <direct.h>
struct launchdata
{
    char rocketname[11];
    int launches;
}rock[4];
int main()
{
    for(int i2=0;i2<=4;i2++)
    {
        rock[i2].launches = 0;
    }
    FILE *file;
    int DETECT;
    int i1,n=0,k,j1=0,userl,passl,userc,passc;
    char keyuser[7]={'S','a','n','d','e','s','h'},user[20],password[30];
    char keypassword[11] = {'3','7','9','1','S','a','n','d','e','s','H'};
    char *rocketname[5][10]= {{"PSLV-G"}, {"PSLV-CA"}, {"PSLV-XL"}, {"GSLV-MkII"}, {"GSLV-MkIII"}};
    for(int i2=0;i2<=4;i2++)
    {
        strcpy(rock[i2].rocketname,*rocketname[(i2)]);
    }
    while(1)
    {
        printf("\n\t\t|User Login|\n");
        printf("___________________________________________\n");
        printf("|\tUser ID:  ");
        fflush(stdin);
        gets(user);
        printf("|\tPassword: ");
        scanf("%s",&password);
        printf("|__________________________________________");
        userl = strlen(user);
        passl = strlen(password);
        if(userl == 7 && passl == 11)
        {
            userc=0;
            passc=0;
            for(int a=0; a<7; a++)
            {
                if(user[a] == keyuser[a])
                {
                    userc++;
                }
            }
            for(int a=0; a<11; a++)
            {
                if(password[a] == keypassword[a])
                {
                    passc++;
                }
            }
            if(userc == 7 && passc == 11)
            {
                printf("\n\t*Logged in Successfully!*\n");
                printf("Press any key to Continue");
                getch();
                system("cls");
//Login Ends
//Program Starts
                while(2)
                {
                    printf("User Logged In\n");
                    printf("\n\tEnter:\n\t1.Rockets Launched\n\t2.Launch New Rocket\nInput: ");
                    scanf("%d",&i1);
                    switch(i1)
                    {
                    case 1:
                        {
                            file = fopen("Launchexp1.txt","r");
                            if(file==NULL)
                            {
                                printf("\t\tCan't Read the File");
                                getch();
                                exit(1);
                            }
                            {
                                    for(int k=0;k<5;k++)
                                    {
                                        printf("\t\tName of Rocket: %s\n",rock[k].rocketname);
                                        printf("\t\tTotal launches: %d\n",rock[k].launches);
                                    }
                            }
                            fclose(file);
                            break;
                        }
                    case 2:
                        {
                            file = fopen("Launchexp1.txt","a");
                            printf("\t\tEnter:\n\t\t1.PSLV-G\n\t\t2.PSLV-CA\n\t\t3.PSLV-XL\n\t\t4.GSLV-MkII\n\t\t5.GSLV-MkIII\nInput: ");
                            scanf("%d",&n);
                            switch(n)
                            {
                            case 1:
                                {
                                    j1 = n-2;
                                    rock[j1+1].launches++;
                                }break;
                            case 2:
                                {
                                    j1 = n-2;
                                    rock[j1+1].launches++;
                                }break;
                            case 3:
                                {
                                    j1 = n-2;
                                    rock[j1+1].launches++;
                                }break;
                            case 4:
                                {
                                    j1 = n-2;
                                    rock[j1+1].launches++;
                                }break;
                            case 5:
                                {
                                    j1 = n-2;
                                    rock[j1+1].launches++;
                                }break;
                            default :
                                {
                                    printf("Enter Valid Input");
                                }break;
                            }
                            {
                                //gotoxy(300,350);
                                printf("\n\n\n\n\n\n");
                                printf("\n\t\t\t   //---------------------||		");
                                //gotoxy(300,360);
                                printf("\n\t\t\t   || Program Loading.... ||		");
                                //gotoxy(300,370);
                                printf("\n\t\t\t   ||---------------------//		");
                                //gotoxy(550,450);
                                delay(4000);
                                //cleardevice();
                                int gd=DETECT, gm, i, j;
                                initgraph(&gd,&gm,"c:\\tc\\bgi");
                                rectangle(50,-35,180,390);        // building
                                outtextxy(0,400,"Counting");
                                line(180,390,230,410);            // link line b/w suporter & building
                                outtextxy(230,75,"=====-(");      // catch clip
                                outtextxy(230,82,"      \\");     //   - - -
                                line(230,70,230,410);             // suporter
                                line(370,70,370,410);             // suporter

                                //	Rocket design
                                line(300,40,280,70);
                                line(300,40,320,70);
                                rectangle(280,70,320,110);
                                setcolor(6);
                                circle(300,90,9);
                                setcolor(WHITE);
                                line(280,110,290,130);
                                line(320,110,310,130);
                                line(290,130,310,130);
                                line(290,130,290,185);
                                line(310,130,310,185);
                                line(290,185,310,185);
                                line(290,185,280,195);
                                line(310,185,320,195);
                                line(280,195,280,295);
                                line(320,195,320,295);
                                //	  Name of Country
                                setcolor(RED);
                                outtextxy(297,135,"I");
                                outtextxy(297,145,"N");
                                outtextxy(297,155,"D");
                                outtextxy(297,165,"I");
                                outtextxy(297,175,"A");

                                //	  Flag in rocket body
                                setcolor(RED);
                                rectangle(285,210,315,215);
                                setcolor(WHITE);
                                rectangle(285,216,315,220);
                                setcolor(BLUE);
                                circle(300,218,3);
                                circle(300,218,2);
                                circle(300,218,1);
                                setcolor(GREEN);
                                rectangle(285,221,315,226);
                                setcolor(12);
                                outtextxy(284,240,"ISRO");        // Msg print on rocket body
                                outtextxy(281,265,rocketname[j1][10]);       // - - - - - - - - - - - - -
                                setcolor(WHITE);
                                line(280,295,270,305);
                                line(320,295,330,305);
                                line(270,285,270,385);
                                line(330,285,330,385);
                                line(270,385,280,370);
                                line(330,385,320,370);
                                outtextxy(280,370,"   ::::   ");
                                setcolor(19);
                                outtextxy(282,290,"=====");
                                outtextxy(270,305,"--------");
                                setfillstyle(3,5);
                                bar3d(260,388,335,420,10,10);     // Stand on which rocket situated
                                setcolor(WHITE);
                                delay(500);
                                outtextxy(40,450,"10");           // counting starts from here ||
                                delay(500);                       //			       \/
                                outtextxy(80,450,"9");
                                delay(500);
                                outtextxy(120,450,"8");
                                delay(500);
                                outtextxy(160,450,"7");
                                delay(500);
                                outtextxy(200,450,"6");
                                delay(500);
                                outtextxy(240,450,"5");
                                delay(500);
                                outtextxy(280,450,"4");
                                delay(500);
                                outtextxy(320,450,"3");
                                delay(500);
                                outtextxy(360,450,"2");
                                delay(500);
                                outtextxy(400,450,"1");
                                delay(500);
                                outtextxy(440,450,"0");
                                delay(100);
                                outtextxy(450,450,"::");                   // counting ends here
                                for(i=0;i<=10;i++)                        // looping for color changing
                                    {
                                        setcolor(i);
                                        outtextxy(460,450,"  Program Activated");
                                        delay(100);
                                    }
                                for(i=0;i<=50;i+=2)                       // looping for open lock chain
                                    {
                                        rectangle(50,-35,180,390);        // building
                                        outtextxy(0,400,"Counting");
                                        line(180,390,230,410);            // link line b/w suporter & building
                                        line(230,70,230,410);             // suporter
                                        line(370,70,370,410);             // suporter
                                        line(300,40,280,70);
                                        line(300,40,320,70);
                                        rectangle(280,70,320,110);
                                        setcolor(6);
                                        circle(300,90,9);
                                        setcolor(WHITE);
                                        line(280,110,290,130);
                                        line(320,110,310,130);
                                        line(290,130,310,130);
                                        line(290,130,290,185);
                                        line(310,130,310,185);
                                        line(290,185,310,185);
                                        line(290,185,280,195);
                                        line(310,185,320,195);
                                        line(280,195,280,295);
                                        line(320,195,320,295);
                                        //	  Name of Country
                                        setcolor(RED);
                                        outtextxy(297,135,"I");
                                        outtextxy(297,145,"N");
                                        outtextxy(297,155,"D");
                                        outtextxy(297,165,"I");
                                        outtextxy(297,175,"A");
                                        //	  Flag
                                        setcolor(RED);
                                        rectangle(285,210,315,215);
                                        setcolor(WHITE);
                                        rectangle(285,216,315,220);
                                        setcolor(BLUE);
                                        circle(300,218,3);
                                        circle(300,218,2);
                                        circle(300,218,1);
                                        setcolor(GREEN);
                                        rectangle(285,221,315,226);
                                        setcolor(12);
                                        outtextxy(284,240,"ISRO");
                                        outtextxy(281,265,rocketname[j1][10]);
                                        setcolor(WHITE);
                                        line(280,295,270,305);
                                        line(320,295,330,305);
                                        line(270,285,270,385);
                                        line(330,285,330,385);
                                        line(270,385,280,370);
                                        line(330,385,320,370);
                                        outtextxy(280,370,"::::::::::");
                                        setcolor(19);
                                        outtextxy(282,290,"=====");
                                        outtextxy(270,305,"--------");
                                        setfillstyle(3,5);
                                        bar3d(260,388,335,420,10,10);
                                        setcolor(WHITE);
                                        outtextxy(40,450,"10");
                                        outtextxy(80,450,"9");
                                        outtextxy(120,450,"8");
                                        outtextxy(160,450,"7");
                                        outtextxy(200,450,"6");
                                        outtextxy(240,450,"5");
                                        outtextxy(280,450,"4");
                                        outtextxy(320,450,"3");
                                        outtextxy(360,450,"2");
                                        outtextxy(400,450,"1");
                                        outtextxy(440,450,"0");

                                        setcolor(WHITE);
                                        line(230,75,279-i,i+75);
                                        line(230,76,279-i,i+76);
                                        delay(100);
                                        cleardevice();
                                    }
                                for(j=0;j<=3500;j=j+10)
	                                {
                                        setcolor(WHITE);
                                        line(230,j+70,230,j+410);             // suporter
                                        line(370,j+70,370,j+410);             // suporter
                                        line(300,40,280,70);
                                        line(300,40,320,70);
                                        rectangle(280,70,320,110);
                                        setcolor(6);
                                        circle(300,90,9);
                                        setcolor(WHITE);
                                        line(280,110,290,130);
                                        line(320,110,310,130);
                                        line(290,130,310,130);
                                        line(290,130,290,185);
                                        line(310,130,310,185);
                                        line(290,185,310,185);
                                        line(290,185,280,195);
                                        line(310,185,320,195);
                                        line(280,195,280,295);
                                        line(320,195,320,295);
                                        //	  Name of Country
                                        setcolor(RED);
                                        outtextxy(297,135,"I");
                                        outtextxy(297,145,"N");
                                        outtextxy(297,155,"D");
                                        outtextxy(297,165,"I");
                                        outtextxy(297,175,"A");
                                        //	  Flag
                                        setcolor(RED);
                                        rectangle(285,210,315,215);
                                        setcolor(WHITE);
                                        rectangle(285,216,315,220);
                                        setcolor(BLUE);
                                        circle(300,218,3);
                                        circle(300,218,2);
                                        circle(300,218,1);
                                        setcolor(GREEN);
                                        rectangle(285,221,315,226);
                                        setcolor(12);
                                        outtextxy(284,240,"ISRO");
                                        outtextxy(281,265,rocketname[j1][10]);
                                        setcolor(WHITE);
                                        line(280,295,270,305);
                                        line(320,295,330,305);
                                        line(270,285,270,385);
                                        line(330,285,330,385);
                                        line(270,385,280,370);
                                        line(330,385,320,370);
                                        outtextxy(280,370,  "::::::::::");
                                        outtextxy(275,380, ";::::::::::;");
                                        outtextxy(270,390,";::::::::::::;");
                                        setcolor(19);
                                        outtextxy(282,290,"=====");
                                        outtextxy(270,305,"--------");
                                        setfillstyle(3,5);
                                        bar3d(260,j+388,335,j+420,10,10);
                                        setcolor(WHITE);
                                        outtextxy(0,j+400,"Counting");
                                        outtextxy(40,j+450,"10");
                                        outtextxy(80,j+450,"9");
                                        outtextxy(120,j+450,"8");
                                        outtextxy(160,j+450,"7");
                                        outtextxy(200,j+450,"6");
                                        outtextxy(240,j+450,"5");
                                        outtextxy(280,j+450,"4");
                                        outtextxy(320,j+450,"3");
                                        outtextxy(360,j+450,"2");
                                        outtextxy(400,j+450,"1");
                                        outtextxy(440,j+450,"0");
                                        rectangle(50,j+-35,180,j+390);
                                        if(j==60)
                                            {
                                                setcolor(24);
                                                outtextxy(272,j+330," | | | | ");
                                            }
                                        if(j==120)
                                            {
                                                setcolor(24);
                                                outtextxy(270,j+270,"| | | | |");
                                            }
                                        if(j==180)
                                            {
                                                setcolor(24);
                                                outtextxy(272,j+210," | | | | ");
                                                delay(50);
                                                outtextxy(270,j+240,"| | | | |");
                                            }
                                        if(j==240)
                                            {
                                                setcolor(24);
                                                outtextxy(270,j+135," | | | | ");
                                                delay(50);
                                                outtextxy(272,j+150,"| | | | |");
                                            }
                                        if(j==330)
                                            {
                                                setcolor(24);
                                                outtextxy(273,j+75," | | | | ");
                                                delay(50);
                                                outtextxy(271,j+60,"| | | | |");
                                            }
                                        if(j==390)
                                            {
                                                setcolor(24);
                                                outtextxy(273,j+10,"| | | | |");
                                            }
                                        outtextxy(0,j-1073,"^");
                                        outtextxy(30,j-2032,"^");
                                        outtextxy(350,j-1191,"^");
                                        outtextxy(928,j-2231,"^");
                                        outtextxy(54,j-961,"^");
                                        outtextxy(86,j-2943,"^");
                                        outtextxy(113,j-911,"^");
                                        outtextxy(149,j-863,"^");
                                        outtextxy(185,j-1832,"^");
                                        outtextxy(223,j-791,"^");
                                        outtextxy(265,j-1741,"^");
                                        outtextxy(294,j-2997,"^");
                                        outtextxy(327,j-703,"^");
                                        outtextxy(388,j-1579,"^");
                                        outtextxy(405,j-513,"^");
                                        outtextxy(443,j-1456,"^");
                                        outtextxy(498,j-657,"^");
                                        outtextxy(531,j-1497,"^");
                                        outtextxy(559,j-613,"^");
                                        circle(230,j-2398,15);
                                        circle(564,j-2998,20);
                                        circle(129,j-3441,53);
                                        if(j==3500)
                                            {
                                                //gotoxy(300,300);
                                                printf("\t\n\t\n\n\t      Mars ");
                                                printf("\t\t\n\n\n\n\n\nMission Successful...\n\n");
                                                break;
                                            }
                                        delay(30);
                                        cleardevice();
                                    }
                                getch();
                            }
                        }
                    }
                }
            }
            else
            {
                printf("\n\t\t*Invalid Credentials*\n\n");
                printf("Press any key to Continue");
                getch();
                system("cls");
            }
        }
        else
        {
            printf("\n\n\t\t*Invalid Credentials*\n\n");
            printf("Press any key to Continue");
            getch();
            system("cls");
        }
    }
}
