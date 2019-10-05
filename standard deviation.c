#include<stdio.h>
#include<math.h>

int main()
{
    int i,n=0;
    float value[100],deviation,sum=0,sumsqr=0, variance,mean,stddeviation;
    printf("Input Values(Input -1 to End): ");
    for(i=1;i<100;i++){
        scanf("%f",&value[i]);
        if( value[i] == -1)
            break;
        sum=sum + value[i];
        n++;
    }
    mean=sum/(float)n;
    for(i=1;i<=n;i++){
        deviation = value[i] - mean;
        sumsqr += deviation * deviation;
    }
    variance=sumsqr/(float)n;
    stddeviation = sqrt(variance);
    printf("\nNumber of items: %d\n",n);
    printf("Mean: %f\n",mean);
    printf("Standard Deviation: %f\n",stddeviation);
    return 0;
}
