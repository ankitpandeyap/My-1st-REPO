#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// program to check prime factors of a number
/*
for(i=2;x>1;i++)
{
 while(x%i==0)
 {
   printf("%d",i);
   x=x/i;
 }
}
*/
int popat(int x)
{
  register int i;
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

    long int x;
    int m,y,k;
    register int i;



  printf("enter the  numbers\n");
    scanf("%d",&x);
    y=x;
    for(i=2;i<=x;i++)
    {



        if(x%i==0)
        {
            m=1;
            k=popat(i);
            if(k==1)
            {
                m=i;
               x=x/i;
            printf("%d is prime factor of number of %d\n",m,y);

              }

        }



        if(x%i==0)
           {
               i=1;


           }


       if(x==1)
        break;





}

return 0;



}


