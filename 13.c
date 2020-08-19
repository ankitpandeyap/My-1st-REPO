#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// program of LCM from my method
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

    int x,y,i,n,m,k,j,LC=1,rem=1;
    char ch;
  while(1)
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
            LC=LC*m;
        }
        else
        {
            rem=rem*m*n;
        }
        if(x%i==0||y%i==0)
            i=1;
            if(x==1&&y==1)
                break;


}


        printf("%d is lcm of number\n",LC*rem);
        LC=1;
    }
    ch=getch();
    if(ch==27)
        exit(0);
}
