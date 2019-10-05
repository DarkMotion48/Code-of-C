#include <stdio.h>
int main()
{
    int i, j, start, end;
    int isprime, sum=0;
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    for(i=start; i<=end; i++){
        isprime = 1;
        for(j=2; j<=i/2 ;j++){
            if(i%j==0){
                isprime = 0;
                break;
            }
        }
        if(isprime==1){
            sum=sum+i;
        }
    }
    printf("Sum of all Prime numbers between %d to %d = %d", start, end, sum);
    return 0;
}
