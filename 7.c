#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


void oddbybitwise(int*,int*);
void oddbymodulus(int*,int*);
void thirdrule(int*,int*);
// program to check number is even or odd by 3 methods

int main()
{
    int n=2;
    char ch;
   while(1)
   {

      int *p=(int*)malloc(n*sizeof(int));
    printf("enter the number to check the number is even or odd\n");
    scanf("%d",p);
    scanf("%d",p+1);
    oddbymodulus(p,p+1);
    printf("from 2nd method\n");
    free(p);
    printf("enter the number to check the number is even or odd\n");
    scanf("%d",p);
    scanf("%d",p+1);
    oddbybitwise(p,p+1);
    free(p);
    printf("3rd method\n method that use x/2*2==x concept\n");
    printf("enter the number to check the number is even or odd\n");
    scanf("%d",p);
    scanf("%d",p+1);
    thirdrule(p,p+1);

    ch=getch();
    if(ch==27)
        exit(0);
   }
    getch();
    return 0;
}

void oddbymodulus(int *a,int *b)
{

        printf("to check number by the by %% modulus operator\n");
       if(*(a)%2==0)
        printf(" %d  is even\n and for second number\n ",*(a));
        else
            printf(" %d  is odd\n and for second number\n",*(a));
            if(*(b)%2==0)
                printf("%d  is even\n",*(b));
            else
                printf("%d  is odd\n",*(b));

}
void oddbybitwise(int *c,int *d)
{
    printf("to check the number by bitwise & operator\n");
    if(*(c)&1)
        printf("%d  is odd\n and for second number\n",*(c));
    else
        printf("%d  is even\n and for second number\n",*(c));
        if(*(d)&1)
            printf("%d  is odd\n ",*(d));
        else
            printf("%d  is even\n ",*(d));
//  bitwise xor mtlb agr dono bits same rahenge tb 0 and agr opposite rahenge toh 1
}

void thirdrule(int *g,int *h)
{
    printf("without using any above logic\n");
    if(*(g)/2*2==*(g))
        printf("%d is even\n and for second number\n",*(g));
    else
        printf("%d is odd\n and for second number\n",*(g));
    if(*(h)/2*2==*(h))
        printf("%d is even\n",*(h));
    else
        printf("%d is odd\n",*(h));
}
