#include<stdio.h>
#include<math.h>
#define pie 3.1416

int main()
{
     int x1=2,x2=5,y1=2,y2=6;
     float r=0,p=0,a=0,d=0;
     d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
     r=d/2;
     a=pie*r*r;
     printf("Area of the Circle is:%.2f\n",a);
     return 0;
}
