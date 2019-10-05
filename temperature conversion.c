#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    float max,step,c=0;
    printf("Enter the maximum value:");
    scanf("%f",&max);
    printf("Enter the Increment:");
    scanf("%f",&step);
    printf("Fahrenheit\t\tCelsius\n");
    for(i=0;i<=max;step++){
        c=(i-32)/1.8;
        printf("%.1f\t\t%.2f\n",i,c);
    }
    return 0;
}
