#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//program to check a number is prime or not

int main()
{
    int n;
    register int i;
    char ch;

while(1)
   {

    printf("enter a number\n");
    scanf("%d",&n);
 for(i=2;i<=n-1;i++)
 {

     if(n%i==0)
        break;
 }

     if(i==n)
    printf("%d is  a prime number\n",n);
    else
          printf("%d is not  a prime number\n",n);

          ch=getch();
           if(ch==27)
            break;
   }
   return 0;
}
