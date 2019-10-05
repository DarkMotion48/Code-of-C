#include<stdio.h>

int find_sum(int number[][3])
{
    int sum=0,i,j;
    for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                sum = sum + number[i][j];
            }
    }
    return sum;
}

int main()
{
    int number[2][3]={10,20,30,40,50,60};
    int result;
    result=find_sum(number);
    printf("The sum of the element is %d",result);
    return 0;
}
