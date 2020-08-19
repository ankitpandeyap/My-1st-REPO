#include<stdio.h>
#include<stdlib.h>

#include<math.h>

#define PI 3.14
// program to find area and volume of different shape
void quad(void);

void circle()
 {  int x;
 float acir;
      printf("enter the radius of circle\n");
 scanf("%d",&x);

    printf("the numbers is %d \n",x);
    acir=x*x*PI;
    printf("area of circle of radius %d is %f ",x,acir);
     printf("       \n");
 }


void sphere()
{
    int a;
   float area,vol;
  printf("enter the radius of sphere\n");
  scanf("%d",&a);
vol=4*PI*a*a*a;
area=4*PI*a*a;
printf("the volume and area of sphere radius %d is %f and %f respectively\n",a,vol,area);
 printf("       \n");

}
void hemi()
{
    int a;
    float b,v;
    printf("Enter radius\n");
    scanf("%d",&a);
    b=2*PI*a*a;
    v=2*PI*a*a*a;
    printf("the hemisphere of radius %d having area %f and volume %f",a,b,v);
 printf("       \n");
}
void sqaure()
{
    float a;

    printf("enter the side of square\n");
    scanf("%f",&a);
  printf("the area of square having side %f is %f\n",a,(a*a));
   printf("       \n");
}
void rectangle()
{
    float area,a,b;
    printf("enter the length and breadth of reectangle\n");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("Area of rectangle is %f\n",a*b);
     printf("       \n");
}
void triangle()
{
    int a,b;
    printf("enter the base and height of traingle\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("the area of traingle is %f\n",0.5*a*b);
     printf("       \n");
}
void cube()
{
    int t;
    printf("enter the side of cube\n");
    scanf("%d",&t);

    printf("the area and volume of cube having side %d is %d and %d respictively\n",t,(4*t*t),(t*t*t));
 printf("       \n");
}
void cuboid()
{
    int a,b,c,d;
    printf("enter the length breadth and height of cuboid\n");
    scanf("%d %d %d",&a,&b,&c);
  d=2*((a*b)+(a*c)+(a*c));
    printf("the area and volume of cuboid  is %d and %d respectively\n",d,(a*b*c));
     printf("       \n");
}
void main()
{     int a;


    while(1)
    {
     printf("choose your option from the following menu \n ");
  printf("1. area of circle\n");
   printf("2. area of square\n");
    printf("3. area of Rectangle\n");
     printf("4. area of triangle\n");
    printf("now for volume of 3d shapes\n");
    printf("6 volume and area of sphere\n");
    printf("7 volume and area of hemisphere\n");
    printf("8   volume and area of cube\n");
    printf("9 volume and area of cuboid\n");
    printf("misclleaneous\n");
    printf("10. square root of a equation\n");
    printf("for exiting press 11\n");
    printf("       \n");
   scanf("%d",&a);
   if(a==1)
    circle();
   if(a==2)
    sqaure();
   if(a==3)
    rectangle();
   if(a==4)
    triangle();
   if(a==6)
   sphere();
   if(a==7)
    hemi();
   if(a==8)
    cube();
   if(a==9)
    cuboid();
   if(a==10)
    quad();
   if(a==11)
    exit(0);


    }

}
void quad()
{
    int a,b,c;
    float d;
    float e,f;
    printf("please the enter the coefficients of quadtritic equation\n");
    scanf("%d",&a);
    fflush(stdin);
    scanf("%d",&b);
    fflush(stdin);
    scanf("%d",&c);
    printf("the above equation will look like\n");
    printf("%dx2+%dx+%d\n",a,b,c);
    d=b*b-4*a*c;
    printf("%f is discriminat\n",d);
    if(d>0)
    {
        printf("roots are availaible and valid \n");
    e=(-b+sqrt(d))/(2*a);
    f=(-b-sqrt(d))/(2*a);
    printf("the roots of following equation is %f and %f\n",e,f);
     printf("       \n");
    }
if(d=0)
{
    printf("roots are same because discriminant is 0\n");
    e=(-b/(2*a));
    printf("%f is root \n",e);

}
 else
{
    printf("roots are imaginary and hence not valid\n");
}
}

