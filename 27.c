#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// program of fourth star program

int main()
{
    register int i,j;
    int n,k=0,m=0;

    printf("enter the number of rows\n");
    scanf("%d",&n);
    fflush(stdin);



    for(i=1;i<=n;i++)
    {
         k=k+100;
         m=m+2;
        for(j=1;j<=i;j++)
           {
               if(k==100&&m==2)
                printf("%d  ",k);
               else
             printf("%d   ",(k+m));


           }
            printf("\n");
    }




    return 0;
}



