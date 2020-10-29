#include <windows.h>
#include<stdio.h>
#include<conio.h>
#define tool 10
#include <windows.h>

void colorfood(void) {
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int x=10;
    SetConsoleTextAttribute(hConsole, x);
    }

void colorlife(void) {
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int x=12;
    SetConsoleTextAttribute(hConsole, x);
    }

void colorborder(void) {
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int x=14;
    SetConsoleTextAttribute(hConsole, x);
    }

void colorsnake1(int i) {
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int x=i;
    SetConsoleTextAttribute(hConsole, x);
    }
void colorscore(void){
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int x=13;
    SetConsoleTextAttribute(hConsole, x);
    }
void colorsnake2(int i){
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int x=i;
    SetConsoleTextAttribute(hConsole, x);
    }
void backgroundhate(void){
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int x=8;
    SetConsoleTextAttribute(hConsole, x);
    }

void backgroundlove2(void){
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int x=396;
    SetConsoleTextAttribute(hConsole, x);
    }

void backgroundlove(void){
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int x=124;
    SetConsoleTextAttribute(hConsole, x);
    }

void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}



int win(int list[10][2],int list2[10][2]);
void hoosha(int list[10][2],int list2[10][2]);
void hooshs(int list[10][2],int list2[10][2]);
void hooshd(int list[10][2],int list2[10][2]);
void hooshw(int list[10][2],int list2[10][2]);
void forward(int list[10][2],int len);
void up(int list[10][2],int len);
void down(int list[10][2],int len);
void back(int list[10][2],int len);
void snake1(int list[10][2]);
void snake2(int list[10][2]);
void gameover(int c);
void border1p(void);
void border1pmonkey(void);

int x,x2;
int tool1=10;
int tool2=10;
int flag=0;
int score1=0;
int score2=0;
int life1=3;
int life1x=5;
int life2=3;
int life2x=70;
int SPEED=70;
int scolor1=12;
int scolor2=8;
int DefultLen=10;
int distancex=10;
int distancey=10;

void Random(int list[100][2],int list2[100][2],int i,int random[20][2]);
int checkfood(int list[100][2],int len,int random[20][2]);
void border(void);
int menu(void);
int menu2(void);
int checklife(int c);
int gamemenu(void);
void addlife1(void);
void addlife2(void);
void OptionMenu(void);
int colormenu(void);
int colormenu1p(void);
int Onepmenu(void);
void border2p(void);
void attacks(int list[100][2],int list2[100][2]);
void attackw(int list[100][2],int list2[100][2]);
void attacka(int list[100][2],int list2[100][2]);
void attackd(int list[100][2],int list2[100][2]);


int main(){
    int gameflag=0;
    int v=0,g;
    int xtah,ytah,i,k,z=0,c,player;
    int xtah2,ytah2;
    int foodcount=0;
    int random[20][2];
    for(i=0;i<20;i++)
        random[i][0]=-1;

	int h=1;
    int p;
	int list[100][2];
	int list2[100][2];

    while((v=gamemenu())!=3){
        gameflag=0;
        life1=3;
        life2=3;
        life2x=70;
        life1x=5;
        score1=0;
        score2=0;
        tool1=DefultLen;
        tool2=DefultLen;

    if(v==2){
        OptionMenu();
        continue;
    }
    if(v==1){
       player=menu2();

    if(player==1){
        c=Onepmenu();
        if(c==0)
           continue;
        if((g=colormenu1p())==0)
            continue;

    if(c==1)
        while (player==1){
        if(gameflag!=0)
            break;
        border();
        border2p();
        xtah=20;
        ytah=20;
        for(i=0;i<=tool1;i++){
            list[i][0]=xtah;
            list[i][1]=ytah;
            xtah++;
        }
            colorsnake1(scolor1);
            for(i=0;i<=tool1;i++){
                gotoxy(list[i][0],list[i][1]);
              printf("%d",0);
            }

        x2='d';
        tool2=3;
        x=77;
        xtah2=0;
        ytah2=0;
        for(i=0;i<=tool2;i++){
            list2[i][0]=xtah2;
            list2[i][1]=ytah2;
            xtah2++;
        }
          /*  colorsnake2(scolor2);
            for(i=0;i<=tool2;i++){
                gotoxy(list2[i][0],list2[i][1]);
              printf("%d",0);
            }*/
        while(kbhit())
            c=getch();
        while(!kbhit())
            gotoxy(79,24);
        while(1){

        if(kbhit()){
            p=getch();
            if(p==224){
              p=getch();
              if((x==72 && p==80) || (x==80 && p==72) || (x==77 && p==75) || (x==75 && p==77)) ;
                else
                  x=p;
            }
            if(p==27){
             gameflag=1;
             break;
            }

        }


         /* if(x2=='w')
              hooshw(list,list2);
            if(x2=='d')
              hooshd(list,list2);
            if(x2=='a')
                hoosha(list,list2);
           if(x2=='s')
                hooshs(list,list2);
            */
          /*  if((checkfood(list2,tool2,random))==1)
               flag=2;*/
         /*   colorsnake2(scolor2);
            snake2(list2);*/
            Sleep(SPEED);

            if((checkfood(list,tool1,random))==1){
                        colorscore();
                        score1+=10;
                        gotoxy(5,22);
                        printf("%d",score1);
                        flag=1;
            }

            colorsnake1(scolor1);
            snake1(list);
            if((c=win(list,list2))!=0){
                c=checklife(c);
                tool1=DefultLen;
                tool2=DefultLen;
                if(c!=0){
                    gameover(c);
                    gameflag=1;
                }
                Sleep(1000);
                break;
            }
            if (h%30==0){
                colorfood();
                Random(list,list2,h-z,random);
                z++;
            }
            h++;

        }
        }


    if(c==2)
       while (player==1){
        if(gameflag!=0)
            break;
        border();
        border1p();
        xtah=20;
        ytah=20;
        for(i=0;i<=tool1;i++){
            list[i][0]=xtah;
            list[i][1]=ytah;
            xtah++;
        }
            colorsnake1(scolor1);
            for(i=0;i<=tool1;i++){
                gotoxy(list[i][0],list[i][1]);
              printf("%d",0);
            }

        x2='d';
        x=77;
        xtah2=20;
        ytah2=10;
        for(i=0;i<=tool2;i++){
            list2[i][0]=xtah2;
            list2[i][1]=ytah2;
            xtah2++;
        }
            colorsnake2(scolor2);
            for(i=0;i<=tool2;i++){
                gotoxy(list2[i][0],list2[i][1]);
              printf("%d",0);
            }
        while(kbhit())
            c=getch();
        while(!kbhit())
            gotoxy(79,24);
        while(1){

        if(kbhit()){
            p=getch();
            if(p==224){
              p=getch();
              if((x==72 && p==80) || (x==80 && p==72) || (x==77 && p==75) || (x==75 && p==77)) ;
                else
                  x=p;
            }
            if(p==27){
             gameflag=1;
             break;
            }

        }

          if(x2=='w'){
            hooshw(list,list2);
            if(x2=='w')
             attackw(list,list2);
          }
          else
            if(x2=='d'){
             hooshd(list,list2);
            if(x2=='d')
            attackd(list,list2);
            }
            else
            if(x2=='a'){
             hoosha(list,list2);
             if(x2=='a')
            attacka(list,list2);
            }
        else
           if(x2=='s'){
           hooshs(list,list2);
           if(x2=='s')
            attacks(list,list2);
           }
            Sleep(SPEED);
          /*  if((checkfood(list2,tool2,random))==1)
               flag=2;*/
            colorsnake2(scolor2);
            snake2(list2);
          /*  if((checkfood(list,tool1,random))==1)
                flag=1;*/
            colorsnake1(scolor1);
            snake1(list);
            if((c=win(list,list2))!=0){
                c=checklife(c);
                tool1=DefultLen;
                tool2=DefultLen;
                if(c!=0){
                    gameover(c);
                    gameflag=1;
                }
                Sleep(1000);
                break;
            }
         /*   if (h%30==0){
                colorfood();
                Random(list,list2,h-z,random);
                z++;
            }
            h++;
*/
        }
       }
    if(c==3)
        while (player==1){
        if(gameflag!=0)
            break;
        for(i=0;i<20;i++)
            random[i][0]=-1;
        system("cls");
        border();
        border1pmonkey();


        xtah=20;
        ytah=20;
        for(i=0;i<=tool1;i++){
            list[i][0]=xtah;
            list[i][1]=ytah;
            xtah++;
        }
            colorsnake1(scolor1);
            for(i=0;i<=tool1;i++){
                gotoxy(list[i][0],list[i][1]);
              printf("%d",0);
            }
        x2='d';
        x=77;
        xtah2=20;
        ytah2=10;
        for(i=0;i<=tool2;i++){
            list2[i][0]=xtah2;
            list2[i][1]=ytah2;
            xtah2++;
        }
            colorsnake2(scolor2);
            for(i=0;i<=tool2;i++){
                gotoxy(list2[i][0],list2[i][1]);
              printf("%d",0);
            }
        while(kbhit())
            c=getch();
        while(!kbhit())
            gotoxy(79,24);

        while(1){
        if(kbhit()){
            p=getch();
            if(p==224){
              p=getch();
              if((x==72 && p==80) || (x==80 && p==72) || (x==77 && p==75) || (x==75 && p==77)) ;
                else
                  x=p;
            }

            if(x==72 && x2!='w')
                x2='s';


            if(x==80 && x2!='s')
                x2='w';


            if(x==75 && x2!='a')
                x2='d';


            if(x==77 && x2!='d')
                x2='a';





        if(p==27){
            gameflag=1;
            break;
        }
        }
        if(x2=='w')
            hooshw(list,list2);


        else
            if(x2=='d')
             hooshd(list,list2);


        else
            if(x2=='a')
             hoosha(list,list2);


        else
           if(x2=='s')
           hooshs(list,list2);



            Sleep(SPEED);
            if((checkfood(list2,tool2,random))==1){

               flag=2;
            }
            if((c=win(list,list2))!=0){
                c=checklife(c);
                tool1=DefultLen;
                tool2=DefultLen;
                if(c!=0){
                    gameover(c);
                    gameflag=1;
                    Sleep(2000);
                }
                Sleep(1000);
                break;
             }
            colorsnake2(scolor2);
            snake2(list2);
            if((checkfood(list,tool1,random))==1){
                flag=1;
            }

            colorsnake1(scolor1);
            snake1(list);


            if (h%50==0){
                colorfood();
                Random(list,list2,h-z,random);
                z++;
            }
            h++;

        }
        }
        }

    if(player==2)
     if((g=colormenu())==0)
        continue;

        while (player==2){
        if(gameflag!=0)
            break;
        for(i=0;i<20;i++)
            random[i][0]=-1;
        system("cls");
        border();


        xtah=20;
        ytah=20;
        for(i=0;i<=tool1;i++){
            list[i][0]=xtah;
            list[i][1]=ytah;
            xtah++;
        }
            colorsnake1(scolor1);
            for(i=0;i<=tool1;i++){
                gotoxy(list[i][0],list[i][1]);
              printf("%d",0);
            }
        x2='d';
        x=77;
        xtah2=20;
        ytah2=10;
        for(i=0;i<=tool2;i++){
            list2[i][0]=xtah2;
            list2[i][1]=ytah2;
            xtah2++;
        }
            colorsnake2(scolor2);
            for(i=0;i<=tool2;i++){
                gotoxy(list2[i][0],list2[i][1]);
              printf("%d",0);
            }
        while(kbhit())
            c=getch();
        while(!kbhit())
            gotoxy(79,24);

        while(1){
        if(kbhit()){
            p=getch();
            if(p==224){
              p=getch();
              if((x==72 && p==80) || (x==80 && p==72) || (x==77 && p==75) || (x==75 && p==77)) ;
                else
                  x=p;
            }

        else
            if(p=='w' || p=='s' || p=='a' || p=='d'){
             if((x2=='w' && p=='s') || (x2=='s' && p=='w') || (x2=='a' && p=='d') || (x2=='d' && p=='a'));
             else
               x2=p;
        }
        if(p==27){
            gameflag=1;
            break;
        }
        }


            Sleep(SPEED);
            if((checkfood(list2,tool2,random))==1){
                        colorscore();
                        score2+=10;
                        addlife2();
                        gotoxy(70,22);
                        printf("%d",score2);

               flag=2;
            }
            colorsnake2(scolor2);
            snake2(list2);
            if((checkfood(list,tool1,random))==1){
                        colorscore();
                        score1+=10;
                        addlife1();
                        gotoxy(5,22);
                        printf("%d",score1);
                flag=1;
            }
            colorsnake1(scolor1);
            snake1(list);
            if((c=win(list,list2))!=0){
                c=checklife(c);
                tool1=DefultLen;
                tool2=DefultLen;
                if(c!=0){
                    gameover(c);
                    gameflag=1;
                    Sleep(2000);
                }
                Sleep(1000);
                break;
             }

            if (h%50==0){
                colorfood();
                Random(list,list2,h-z,random);
                z++;
            }
            h++;

        }

        }
    }
    }
}

void attackd(int list[100][2],int list2[100][2]){
    int c,i;
    c=abs(list[tool1][1]-list2[tool2][1]);
    for(i=0;i<=tool2;i++)
            if ((list2[tool2][0]==list2[i][0]) && (list2[tool2][1]-1==list2[i][1]))
                return;
    if(c>=distancey)
        x2='w';
    hooshw(list,list2);
    if(x2=='a')
        x2='d';


    distancey=c;
}
void attacka(int list[100][2],int list2[100][2]){
    int c,i;
    c=abs(list[tool1][1]-list2[tool2][1]);
     for(i=0;i<=tool2;i++)
            if ((list2[tool2][0]==list2[i][0]) && (list2[tool2][1]+1==list2[i][1]))
                return;
    if(c>=distancey)
        x2='s';
    hooshs(list,list2);
    if(x2=='d')
        x2='a';

    distancey=c;
}

void attackw(int list[100][2],int list2[100][2]){
    int c,i;
    c=abs(list[tool1][0]-list2[tool2][0]);
    for(i=0;i<=tool2;i++)
            if ((list2[tool2][0]+1==list2[i][0]) && (list2[tool2][1]==list2[i][1]))
                return;
    if(c>=distancex)
        x2='d';
    hooshd(list,list2);
    if(x2=='s')
        x2='w';

    distancex=c;
}
void attacks(int list[100][2],int list2[100][2]){
    int c,i;
    c=abs(list[tool1][0]-list2[tool2][0]);
        for(i=0;i<=tool2;i++)
            if ((list2[tool2][0]-1==list2[i][0]) && (list2[tool2][1]==list2[i][1]))
                return;
    if(c>=distancex)
        x2='a';
    hoosha(list,list2);
    if(x2=='w')
        x2='s';

    distancex=c;
}




void addlife1(void){
    if(life1<10)
    if(score1%50==0){
        gotoxy(++life1x,12);
        colorlife();
        putchar(3);
        life1++;
    }
}
void addlife2(void){
    if(life2<10)
    if(score2%50==0){
        gotoxy(++life2x,12);
        colorlife();
        putchar(3);
        life2++;
    }
}




int checklife(int c){
    if(c==3){
        gotoxy(life1x,12);
        printf(" ");
        life1--;
        life1x--;

        gotoxy(life2x,12);
        printf(" ");
        life2--;
        life2x--;
        if(life1==0 && life2==0)
            return 3;
        if(life1==0)
            return 2;
        if(life2==0)
            return 1;
    }
    if(c==2){
        gotoxy(life1x,12);
        printf(" ");
        life1--;
        life1x--;
        if(life1==0)
            return 2;
    }
    if(c==1){
        gotoxy(life2x,12);
        printf(" ");
        life2--;
        life2x--;
        if(life2==0)
            return 1;
    }
    return 0;

}



int checkfood(int list[100][2],int len,int random[20][2]){
    int i;
    for(i=0;i<20;i++)
    if((list[len][0]==random[i][0]) && (list[len][1]==random[i][1])){
        random[i][0]=-1;
        return 1;
    }
    return 0;

}




void hooshd(int list[10][2],int list2[10][2]){
        int i,j;
        for(j=1;j<3;j++)
        for(i=0;i<=tool1;i++){
            if (((list2[tool2][0]+j==list[i][0]) && (list2[tool2][1]==list[i][1])) ||((18+j-1==list[i][0]) && (list2[tool2][1]==list[i][1]))){
                 if(x==72){
                    x2='w';
                    return;
                 }
                if(x==80){
                    x2='s';
                    return;
                }
                if(x==77||x==75)
                    for(i=0;i<=tool1;i++){
                       if ((list2[tool2][0]==list[i][0]) && (list2[tool2][1]+1==list[i][1])){
                            x2='w';
                            return;
                       }
                    }
                    x2='s';
                    return;
            }
        }
        }





void hoosha(int list[10][2],int list2[10][2]){
        int i,j;
        for(j=1;j<3;j++)
        for(i=0;i<=tool1;i++){
            if (((list2[tool2][0]-j==list[i][0]) && (list2[tool2][1]==list[i][1])) || (((list2[tool2][0]-1)==18) &&((62-j+1==list[i][0]) && (list2[tool2][1]==list[i][1])))){
                 if(x==72){
                    x2='w';
                    return;
                 }
                if(x==80){
                    x2='s';
                    return;
                }
                if(x==77||x==75)
                    for(i=0;i<=tool1;i++){
                       if ((list2[tool2][0]==list[i][0]) && (list2[tool2][1]+1==list[i][1])){
                            x2='w';
                            return;
                       }
                    }
                    x2='s';
                    return;
            }
        }




}


void hooshw(int list[10][2],int list2[10][2]){
    int i,j;
    for(j=1;j<3;j++)
        for(i=0;i<=tool1;i++){
            if (((list2[tool2][0]==list[i][0]) && (list2[tool2][1]-j==list[i][1])) || ((list2[tool2][0]==list[i][0]) && (24-j+1==list[i][1]))){
                 if(x==75){
                    x2='a';
                    return;
                 }
                if(x==77){
                    x2='d';
                    return;
                }
                if(x==80||x==72)
                    for(i=0;i<=tool1;i++){
                       if ((list2[tool2][0]+1==list[i][0]) && (list2[tool2][1]==list[i][1])){
                            x2='a';
                            return;
                       }
                    }
                    x2='d';
                    return;
            }
        }
}


void hooshs(int list[10][2],int list2[10][2]){
    int i,j;
    for(j=1;j<3;j++)
        for(i=0;i<=tool1;i++){
            if (((list2[tool2][0]==list[i][0]) && (list2[tool2][1]+j==list[i][1])) || ((list2[tool2][0]==list[i][0]) && (0+j-1==list[i][1]))){
                 if(x==75){
                    x2='a';
                    return;
                 }
                if(x==77){
                    x2='d';
                    return;
                }
                if(x==80||x==72)
                    for(i=0;i<=tool1;i++){
                       if ((list2[tool2][0]+1==list[i][0]) && (list2[tool2][1]==list[i][1])){
                            x2='a';
                            return;
                       }
                    }
                    x2='d';
                    return;
            }
        }
    }





int win(int list[10][2],int list2[10][2]){
    int i;
    extern int tool1,tool2;

    for(i=0;i<tool1;i++)
        if ((list2[tool2][0]==list[i][0]) && (list2[tool2][1]==list[i][1]))
           return 1;
    for(i=0;i<tool1;i++)
        if ((list[tool1][0]==list[i][0]) && (list[tool1][1]==list[i][1]))
           return 2;
    for(i=0;i<tool2;i++)
        if ((list[tool1][0]==list2[i][0]) && (list[tool1][1]==list2[i][1]))
           return 2;
    for(i=0;i<tool2;i++)
        if ((list2[tool2][0]==list2[i][0]) && (list2[tool2][1]==list2[i][1]))
           return 1;
    if ((list2[tool2][0]==list[tool1][0]) && (list2[tool2][1]==list[tool1][1]))
           return 3;

    return 0;

    }



void snake1(int list[10][2]){

if(x==72)
                up(list,tool1);

if(x==77)
                forward(list,tool1);

if(x==80)
                down(list,tool1);

if(x==75)
                back(list,tool1);
}
void snake2(int list2[10][2]){

if(x2=='w')
                up(list2,tool2);

if(x2=='d')
                forward(list2,tool2);

if(x2=='s')
                down(list2,tool2);

if(x2=='a')
                back(list2,tool2);
}







void forward(int list[10][2],int len){
int j;
            if(flag!=0){
                len++;
                list[len][0]=((list[len-1][0]+1)>=62)?18+((list[len-1][0]+1)%62):(list[len-1][0]+1);
                list[len][1]=list[len-1][1];
                if(flag==1)
                    tool1++;
                if(flag==2)
                    tool2++;
                gotoxy(list[len][0],list[len][1]);
                putchar('0');
                flag=0;
                return;

            }
            gotoxy(list[0][0],list[0][1]);
            putchar(' ');
            for(j=0;j<len;j++){
            list[j][0]=list[j+1][0];
            list[j][1]=list[j+1][1];
            }
            list[len][0]=((list[len-1][0]+1)>=62)?18+((list[len-1][0]+1)%62):(list[len-1][0]+1);
            list[len][1]=list[len-1][1];
		    gotoxy(list[len][0],list[len][1]);
            putchar('0');
		}

void up(int list[10][2],int len){
int j;
            if(flag!=0){
            len++;
            list[len][0]=list[len-1][0];
            list[len][1]=(((list[len-1][1]-1)>=0)?(list[len-1][1]-1):(list[len-1][1]-1+25));
            if(flag==1)
                    tool1++;
            if(flag==2)
                    tool2++;
		    gotoxy(list[len][0],list[len][1]);
		    putchar('0');
		    flag=0;
		    return;
            }
            gotoxy(list[0][0],list[0][1]);
            putchar(' ');
            for(j=0;j<=len;j++){
            list[j][0]=list[j+1][0];
            list[j][1]=list[j+1][1];
            }
            list[len][0]=list[len-1][0];
            list[len][1]=(((list[len-1][1]-1)>=0)?(list[len-1][1]-1):(list[len-1][1]-1+25));

		    gotoxy(list[len][0],list[len][1]);
		    putchar('0');
		}


void down(int list[10][2],int len){
int j;
            if(flag!=0){
            len++;
            list[len][0]=list[len-1][0];
            list[len][1]=(list[len-1][1]+1)%25;
            if(flag==1)
                    tool1++;
            if(flag==2)
                    tool2++;
		    gotoxy(list[len][0],list[len][1]);
            putchar('0');
            flag=0;
                return;
            }
            gotoxy(list[0][0],list[0][1]);
            putchar(' ');
            for(j=0;j<=len;j++){
            list[j][0]=list[j+1][0];
            list[j][1]=list[j+1][1];
            }
            list[len][0]=list[len-1][0];
            list[len][1]=(list[len-1][1]+1)%25;
		    gotoxy(list[len][0],list[len][1]);
		  putchar('0');
		}


void back(int list[10][2],int len){
int j;
            if(flag!=0){
                len++;
                list[len][0]=(((list[len-1][0]-1)>=18)?(list[len-1][0]-1):(list[len-1][0]+61)-18);
                list[len][1]=list[len-1][1];
                if(flag==1)
                    tool1++;
                if(flag==2)
                    tool2++;
                gotoxy(list[len][0],list[len][1]);
                putchar('0');
                flag=0;
                return;
            }
            gotoxy(list[0][0],list[0][1]);
            putchar(' ');
            for(j=0;j<=len;j++){
            list[j][0]=list[j+1][0];
            list[j][1]=list[j+1][1];
            }
            list[len][0]=(((list[len-1][0]-1)>=18)?(list[len-1][0]-1):(list[len-1][0]+61)-18);
            list[len][1]=list[len-1][1];
		    gotoxy(list[len][0],list[len][1]);
		  putchar('0');
		}



void gameover(int c){
    gotoxy(0,0);
    ;
    int i,j;
    if(c==3){
        if(score1==score2){
        for(j=0;j<5;j++){
        colorsnake1(scolor1);
        for(i=0;i<80;++i)
            putchar(3);
        colorsnake2(scolor2);
        for(i=0;i<80;++i)
            putchar(6);
        }
        for(i=0;i<240;++i)
            printf(" ");

        printf("        Game Over But not the Battle ! ");
        printf("\t\tScores are equal  ");


        for(i=0;i<240+14;++i)
            printf(" ");
        for(j=0;j<4;j++){
        colorsnake1(scolor1);
        for(i=0;i<80;++i)
            putchar(3);
        colorsnake2(scolor2);
        for(i=0;i<80;++i)
            putchar(6);
        }
        gotoxy(0,0);
    }
    if(score1<score2){
        for(j=0;j<5;j++){
        colorsnake2(scolor2);
        for(i=0;i<80;++i)
            putchar(3);
        colorsnake2(scolor2);
        for(i=0;i<80;++i)
            putchar(6);
        }
        for(i=0;i<240;++i)
            printf(" ");

        printf("        Game Over ! \tPlayer2 won, Cause it swallowed more score !");
        for(i=0;i<240+12;++i)
            printf(" ");
        for(j=0;j<4;j++){
        colorsnake2(scolor2);
        for(i=0;i<80;++i)
            putchar(3);
        colorsnake2(scolor2);
        for(i=0;i<80;++i)
            putchar(6);
        }
        gotoxy(0,0);
    }
    if(score1>score2){
         for(j=0;j<5;j++){
        colorsnake1(scolor1);
        for(i=0;i<80;++i)
            putchar(3);
        colorsnake1(scolor1);
        for(i=0;i<80;++i)
            putchar(6);
        }
        for(i=0;i<240;++i)
            printf(" ");

        printf("        Game Over ! \tPlayer1 won, Cause it swallowed more score !");
        for(i=0;i<240+12;++i)
            printf(" ");
        for(j=0;j<4;j++){
        colorsnake1(scolor1);
        for(i=0;i<80;++i)
            putchar(3);
        colorsnake1(scolor1);
        for(i=0;i<80;++i)
            putchar(6);
        }
        gotoxy(0,0);
    }
    }
    if(c==1){
        colorsnake1(scolor1);;
        for(i=0;i<720;++i)
            putchar(3);
        for(i=0;i<240;++i)
            printf(" ");

    printf("                      GAME OVER !        ");
        printf("Player 1 Won the Battle\1");

    for(i=0;i<240+15;++i)
            printf(" ");
    for(i=0;i<720;++i)
            putchar(3);
        gotoxy(0,0);
    }


    if(c==2){
        colorsnake2(scolor2);;
        for(i=0;i<720;++i)
            putchar(6);
        for(i=0;i<240;++i)
            printf(" ");

    printf("                      GAME OVER !        ");
        printf("Player 2 Won the Battle\2");

    for(i=0;i<240+15;++i)
            printf(" ");
    for(i=0;i<720;++i)
            putchar(6);
        gotoxy(0,0);

}

}

void Random(int list[100][2],int list2[100][2],int i,int random[20][2]){
    int x,y,j;
    x=((list[tool1][0]*list2[tool2][1])+i*i)%62;
    while(x <= 18)
        x++;
    y=((list[tool1][1]*list2[tool2][0])+i*i)%25;
    for(j=0;j<=tool1;j++)
        if ((list[j][0]==x) && (y==list[j][1]))
           return;
    for(j=0;j<=tool2;j++)
        if ((x==list2[j][0]) && (y==list2[j][1]))
           return;
    for(j=0;j<20 && random[j][0]!=-1;j++);
    if(random[j][0]!=-1)
        return;
    random[j][0]=x;
    random[j][1]=y;
    gotoxy(x,y);
    putchar(234);
}

void border2p(void){
    colorborder();
    gotoxy(69,10);
    printf("     ");
    gotoxy(68,3);
    printf("        ");
    gotoxy(3,3);
    printf(" You     ");
    gotoxy(69,6);
    printf("        ");
    gotoxy(68,20);
    printf("     ");
    gotoxy(70,22);
    printf(" ");
    gotoxy(68,12);
    printf("     ");
}


void border1p(void){
    colorborder();
    gotoxy(68,3);
    printf("Computer ");
    gotoxy(3,3);
    printf(" You     ");
    gotoxy(68,20);
    printf("     ");
    gotoxy(3,20);
    printf("     ");
    gotoxy(70,22);
    printf(" ");
    gotoxy(5,22);
    printf(" ");
}

void border1pmonkey(void){
    colorborder();
    gotoxy(68,3);
    printf("Monkey   ");
    gotoxy(3,3);
    printf(" You     ");
    gotoxy(68,20);
    printf("     ");
    gotoxy(3,20);
    printf("     ");
    gotoxy(70,22);
    printf("   ");
    gotoxy(5,22);
    printf("   ");
}




void border(void){
    int i=0,xlife;
    system("cls");
    colorborder();
    while(i<25){
        gotoxy(17,i);
        printf("|");
        gotoxy(62,i);
        printf("|");
        i++;
    }
    gotoxy(68,3);
    printf("Player 2");
    gotoxy(69,6);
    colorsnake2(scolor2);
    printf("000\1");
    colorborder();
    gotoxy(3,3);
    printf("Player 1");
    gotoxy(4,6);
    colorsnake1(scolor1);
    printf("000\2");
    colorborder();

    gotoxy(68,20);
    printf("Score");
    gotoxy(3,20);
    printf("Score");

    gotoxy(69,10);
    printf("Life");
    gotoxy(4,10);
    printf("Life");

    xlife=3;
    colorlife();
    gotoxy(xlife,12);
    for(i=0;i<life1;i++){
        putchar(3);
        xlife++;
        gotoxy(xlife,12);
    }
    xlife=68;
    gotoxy(xlife,12);
    for(i=0;i<life2;i++){
        putchar(3);
        xlife++;
        gotoxy(xlife,12);
    }
    colorscore();
    gotoxy(70,22);
    printf("%d",score2);
    gotoxy(5,22);
    printf("%d",score1);


}


/*int menu(void){
    colorborder();
    system("cls");
    int p,x,x1,y1,c,i=0,choice=1;
    gotoxy(25,10);
    printf("Do you want to continue ?");
    gotoxy(35,12);
    printf("Yes");
    gotoxy(35,16);
    printf("No");
    gotoxy(34,13);
    printf("-----");
    while(1){
            p=getch();
            if(p!=224)
                if(p==13)
                  return choice;
            if(p==224){
                p=getch();
                x=p;
            }
    if(x==72){
               gotoxy(34,17);
               printf("    ");
               gotoxy(34,13);
               printf("-----");
               choice=1;
    }
    else if(x==80){
                gotoxy(34,13);
                printf("     ");
                gotoxy(34,17);
                printf("----");
                choice=0;
    }
    }
}
*/

int menu2(void){
    system("cls");
    int p,x,choice=1,c,i=0;
    gotoxy(34,9);
    printf("Game Mode");
    gotoxy(35,12);
    printf("1 Player \1");
    gotoxy(35,16);
    printf("2 Player \1 \2");
    gotoxy(34,13);
    printf("------------");
    while(1){
            p=getch();
            if(p==27)
                  return 3;
            if(p!=224)
                if(p==13)
                  return choice;

            if(p==224){
                p=getch();
                x=p;
            }

    if(x==72){
               gotoxy(34,17);
               printf("              ");
               gotoxy(34,13);
               printf("------------");
               choice=1;
    }
    else if(x==80){
                gotoxy(34,13);
                printf("            ");
                gotoxy(34,17);
                printf("--------------");
                choice=2;
    }
    }
}


int gamemenu(void){
    system("cls");
    colorsnake1(scolor1);
    int c,p,x,x1,y1,choice=1;
    gotoxy(5,2);
    printf("      ___           ___           ___           ___           ___     ");
    Sleep(50);
    gotoxy(5,3);
    printf("     /  /\\         /__/\\         /  /\\         /__/|         /  /\\    ");
    Sleep(50);
    gotoxy(5,4);
    printf("    /  /:/_        \\  \\:\\       /  /::\\       |  |:|        /  /:/_   ");
    Sleep(50);
    gotoxy(5,5);
    printf("   /  /:/ /\\        \\  \\:\\     /  /:/\\:\\      |  |:|       /  /:/ /\\  ");
    Sleep(50);
    gotoxy(5,6);
    printf("  /  /:/ /::\\   _____\\__\\:\\   /  /:/~/::\\   __|  |:|      /  /:/ /:/_ ");
    Sleep(50);
    gotoxy(5,7);
    printf(" /__/:/ /:/\\:\\ /__/::::::::\\ /__/:/ /:/\\:\\ /__/\\_|:|____ /__/:/ /:/ /\\ ");
    Sleep(50);
    gotoxy(5,8);
    printf(" \\  \\:\\/:/~/:/ \\  \\:\\~~\\~~\\/ \\  \\:\\/:/__\\/ \\  \\:\\/:::::/ \\  \\:\\/:/ /:/");
    Sleep(50);
    gotoxy(5,9);
    printf("  \\  \\::/ /:/   \\  \\:\\  ~~~   \\  \\::/       \\  \\::/~~~~   \\  \\::/ /:/ ");
    Sleep(50);
    gotoxy(5,10);
    printf("   \\__\\/ /:/     \\  \\:\\        \\  \\:\\        \\  \\:\\        \\  \\:\\/:/  ");
    Sleep(50);
    gotoxy(5,11);
    printf("     /__/:/       \\  \\:\\        \\  \\:\\        \\  \\:\\        \\  \\::/   ");
    Sleep(50);
    gotoxy(5,12);
    printf("     \\__\\/         \\__\\/         \\__\\/         \\__\\/         \\__\\/    ");
    Sleep(50);
    gotoxy(34,14);
    printf("Start Game");
    gotoxy(36,17);
    printf("Options");
    gotoxy(37,20);
    printf("Exit");
    gotoxy(33,15);
    printf("------------");
    gotoxy(79,24);
    x1=34;
    y1=11;
    while(1){
            p=getch();
            if(p!=224)
                if(p==13)
                  return choice;
            if(p==224){
                p=getch();
                x=p;
            }

    if(x==72 && x1==34 && y1==19){
                gotoxy(33,21);
                printf("         ");
                gotoxy(35,18);
                printf("---------");
                gotoxy(79,24);
                x1=33;
                y1=15;
                choice=2;
    }
    else if(x==72 && x1==33 && y1==15){
                gotoxy(33,18);
                printf("           ");
                gotoxy(33,15);
                printf("------------");
                gotoxy(79,24);
                x1=34;
                y1=11;
                choice=1;
    }
    else if(x==80 && x1==34 && y1==11){
                gotoxy(33,15);
                printf("            ");
                gotoxy(35,18);
                printf("---------");
                gotoxy(79,24);
                x1=33;
                y1=15;
                choice=2;
    }
    else if(x==80 && x1==33 && y1==15){
                gotoxy(33,18);
                printf("           ");
                gotoxy(36,21);
                printf("------");
                gotoxy(79,24);
                x1=34;
                y1=19;
                choice=3;
    }
    }
}

void OptionMenu(void){
    system("cls");
    int p,x,y=1,flag=1,c,i=0,x1;
    gotoxy(10,23);
    printf("%c %c = change option",27,26);
    gotoxy(50,23);
    printf("ESC = Apply");
    gotoxy(35,9);
    printf("Options");
    gotoxy(35,12);
    printf("Speed : ");
    gotoxy(43,12);
    if(SPEED==40){
       printf("Fast  ");
       x1=3;
    }
    else if(SPEED==100){
       printf("Slow  ");
       x1=1;
    }
    else{
       printf("Medium");
       x1=2;
    }
    gotoxy(35,16);
    printf("Length : ");
    gotoxy(44,16);
    printf("%d",tool1+1);
    gotoxy(33,12);
    putchar(16);
    while(1){
            p=getch();
            if(p==27)
                  return;
            if(p==224){
                p=getch();

                if(p==80){
                    y=2;
                    gotoxy(33,12);
                    putchar(' ');
                    gotoxy(33,16);
                    putchar(16);
                    continue;
                }

                else if(p==72){
                    y=1;
                    gotoxy(33,16);
                    putchar(' ');
                    gotoxy(33,12);
                    putchar(16);
                    continue;
                }
                else
                    x=p;

            }
            else
                continue;

   if(y==2){
         if(x==77){
                gotoxy(44,16);
                if(tool1<35){
                tool1++;
                tool2++;
                printf("%d",tool1+1);
                DefultLen=tool1;
                }
        }
        if(x==75){
                gotoxy(44,16);
                if(tool1>1){
                tool1--;
                tool2--;
                printf("%d ",tool1+1);
                DefultLen=tool1;
                }
        }

   }
   if(y==1){
    if(x1==2){

         if(x==77){
                   gotoxy(43,12);
                   printf("Fast  ");
                   gotoxy(79,24);
                   x1=3;
                   SPEED=40;
        }
        if(x==75){
                   gotoxy(43,12);
                   printf("Slow  ");
                   gotoxy(79,24);
                   x1=1;
                   SPEED=100;
        }

    }
    if(x1==1)
        if(x==77){
               gotoxy(43,12);
               printf("Medium");
               gotoxy(79,24);
               x1=2;
               SPEED=65;
    }
    if(x1==3)
        if(x==75){
               gotoxy(43,12);
               printf("Medium");
               gotoxy(79,24);
               x1=2;
               SPEED=65;
        }
    }
}
}
int colormenu(void){
    system("cls");
    int p,x,choice=1,c,i=0,j=0;
    gotoxy(31,9);
    printf("Choose your Colors");
    gotoxy(20,12);
    printf("Player 2 \1");
    gotoxy(20,18);
    printf("A or D : switch");
    gotoxy(20,20);
    printf("Space : choose");
    gotoxy(50,12);
    printf("Player 1 \2");
    gotoxy(50,18);
    printf("%c or %c : switch",27,26);
    gotoxy(50,20);
    printf("Enter : choose");
    gotoxy(50,14);
    colorsnake1(scolor1);
    printf("00000000");
    gotoxy(20,14);
    colorsnake2(scolor2);
    printf("00000000");
    while(1){
            p=getch();
            if(p==27)
                  return 0;
            if(p==13){
                gotoxy(50,16);
                colorsnake1(scolor1);
                printf("Ready!");
                i++;
            }
            if(p==32){
                gotoxy(20,16);
                colorsnake2(scolor2);
                printf("Ready!");
                j+=250;
            }
            if(j>=250 && i>=1)
                return 1;

            if(p==224+i){
                p=getch();
                x=p;


                if(x==77){
                    if(scolor1<15){
                           gotoxy(50,14);
                           scolor1++;
                           colorsnake1(scolor1);
                           printf("00000000");
                    }

                }
                else if(x==75){
                    if(scolor1>1){
                            gotoxy(50,14);
                           scolor1--;
                           colorsnake1(scolor1);
                           printf("00000000");
                }
                }
            }
            if( p=='a'+j){
                        if(scolor2>1){
                           gotoxy(20,14);
                           scolor2--;
                           colorsnake2(scolor2);
                           printf("00000000");
                        }
            }
            if( p=='d' + j){
                if(scolor2<15){
                           gotoxy(20,14);
                           scolor2++;
                           colorsnake2(scolor2);
                           printf("00000000");
            }
            }
    }
}


int colormenu1p(void){
    system("cls");
    int p,x,choice=1,c,i=0,j=0;
    gotoxy(31,10);
    printf("Choose Your Color");
    gotoxy(20,12);
    gotoxy(32,18);
    printf("%c or %c : switch",27,26);
    gotoxy(32,20);
    printf("Enter : choose");
    gotoxy(35,14);
    colorsnake1(scolor1);
    printf("00000000");
    while(1){
            p=getch();
            if(p==27)
                  return 0;
            if(p==13){
                gotoxy(36,16);
                colorsnake1(scolor1);
                printf("Ready!");
                return 1;
            }
            if(p==224){
                p=getch();
                x=p;


                if(x==77){
                    if(scolor1<15){
                           gotoxy(35,14);
                           scolor1++;
                           colorsnake1(scolor1);
                           printf("00000000");
                    }

                }
                else if(x==75){
                    if(scolor1>1){
                            gotoxy(35,14);
                           scolor1--;
                           colorsnake1(scolor1);
                           printf("00000000");
                }
                }
            }
}
}


int Onepmenu(void){
    system("cls");
    int c,p,x,x1,y1,choice=1;
    gotoxy(30,5);
    printf("Choose your Competitor :");
    gotoxy(30,10);
    printf("1.Player Vs. Length");
    gotoxy(30,13);
    printf("2.Player Vs. Computer");
    gotoxy(30,16);
    printf("3.Player Vs. Monkey!");
    gotoxy(30,11);
    printf("-------------------");
    gotoxy(79,24);
    x1=34;
    y1=11;
    while(1){
            p=getch();
            if(p!=224)
                if(p==13)
                  return choice;
                if(p==27)
                    return 0;
            if(p==224){
                p=getch();
                x=p;
            }

    if(x==72 && x1==34 && y1==19){
                gotoxy(30,17);
                printf("                     ");
                gotoxy(30,14);
                printf("---------------------");
                gotoxy(79,24);
                x1=33;
                y1=15;
                choice=2;
    }
    else if(x==72 && x1==33 && y1==15){
                gotoxy(30,14);
                printf("                      ");
                gotoxy(30,11);
                printf("-------------------");
                gotoxy(79,24);
                x1=34;
                y1=11;
                choice=1;
    }
    else if(x==80 && x1==34 && y1==11){
                gotoxy(29,11);
                printf("                     ");
                gotoxy(30,14);
                printf("---------------------");
                gotoxy(79,24);
                x1=33;
                y1=15;
                choice=2;
    }
    else if(x==80 && x1==33 && y1==15){
                gotoxy(30,14);
                printf("                      ");
                gotoxy(30,17);
                printf("--------------------");
                gotoxy(79,24);
                x1=34;
                y1=19;
                choice=3;
    }
    }
}

