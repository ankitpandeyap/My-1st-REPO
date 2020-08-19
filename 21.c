#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// program to convert binary to decimal
/*
 #include<math.h>
 while(bin)
 {
 s=s+pow(2,i)*(bin%10);
 bin=bin/10;
 i++;
 }
 printf("%d",s);

*/
int main()
{
    register int i,j,count=0,k;
     int a[20],x,b,po=1,dec=0;
    printf("enter the number\n");
    scanf("%d",&x);
    b=x;

for(i=0;x!=0;i++)
{
    a[i]=x%10;
    x=x/10;
    count++;
 printf("%d\n",a[i]);
}
printf("\t\t\t\t\t\t%d\n",count);
for(j=count-1;j>=0;j--)
{
    for(k=1;k<=j;k++)
    {
        po=po*2;
        po=po*a[j];
    }
    if(po!=1)
    dec=dec+po;
       po=1;
        if(j==0)
        dec=dec+a[j];

}


     printf("%d is the decimal number\n",dec);
dec=1;

    return 0;
}
