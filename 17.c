#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//program to print fibbonacci number in 2 methods

char ch;
int fib(int);
int fib(int x)
{

        if(x==1||x==2)
            return (1);
          return (fib(x-1)+fib(x-2));

}

int main()
{
     register int i;
      int a=-1,b=1;
    int op,fb;
    static int n,k;
    while(1)
     {
         printf("program to print fibbonaci number\n choose your option\n 1. loop method \t 2. recursion method\n");
      scanf("%d",&op);
      if(op==1)
        {
     printf("enter the number for  printing n terms fibbonacci Number\n");
     fflush(stdin);
     scanf("%d",&k);
     for(i=0;i<=k;i++)
     {
         fb=a+b;
         printf("%d  ",fb);
         a=b;
         b=fb;
       }
printf("\n");
a=-1;
b=1;
}


if(op==2)
     {
      register int j;
int n;
printf("enter the number\n");
 scanf("%d",&n);

 for(j=1;j<=n;j++)
   {
       printf(" %d ",fib(j));
    }
    printf("\n");

     }
     ch=getch();
     if(ch==27)
        break;

}

 return 0;
}
