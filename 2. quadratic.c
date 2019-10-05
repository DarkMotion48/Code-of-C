#include<stdio.h>
#include<math.h>
void result(double a, double b, double c);

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    result(a,b,c);
    return 0;
}

void result(double a, double b, double c)
{
    double det=0,sq=0,r1=0,r2=0,rp=0,ip=0;
    det = b*b-(4*a*c);
    sq=sqrt(det);
    if(det>0){
        if(a==0){
            printf("r1=r2=Infinity");
        }
        else{
            r1=(-b+sq)/(2*a);
            r2=(-b-sq)/(2*a);
            printf("r1=%lf\n r2=%lf\n",r1,r2);
        }
    }
    else if(det == 0){
        if(a==0){
            printf("r1=r2=Infinity");
        }
        else if(b==0){
            printf("r1=r2=0");
        }
        else{
            r1=-b/(2*a);
            printf("r1=r2=%lf",r1);
        }
    }
    else{
        rp=-b/(2*a);
        ip=sq/(2*a);
        if(a==0){
            printf("r1=r2=Infinity");
        }
        else{
            printf("r1=%.2lf + %.2lf i \n r2=%.2lf + %.2lf i \n",rp,ip,rp,ip);
        }
    }
}
