#include<stdio.h>

// float average(float a[]);
 float average( float number[])
 {
     int i,sum=0;
     for (i=0;i<5;i++)
     {
         sum=sum + number[i];
     }
     return sum/5;
 }
 int main()
{
    float avg,number[5]={2,3,4,5,6};
    avg=average(number);
    printf("%f",avg);
    return 0;
}
