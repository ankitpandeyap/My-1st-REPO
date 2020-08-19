#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// PROGRAM TO PRINT 2ND LARHEST NUMBER AND SMALLEST NUMBER

int main()
{

    int a,b,c,sec,op,op1;
while(1)
{
    printf("1. to find 2nd largest number\t 2. to find smallest of three numbers\n");
    scanf("%d",&op1);
    if(op1==1)
{
    printf("choose option\n 1. if else \n 2. ternary \n");
    scanf("%d",&op);
    if(op==1)
{

    printf("enter three number\t");
scanf("%d%d%d",&a,&b,&c);

if(a>b)
{
    if(a>c)
    {
        if(c>b)
            printf("%d is 2nd largest number\n",c);
        else
             printf("%d is 2nd largest number\n",b);
    }
    else
         printf("%d is 2nd largest number\n",a);

}
else if(b>c)
     printf("%d is 2nd largest number\n",c);
   else
     printf("%d is 2nd largest number\n",b);
}
if(op==2)
{
     printf("enter three number\t");
scanf("%d%d%d",&a,&b,&c);
sec=a>b?a>c?c>b?c:b:a:b>c?c:b;
  printf("%d is 2nd largest number\n",sec);
}
}
if(op1==2)
     printf("choose option\n 1. if else \n 2. ternary \n");
    scanf("%d",&op);
    if(op==1)
{

    printf("enter three number\t");
scanf("%d%d%d",&a,&b,&c);

if(a>b)
{
    if(b>c)
    {
         printf("%d is smallest number\n",c);

          }
    else
         printf("%d is smallest number\n",b);

}
else if(a>c)
     printf("%d is smallest  number\n",c);
   else
     printf("%d is smallest  number\n",a);
}
if(op==2)
{
     printf("enter three number\t");
scanf("%d%d%d",&a,&b,&c);
sec=a>b?b>c?c:b:a>c?c:a;
  printf("%d is samllest number\n",sec);
}
}
}
