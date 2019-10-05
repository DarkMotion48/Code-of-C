#include<stdio.h>
int main()
{
    int n1,n2;
    float result ;
    char choice;
    printf("Enter value of numbers=");
    scanf("%d%d",&n1,&n2);
    printf("Enter your choice");
    choice = getch();
    switch(choice)
    {
    case '+':
        result = n1+n2;
        printf("Result of addition is %f", result);
        break;
    case '-':
        {
            if(n1>n2)
            result = n1-n2;
        else
            result = n2-n1;
        }
        printf("Result of subtitution is %f", result);
        break;
    case '*':
        result = n1*n2;
        printf("Result of multification  is %f", result);
        break;
    case '/':
        result = n1/n2;
        printf("Result of divition is %f", result);
        break;
    default:
        printf(" Invalid Choice");
    }
    return 0;
}
