#include<stdio.h>
#include<math.h>
int prime(int n);

 int main()
 {
     int n,p;
     printf("Enter the value of n: ");
     scanf("%d",&n);
     p=prime(n);
     printf("Argument is: %d",p);
     return 0;
 }

 int prime(int n)
 {
     int i,x=0,count=0;
     x=sqrt(n);
     for(i=2;i<=x;i++){
        if(n%i==0){
            count++;
        }
     }
     if(count==0){
        return 1;
     }
     else
        return 0;
 }
