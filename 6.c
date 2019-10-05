#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>b&& a>c){
    if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(a*a==b*b+c*c){
        printf("TRIANGULO RETANGULO\n");
    }
    else if(a*a>b*b+c*c){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(a*a<b*b+c*c){
        printf("TRIANGULO ACUTANGULO\n");
    }
    else if(a==b==c){
        printf("TRIANGULO  EQUILATERO\n");
    }
    else{
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}
