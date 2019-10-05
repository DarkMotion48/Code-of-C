#include<stdio.h>
int main()
{
    int i,a[20],even=0,odd=0;
    printf("Enter 20 integer number:\n");
    for(i=0;i<20;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++){
        if(a[i]%2==0){
            even=even+a[i];
        }
        else{
            odd=odd+a[i];
        }
    }
    printf("Total of Even Numbers=%d\n",even);
    printf("Total of Odd Numbers=%d\n",odd);
    return 0;
}
