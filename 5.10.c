#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,det,r1,r2,rp,ip,x;
    printf("Enter the value of a, b & c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    det = b*b-4*a*c;
    if(a==0 && b==0){
        printf("No Solution.\n");
    }
    else if(a==0){
        x= -c/b;
        printf("There is only one roots & that is: %lf\n",x);
    }
    else if(det<0){
        rp = -b / (2*a);
        ip= sqrt(-det)/(2*a);
        printf("x1 = %.2lf+%.2lfi and x2 = %.2lf-%.2lfi\n",rp,ip,rp,ip);
    }
    else{
        r1 = (-b+sqrt(det))/(2*a);
        r2 = (-b-sqrt(det))/(2*a);
        printf("x1= %.2lf and x2= %.2lf\n",r1,r2);
    }
    return 0;
}
