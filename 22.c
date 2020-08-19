//program to convert binary to decimal for greater than 10 digits
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int BtoD(char []);

int main()
{
  register int i;
  int k;
    char s[20];
   printf("enter the binary number \n");
gets(s);
  k=(int)BtoD(s);
  printf("%d",k);

}
int BtoD(char s[20])
{
    register int i;
    int d=0;
    for(i=0;s[i];i++)
    {
        if(s[i]=='0')
            d=d*2+0;
            else
                d=d*2+1;
    }
    return(d);
}
