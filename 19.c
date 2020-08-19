#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//program to print list of co-prime numbers
int hcf(int a,int b)
{
    register int H;
     for(H=(a>b?b:a);H>=1;H--)
        if(a%H==0&&b%H==0)
              break;
     if(H==1)
        return 1;
             else
          return 0;

}




int main()
{
    register int i,j,k;
    int x,y,a,b;

      printf("enter the number from to start checking co-prime number\n and then enter where list must end\n");
    scanf("%d %d",&x,&y);
    if(x==1)
    {
        printf("1 is not a prime number\n please enter the values again\n ");
        scanf("%d %d",&x,&y);
    }
    a=x>y?y:x;
    b=x>y?x:y;
    for(i=a;i<=b;i++)
    {
        for(j=i;j<=b;j++)
        {
           k=hcf(i,j);
           if(k==1)
            {
                printf("%d and %d are co-prime numbers\n",i,j);
                k=1;
            }
            else
                continue;
        }
    }



    return 0;
}
