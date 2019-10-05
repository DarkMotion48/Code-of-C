#include<stdio.h>
#include<math.h>

 int main()
 {
     float x1,x2,y1,y2,D=0;
     printf("Enter X1:");
     scanf("%f",&x1);
     printf("Enter X2:");
     scanf("%f",&x2);
     printf("Enter Y1:");
     scanf("%f",&y1);
     printf("Enter Y2:");
     scanf("%f",&y2);
     D=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
     printf("Distance Between Two points is: %.2f\n",D);
     return 0;
 }
