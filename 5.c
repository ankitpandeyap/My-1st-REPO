#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

void gotoxy(int ,int);

// program to change cursor position
int main()
{
    int x,y;
char ch;
    printf("Enter the number for changing the cursor position\n");
   scanf("%d",&x);
   fflush(stdin);
   scanf("%d",&y);

   printf("for exiting press escape");
   printf(" ");
   gotoxy(x,y);

   while(1)
   {


       ch=getch();
       if(ch!=27)
       {
           ch=getch();
           switch(ch)
           {

           case 97:
           x--;
           gotoxy(x,y);
           break;
           case 100:
              x++;
              gotoxy(x,y);
              break;
           case 119:
            y--;
            gotoxy(x,y);
            break;
           case 115:
            y++;
            gotoxy(x,y);
            break;

       }
       }
    else
        exit(0);
   }

    getch();
    return 0;
}

void gotoxy(int x,int y)
{

  COORD pos;
  pos.X=x;
  pos.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);

}

