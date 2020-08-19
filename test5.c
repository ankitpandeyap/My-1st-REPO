#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fib(int);
int fib(int n)
// program to check to fibonacci number with recursion
{

        if(n==1||n==2)
            return (1);
          return (fib(n-1)+fib(n-2));

}
int main()
{
 register int i;
int n;
printf("enter the number\n");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
   {
       printf(" %d ",fib(i));
   }
    return 0;

}
