#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// PROGRAM TO PRINT PRIME FACTORISATION OF NUMBER WITH * SIGN

int popat(int x)
{
 register   int i;
 for(i=2;i<=x-1;i++)
 {

     if(x%i==0)
        break;
 }

     if(i==x)
       return 1;
    else
          return 0;

}


int main()
{

    register int i;
    int x,y,n[10],j,k;
 for(j=0;j<=10;j++)
    n[j]=1;


  printf("enter the  numbers\n");
    scanf("%d",&x);
    y=x;
    for(i=2,j=0;i<=x;i++)
    {



        if(x%i==0)
        {

            k=popat(i);
            if(k==1)
            {
                n[j]=i;
                j++;
                x=x/i;

               }

        }



        if(x%i==0)
            i=1;
       if(x==1)
        break;



}
printf("prime factorisation of number is\n");
for(j=0;j<=10;j++)
{
    if(n[j]!=0&&n[j]!=1)
     {
         printf("%d",n[j]);
         printf("*");



     }

}
printf("\b");
printf("=%d\n",y);

return 0;



}



