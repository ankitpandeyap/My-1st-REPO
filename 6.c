#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

void gotoxy(int ,int);

// same as program 5
int main()
{
    int x,y;
char ch,ch1;
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
           ch1=getch();
       switch(ch1)
       {
           case 119:
           y--;
           break;
           case 115:
            y++;
            break;
           case 97:
            x--;
            break;
           case 100:
            x++;
            break;
       }
           gotoxy(x,y);
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


