#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

// program to change cursor position
void gotoxy(int ,int);


void main()
{
    int x,y;
    printf("Enter the number for changing the cursor position\n");
   scanf("%d %d",&x,&y);
   gotoxy(x,y);
}

void gotoxy(int x,int y)
{

  COORD pos;
  pos.X=x;
  pos.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
 getch();
}
