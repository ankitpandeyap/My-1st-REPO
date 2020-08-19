#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

#include<string.h>

//PROGRAM TO PRINT FROM A CURSOR POSITION INCLUDEING MY KEYSTROKE FUNCTION
/*
 static char ch;
     static int j=0;


         ch=getch();
         printf("%c",ch);

         if(ch==27)
         {
           printf("\n");
            return j;
         }
         else
            {

                j++;
                gotoxy(70,3);
                printf("%d",j);
                g++;
                gotoxy(g,h);
                keystroke();
                    }
 }
 */

int g=0,h=8;
int keystroke(void);
void gotoxy(int x,int y)
{

  COORD pos;
  pos.X=x;
  pos.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);

}

int main()
{

      char *c=NULL;
      int x,y,z;
      int i,n;
      printf("enter your name and also cursor position from where you want to print your name\n ");
printf("please enter your name but first press any key\n after typing your name press escape ? sign confirm your input\n");
      z=keystroke();


      c=(char*)malloc(z*sizeof(char));
       fflush(stdin);
      printf("please enter your name again\n");
      gets(c);
      printf("enter coordinates of x and y\n");
      scanf("%d %d",&x,&y);
      gotoxy(x,y);
      y++;
      printf("enter how many times you want to print your name\n");
      gotoxy(x,y);
      scanf("%d",&n);
      y++;
      for(i=1;i<=n;i++)
      {
          gotoxy(x,y);
          puts(c);
          y++;
          gotoxy(x,y);
      }
  return 0;
}
 int keystroke()
 {
      static char ch;
     static int j=0;


         ch=getch();
         printf("%c",ch);

         if(ch==27)
         {
           printf("\n");
            return j;
         }
         else
            {

                j++;
                gotoxy(70,3);
                printf("%d",j);
                g++;
                gotoxy(g,h);
                keystroke();
                    }
 }
