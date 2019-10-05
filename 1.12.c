#include<stdio.h>
#include<math.h>
#define pie 3.1416

 int main()
 {
     int x1=0,x2=4,y1=0,y2=5;
     float r=0,p=0,a=0;
     r=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
     p=2*pie*r;
     a=pie*r*r;
     printf("Perimeter of the Circle is:%.2f\n",p);
     printf("Area of the Circle is:%.2f\n",a);
     return 0;
 }
