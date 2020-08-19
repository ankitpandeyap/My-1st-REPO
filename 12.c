#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

// program to check prime factor number
int main()
{
    int i,n,num,pr;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {

         if(num%i==0)
        {
           pr=0;
            for(n=2;n<=i-1;n++)
                if(i%n==0)
                break;

            if(n==i)
              {

                pr=i;
                printf("%d is prime factor of %d\n",pr,num);

              }
              else
                continue;
        }


    }

}
