#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include<string.h>

//1st program of menu including 26 programs

char ch;
int  n,*b=NULL,i,g=1,h=16;;
int popat(int);
void pt(void);
void gr2(void);
void gr3(void);
void leap(void);
void div5(void);
void loop1(void);
void loop2(void);
void loop3(void);
void loop4(void);
void loop5(void);
void loop6(void);
void loop7(void);
void table(void);
void sum(void);
void fact(void);
int sum1(int);
int cdi(void);
void sdi(void);
void power(void);
void intrev(void);
void arms(void);
void lcm(void);
void lcm1(void);
void hcf(void);
void hcf1(void);
void ascii(void);
void prime1(void);
void prime2(void);

void gotoxy(int x,int y)
{

  COORD pos;
  pos.X=x;
  pos.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);

}
int keystroke()
 {
      static char ch;
      static int j=0;


         ch=getch();


         if(ch==27)
         {
           printf("\n");
            return j;
         }
         else
            {
               printf("%c",ch);
                j++;
                gotoxy(70,3);
                printf("%d",j);
                g++;
                gotoxy(g,h);
                keystroke();

                    }
 }
 int popat(int x)
{
  int i;
 for(i=2;i<=x-1;i++)
 {

     if(x%i==0)
        break;
 }

     if(i==x)
       return 1;
    else
          return 0;

}


int main()
{
    int a,e,o,p,q,op;

    while(1)

    {
        printf("program to perform various work\n  enter your choice \n 1. to find greater of two number\n");
        printf("2. to find greater of 3 number\n 3. to find a particular year is leap year or not\n");
        printf(" loop programs \n 4 to print name your name number of times in screen \n 5. to print n natural numbers\n ");
        printf("6. to print n natural numbers in reverse order \n 7. to print n even natural numbers \n");
        printf("8. to print n odd natural numbers \n  9 to print n even natural numbers in reverse order\n");
        printf("10. to print n odd natural numbers in reverse order\n  11 print  a table of a number\n 12. print");
printf("sum of n natural number\n 13. to find number is divisible by 5 \n 14. to find factorial of a number \n ");
printf("15. to find the sum of first n even number \n 16. to find the sum of first n odd number\n ");
printf("17. to find power of a number\n 18. program to count digits of a number\n ");
printf("19. program to count sum of digits of number\n 20.program to reverse the number\n 21. to find armstrong number \n ");
printf("22. to find hcf of number\n 23. to find lcm of number\n 24. to print ascii chart\n 25. to check a number is prime or not\n");
printf("26. to find prime factors of number\n 27. program to print prime number list\n");
printf("enter you choice\n to exit press escape\n");

        scanf("%d",&a);


        if(a==1)
          {
                system("CLS");
              gr2();

          }
            if(a==2)
         {
               system("CLS");
             gr3();


         }
            if(a==3)
                {
                      system("CLS");
            leap();

    }
          if(a==4)
            {
                 system("CLS");
            loop1();


          }
           if(a==5)
            {
                  system("CLS");
            loop2();

            }
            if(a==6)
                {
                      system("CLS");
                loop3();

                }
             if(a==7)
                {
                      system("CLS");
                    loop4();
                  }
                 if(a==8)
                    {
                          system("CLS");
                        loop5();

                    }
                  if(a==9)
                  {
                        system("CLS");
                    loop6();

                    }
                   if(a==10)
                 {
                       system("CLS");
                   loop7();

                 }
                    if(a==11)
                    {
                          system("CLS");

                          table();

                    }
                     if(a==12)
                        {
                              system("CLS");
                        sum();
                         }

                        if(a==13)
                            {
                                  system("CLS");
                            div5();

                            }
                            if(a==14)
                                {
                                      system("CLS");
                                fact();
                                    }
                                    if(a==15)
                                    {
                                        system("CLS");
                                        printf("Enter the number\n");
                                        scanf("%d",&e);
                                        o=sum1(e);
                                        printf("%d is sum of %d even natural numbers\n",o,e);

                                    }
                                    if(a==16)
                                    {
                                        system("CLS");
                                        printf("Enter the number\n");
                                        scanf("%d",&p);
                                        q=sum1(p);
                                        printf("%d is sum of %d odd natural number\n",q,p);
                                    }
                                    if(a==17)
                                    {
                                        system("CLS");
                                        power();
                                    }
                                    if(a==18)
                                    {
                                        system("CLS");
                                        i=cdi();
                                         printf("above number has following number of digits --> %d\n",i);

                                    }

                    if(a==19)
                    {
                        system("CLS");
                        sdi();

                    }
                  if(a==20)
                  {
                      system("CLS");
                      intrev();
                  }
                  if(a==21)
                  {
                      system("CLS");
                      arms();

                  }
                  if(a==22)
                  {
                      system("CLS");
                      printf("choose your option\n 1. traditional method \t 2. my method\n");
                      scanf("%d",&op);


                      if(op==1)
                    {

                     hcf();
                    }
                     else if(op==2)
                   {

                        hcf1();
                  }


                  }
                if(a==23)
                  {
                      system("CLS");
                      printf("choose your option\n 1. traditional method \t 2. my method\n");
                      scanf("%d",&op);
                      if(op==1)
                      {
                          lcm();
                      }
                      else if(op==2)
                       {
                        lcm1();
                       }

                  }
                  if(a==24)
                  {
                      system("CLS");
                      ascii();
                  }
                  if(a==25)
                  {
                      system("CLS");
                      prime1();
                  }
                  if(a==26)
                  {
                      system("CLS");
                      prime2();
                  }
                  if(a==27)
                  {
                      system("CLS");
                      pt();
                  }


                     ch=getch();
                     if(ch==27)
                        break;




    }
    ch=getch();
    if(ch==27)
        exit(0);
    return 0;

}
 void gr2()
 {
     int *a=NULL;
     printf("Enter two numbers\n ");
     a=(int*)malloc(2*sizeof(int));
     scanf("%d %d",a,a+1);
     if(*(a)>*(a+1))
        printf("%d is greater than %d\n",*(a),*(a+1));
     else
         printf("%d is greater than %d\n",*(a+1),*(a));
     free(a);
 }
 void gr3()
 {

  int c;
     printf("enter three numbers\n");
     b=(int*)calloc(3,sizeof(int));
     scanf("%d %d %d",b,b+1,b+2);
     if(*(b)>*(b+1))
        {
            if(*(b)>*(b+2))
               printf("%d is greatest\n",*(b));
          else
             printf("%d is greatest\n",*(b+2));
        }
        else
             printf("%d is greatest\n",*(b+1));
printf("using ternary operator\n");

 c=*(b)>*(b+1)?*(b)>*(b+2)?*(b):*(b+2):*(b+1);
 printf("%d is greatest number\n",c);//ternary operator
free(b);
 }
  void leap()
  {
      printf("enter year\n");

      b=(int*)malloc(1*4);
  scanf("%d",b);
      if(*(b)%4==0)
        printf("%d year is leap year \n",*(b));
      else
            printf("%d year is not leap year \n",*(b));

      free(b);
  }
  void div5()
  {
      printf("enter any number\n");
      b=(int*)calloc(1,4);
     scanf("%d",b);
     if(*(b)%5==0)
            printf("%d number is  divisible by 5 \n",*(b));
         else
             printf("%d number is not divisible by 5 \n",*(b));
  free(b);
  }
  void loop1()
  {
      char *c=NULL;
      int x,y,z;
      int i,n;
      printf("enter your name and also cursor position from where you want to print your name\n ");
printf("please enter your name but first press any key\n after typing your name press escape ? sign confirm your input\n");

      z=keystroke();


      c=(char*)malloc(z*sizeof(char));
       fflush(stdin);
      printf("please enter your name again\n");
      gets(c);
      printf("enter coordinates of x and y\n");
      scanf("%d %d",&x,&y);
      gotoxy(x,y);
      y++;
      printf("enter how many times you want to print your name\n");
      gotoxy(x,y);
      scanf("%d",&n);
      y++;
      for(i=1;i<=n;i++)
      {
          gotoxy(x,y);
          puts(c);
          y++;
          gotoxy(x,y);
      }
      free(c);
    }

void loop2()
{
  printf("please provide the number N\n ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {

      printf("%d\n",i);
  }

}
void loop3()
{
    printf("please provide the number N to print in reverse order\n ");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {

      printf("%d\n",i);
  }
}

 void loop4()
 {
     printf("please provide the number N to print even number \n ");
  scanf("%d",&n);
  for(i=2;i<=n;i=i+2)
  {

      printf("%d\n",i);
  }
 }
 void loop5()
 {
     printf("please provide the number N to print odd number \n ");
  scanf("%d",&n);
  for(i=1;i<=n;i=i+2)
  {

      printf("%d\n",i);
 }
 }
void loop6()
{
    printf("please provide the number N to print even number in reverse order \n ");
  scanf("%d",&n);
  for(i=n;i>=2;i=i-2)
  {

      printf("%d\n",i);
}
}
void loop7()
{
     printf("please provide the number N to print odd number in reverse order \n ");
  scanf("%d",&n);
  for(i=n;i>=1;i=i-2)
  {

      printf("%d\n",i);
}
}
void table()
{
     int k;
     printf("please enter the number whose table is to print on screen \n ");
  scanf("%d",&n);
  printf("please provide the number upto print the table\n");
  scanf("%d",&k);
  for(i=1;i<=k;i++)
   {
       printf("%d*%d=%d\n",n,i,i*n);
   }
}

void sum()
{
     int sum=0;
     printf("enter the number to find sum of n natural number\n -> ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         sum=sum+i;

     }
     printf("%d is sum of %d natural number \n",sum,n);

}

void fact()
{
    int fact=1;
     printf("enter the number to find factorial of n natural number\n -> ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         fact=fact*i;

     }
     printf("%d is factorial of %d natural number \n",fact,n);
}
int sum1(int x)
{
    int sum=0;
    if(x%2==0)
    {
        for(i=2;i<=x;i=i+2)
            sum=sum+i;
          return sum;
    }
    else
    {
        for(i=1;i<=x;i=i+2)
        sum=sum+i;
        return sum;

}
}
 void power()
 {
     int y,t,po=1;
     printf("Enter the base number\n");
     scanf("%d",&y);
     printf("Enter the power Number\n");
     scanf("%d",&t);
     for(i=1;i<=t;i++)
     {
         po=po*y;
     }
     printf("%d is the answer for %d^%d\n",po,y,t);

 }
 int cdi()
 {
     int k=0;

     printf("enter the number \n");
     while(1)
     {

         ch=getch();
         if(ch>=48&&ch<=57)
         {
             printf("%c",ch);
             k++;

        }
        else
        {
            if(ch=10)
            {
                printf("\n");
               break;
            }
              else
              {
                  printf("\n");
                printf("invalid input\n");
                break;

              }
        }

        }
      return k;
 }

void sdi()
{

    int k=0,y,sum=0;
    n=0;
    printf("enter the number\n");
    scanf("%d",&n);


    while(n!=0)
    {
        y=n%10;
        n=n/10;
        sum=sum+y;
        k++;

    }


    printf("Above number have %d the number of digits\n Sum of its digits is %d\n",k,sum);

}

void intrev()
{
    int x,y=0;
    printf("enter the number to reverse it\n");
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        y=y*10+x;
        n=n/10;

    }
    printf("%d is the number after reverse\n",y);

}

int test(int x)

{
    int n,y,k=0;
    n=x;
    while(n!=0)
    {
        y=n%10;
        n=n/10;
        k++;

    }
    return k;
}
int test2(int x,int y)
{
    int po=1;
    for(i=1;i<=y;i++)
     {
         po=po*x;
     }
     return po;
}
void arms()
{
    int n,i,j,x,r,s;
    int b;
     printf("choose logic \n 1. function logic \n 2. loop logic \n");
     scanf("%d",&b);

     if(b==1)
     {


   for(i=0;i<=1000;i++)
    {
        j=test(i);
       if(j==2)
       {
         if( test2((i/10),j)+test2((i%10),j)==i)
            printf("%d is the armsstrong number\n",i);
       }
        else if(j==3)
        {
            if(test2((i/100),j)+test2((i/10%10),j)+test2((i%10),j)==i)
            printf("%d is the armsstrong number\n",i);
        }

    }
     }
if(b==2)
{

  for(n=0;n<=1000;i++)
    {
        n=x;
        s=0;
        while(x!=0)
        {
            r=x%10;
            s=s+r*r*r;
            x=x/10;

        }
        if(s==n)
            printf("%d is the armsstrong number\n ",i);
    }
    printf("easy logic 2nd time\n");
}
}
void ascii()
{
     int i;
   for(i=0;i<=255;i++)
   {
       printf("%d   %c \n",i,i);
   }

}
void prime1()
{

 while(1)
   {

    printf("enter a number\n");
    scanf("%d",&n);
 for(i=2;i<=n-1;i++)
 {

     if(n%i==0)
        break;
 }

     if(i==n)
    printf("%d is  a prime number\n",n);
    else
          printf("%d is not  a prime number\n",n);
           if(ch==27)
            break;

}
}
 void lcm()
 {

    int x,y,L;
    printf("enter two numbers\n");
    scanf("%d %d",&x,&y);
    for(L=x>y?x:y;L<=x*y;L=L+(x>y?x:y))
      if(L%x==0&&L%y==0)
            break;

    printf("%d is the LCM of two number\n",L);
 }

 void prime2()
  {
      int num,pr;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {

         if(num%i==0)
        {
           pr=0;
            for(n=2;n<=i-1;n++)
                if(i%n==0)
                break;

            if(n==i)
              {

                pr=i;
                printf("%d is prime factor of %d\n",pr,num);

              }
              else
                continue;
        }


    }

}
void lcm1()
{
    int x,y,i,n,m,k,j,LC=1,rem=1;
    char ch;



    printf("enter two  numbers\n");
    scanf("%d %d",&x,&y);

    for(i=2;i<=(x>y?x:y);i++)
    {
        m=1;
        n=1;

        if(x%i==0)
        {
            k=popat(i);
            if(k==1)
            {
                m=i;
               x=x/i;



              }


        }



        if(y%i==0)
        {
             k=popat(i);
            if(k==1)
            {
                n=i;
                y=y/i;


            }

     }

        if(m==n)
        {
            LC=LC*m;
        }
        else
        {
            rem=rem*m*n;
        }
        if(x%i==0||y%i==0)
            i=1;
            if(x==1&&y==1)
                break;


}


        printf("%d is lcm of number\n",LC*rem);
        LC=1;
    }

void hcf()
{
    int x,y,H=1;
     printf("enter two  numbers\n");
    scanf("%d %d",&x,&y);
    for(H=(x>y?y:x);H>=1;H--)
        if(x%H==0&&y%H==0)
              break;
     printf("%d is the HcF of number\n",H);

}
void hcf1()
{

    int x,y,HC=1,i,n,m,k,j,p;
    printf("enter two  numbers\n");
    scanf("%d %d",&x,&y);

    for(i=2;i<=(x>y?x:y);i++)
    {
        m=1;
        n=1;

        if(x%i==0)
        {
            k=popat(i);
            if(k==1)
            {
                m=i;
               x=x/i;



              }


        }



        if(y%i==0)
        {
             k=popat(i);
            if(k==1)
            {
                n=i;
                y=y/i;


            }

     }

        if(m==n)
        {
            HC=HC*m;
        }

        if(x%i==0||y%i==0)
            i=1;
       if(x==1&&y==1)
                break;


}


        printf("%d is HcF of number\n",HC);

}
void pt()
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
}






