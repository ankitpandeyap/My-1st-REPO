#include<stdio.h>
#include<windows.h>
// program for cursor postion
void gotoxy(int,int);

void gotoxy(int x,int y)
{
    int a;
  COORD pos;
  pos.X=x;
  pos.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);

}
int main()
{
    int a,b,c;
    //ok
    printf("enter the number\n");
    scanf("%d%d",&a,&b);
    gotoxy(a,b);
    return 0;
}


