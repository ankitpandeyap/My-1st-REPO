#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// program of HCF from My method

/*
 hCF normal method
int x,y,H=1;
     printf("enter two  numbers\n");
    scanf("%d %d",&x,&y);
    for(H=(x>y?y:x);H>=1;H--)
        if(x%H==0&&y%H==0)
              break;
     printf("%d is the HcF of number\n",H);
*/

int popat(int x)
{
  int i;
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

    int x,y,i,n,m,k,j,p,HC=1,H;
    char ch;
    printf("program for HcF\n");
  while(1)
{
printf("Enter your choice \n 1. my method 2. common method\n");
scanf("%d",&p);
if(p==1)
    {

    printf("enter two  numbers\n");
    scanf("%d %d",&x,&y);

    for(i=2;i<=(x>y?x:y);i++)
    {
        m=1;
        n=1;

        if(x%i==0)
        {
            k=popat(i);
            if(k==1)
            {
                m=i;
               x=x/i;



              }


        }



        if(y%i==0)
        {
             k=popat(i);
            if(k==1)
            {
                n=i;
                y=y/i;


            }

     }

        if(m==n)
        {
            HC=HC*m;
        }

        if(x%i==0||y%i==0)
            i=1;
       if(x==1&&y==1)
                break;


}


        printf("%d is HcF of number\n",HC);
        HC=1;
    }
if(p==2)
{
     printf("enter two  numbers\n");
    scanf("%d %d",&x,&y);
    for(H=(x>y?y:x);H>=1;H--)
        if(x%H==0&&y%H==0)
              break;
     printf("%d is the HcF of number\n",H);
H=1;

}
ch=getch();
if(ch==27)
    exit(0);
}
}
