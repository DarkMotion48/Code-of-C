#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,z;
    scanf("%lf%lf%lf",&x,&y,&z);
    result(x,y,z);
    return 0;
}

void result(double x,double y,double z)
{
    double a,b,c;
    double det,r1,r2,rp,ip;
    det = b*b-4*a*c;
    if(det >0){
        r1 = (-b+sqrt(det))/(2*a);
        r2 = (-b-sqrt(det))/(2*a);{
            if(r1==0)
                printf("r1= 0 and r2= %.2lf",r2);
            else if(r2==0)
                printf("r1= %.2lf and r2= 0",r1);
            else if(a==0)
                printf("r1=r2=Infinity");
            else
                printf("r1= %.2lf and r2= %.2lf",r1,r2);
        }
    }
    else if (det == 0){
        r1=r2= -b/(2*a);{
        if(b=0)
            printf("r1=r2=0",r1);
        else if(a==0)
                printf("r1=r2=Infinity");
        else
            printf("r1=r2=%.2lf",r1);
        }
    }
    else{
        rp = -b / (2*a);
        ip= sqrt(-det)/(2*a);{
        if(b=0)
            printf("r1=r2=0");
        else if(a==0)
                printf("r1=r2=Infinity");
        else
            printf("r1 = %.2lf+%.2lfi and r2 = %.2lf-%.2lfi",rp,ip,rp,ip);
        }
    }
}
