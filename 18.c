#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 //program to check co-prime numbers

int main()
{

    register int H;
    int x,y;

    printf("enter two  numbers\n");
    scanf("%d %d",&x,&y);
    for(H=(x>y?y:x);H>=1;H--)
        if(x%H==0&&y%H==0)
              break;
     if(H==1)
        printf("%d and %d are co prime numbers\n",x,y);
     else
          printf("%d and %d are not co prime numbers\n",x,y);

}
