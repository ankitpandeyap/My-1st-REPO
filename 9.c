#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//program to wap integer with two method
 void swap(int,int);
 void swap2(int*,int*);
 int t;


 int main()
 {
     int  *p,n;
     char ch;
     while(1)
     {
         printf("program for swapping two numbers\n");
         printf("for exiting press escape\n to continue press any key \n");
         ch=getch();
         if(ch==27)
            exit(0);
     printf("enter two numbers to swap \n enter first number\n");
     p=(int*)calloc(1,sizeof(int));
     scanf("%d",p);
     printf("enter the second number\n");
     scanf("%d",p+1);
     printf("before swapping\n a=%d and b=%d\n",*(p),*(p+1));
     printf("choose method how to swap\n 1. with 3rd variable \n 2. without 3rd variable\n 3. for exiting\n");
     scanf("%d",&n);
     if(n==1)
     swap(*(p),*(p+1));
     else if(n==2)
        swap2(p,p+1);
        else if (n==3)
            exit(0);
            free(p);
     }
     return 0;
 }

void  swap(int a,int b)
{
    t=a;
    a=b;
    b=t;
    printf("After swapping\n a=%d and b=%d\n temp var=%d\n",a,b,t);
}

void swap2(int *c,int *d)
{
    *(c)=*(c)+*(d); //a=a+b
     *(d)=*(c)-*(d);//b=a-b
     *(c)=*(c)-*(d);//a=a-b
      printf("After swapping\n a=%d and b=%d\n",*(c),*(d));
}
