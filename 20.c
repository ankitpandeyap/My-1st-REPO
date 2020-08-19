#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


// program to convert decimal to binary
int main()
{

     register int i,count=0;
    int a,x,r,y[10];
    printf("enter the number\n");
    scanf("%d",&a);
    x=a;
for(i=0;i<=10;i++)
    y[i]=2;

    for(i=0;x!=0;i++)
    {

        r=x%2;
       y[i]=r;
        x=x/2;
           count++;

    }
    i=0;
    printf("(");
for(i=count;i>=0;i--)
{
    if(y[i]==0||y[i]==1)
    printf("%d",y[i]);
}



    printf(") is binary number\n");

 return 0;
}
