#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
// program to check LCM from 2nd method

int main()
{
    int x,y,L;
    printf("enter two numbers\n");
    scanf("%d %d",&x,&y);
    for(L=x>y?x:y;L<=x*y;L=L+(x>y?x:y))
      if(L%x==0&&L%y==0)
            break;

    printf("%d is the LCM of two number\n",L);
    return 0;
}
