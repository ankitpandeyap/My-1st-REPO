#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


//why this code not running help?
//program for reversing the number

void main()
{
    int i,t,n,temp,a[20];
    printf("the no of int\n");
    scanf("%d",&n);
    for(i=0;i<=(n-1);i++)
        scanf("%d ",&a[i]);
     for(i=0;i<=(n-1);i++)
        printf("%d",a[i]);
        printf("\n");
      t=n-1;
      temp=a[0];
      printf("%d\n",t);
  for(i=0;i<=(n-1);i++,t--)
      {

          temp=a[i];
          a[i]=a[t];
          a[t]=temp;

      }
for(i=0;i<=(n-1);i++)
        printf("%d",a[i]);



}
