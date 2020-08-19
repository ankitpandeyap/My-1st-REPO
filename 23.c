#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//program to print n prime numbers
int main()
{
    register int i;
    int n,x=2;
    printf("enter number\n");
    scanf("%d",&n);
    while(n)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
            break;
        if(i==x)
        {
            printf("%d  ",x);
            n--;
        }
        x++;
    }
}

