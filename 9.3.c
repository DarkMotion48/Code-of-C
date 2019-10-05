#include<stdio.h>
#include<string.h>
#include<math.h>
float series(int x, int n);
int factorial(int i);

int main()
{
    int x,n;
    float c;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    c=series(x,n);
    printf("Evaluate result: %.3f",c);
    return 0;
}

float series(int x, int n)
{
    float result=0,t=0,tem,temp;
    int i,j;
    for(i=1,j=1;i<=n;i+=2,j++){
        if (j%2 !=0){
            tem= pow(x,i);
            temp=factorial(i);
            t=tem/temp;
            result+=t;
        }
        else{
             tem= pow(x,i);
            temp=factorial(i);
            t=tem/temp;
            result-=t;
        }
    }
    return result;
}

int factorial(int i)
{
    if(i==1)
        return 1;
    else
        return (i * factorial(i-1));
}
