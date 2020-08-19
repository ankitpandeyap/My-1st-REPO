#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

 char ch;
void integer(void);
void small(void);
void capital(void);

// program of restricting input to a particukar type and
// first dynamic memory allocation

int main()
{
    int n=1;
    int *p=NULL;

    char a;


    while(1)
    {
    printf("PROGRAM WHICH OFFER TO USE ANY PARTICULAR INPUT\n 1. INTEGERS\n 2. SMALL APLPHABETS \n 3. CAPITAL ALPHABETS\n ");
      p=(int*)malloc(n*sizeof(int));
      scanf("%d",p);
        switch(*(p))
        {
        case 1:
            integer();

            break;
        case 2:
            small();

            break;
        case 3:
            capital();

            break;
            default:
            printf("invalid\n");

        }
        a=getch();
        if(a==27)
            exit(0);
            else
                main();

    }
    return 0;
}
void integer()
{
   while(1)
   {
    ch=getch();
    if(ch>=48&&ch<=57)
        printf("%c",ch);

        if(ch==27)
        {
            printf("\n");
            return ;
        }
   }
}
void small()
{

    while(1)
{


     ch=getch();
    if(ch>=97&&ch<=122)
        printf("%c\n",ch);
         if(ch==27)
        {
            printf("\n");
            return ;
}
}
}
void capital()
{
     while(1)
     {
     ch=getch();
    if(ch>=65&&ch<=90)
        printf("%c\n",ch);
          if(ch==27)
        {
            printf("\n");
            return ;
     }
}

}
