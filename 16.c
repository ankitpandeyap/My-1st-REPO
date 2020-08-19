#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
// program to print prime numbers between range
int main()
{
    register int i,j;
    int x,y;

    printf("program to print prime numbers between given range\n");
    printf("enter the number\n 1st number from where the list start\n");
    scanf("%d",&x);
    printf("2nd upto which number list have to be printed\n");
    scanf("%d",&y);

    for(i=x;i<=y;i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
            printf("%d is a prime number\n",i);
            else
            continue;
    }
    return 0;
}
