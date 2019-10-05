#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum,per;
    printf("Marks of Physics=");
    scanf("%d",&a);
    printf("Marks of Chemistry=");
    scanf("%d",&b);
    printf("Marks of Biology=");
    scanf("%d",&c);
    printf("Marks of Mathematics=");
    scanf("%d",&d);
    printf("Marks of Computer=");
    scanf("%d",&e);
    sum=a+b+c+d+e;
    per=sum/5;
    if(per>=90){
        printf("Percentage is >=%d  & the grade is A",per);
    }
    else if(per>=80){
        printf("Percentage is >=%d & the grade is B",per);
    }
    else if(per>=70){
        printf("Percentage is >=%d & the grade is C",per);
    }
    else if(per>=60){
        printf("Percentage is >=%d & the grade is D",per);
    }
    else if(per>=40){
        printf("Percentage is >=%d & the grade is E",per);
    }
    else{
        printf("Percentage is <%d & the grade is F",per);
    }
    return 0;
}
