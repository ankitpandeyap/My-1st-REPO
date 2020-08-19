#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// program of second star program

int main()
{
    register int i,j;
    int n;
    char ch;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    fflush(stdin);
    printf("enter the alphabet from to start\n ");
    scanf("%c",&ch);

    for(i=1;i<=n;i++)
    {
         ch=69;
        for(j=1;j<=i;j++)
           {

          printf("%c  ",ch);
          ch--;
           }
            printf("\n");
    }




    return 0;
}

