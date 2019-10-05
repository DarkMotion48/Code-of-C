#include<stdio.h>
int main()
{
    int choice;
    printf(" 1. Regular Employees\n 2. Daily Wages\n 3. Consolidate\n Give your choice: ");
    scanf("%d",&choice);
    int basic,hra,wages_per_hour,number_of_hours,fixed_amount,da,percent;
    float gross_pay;
    switch(choice)
    {
    case 1:
     {
        printf("Basic = ");
        scanf("%d",&basic);
        printf("\n");
        printf("HRA = ");
        scanf("%d",&hra);
        printf("\n");
        printf("Daily Allowance = ");
        scanf("%d",&da);
        printf("\n");
        printf("Percentage of DA = ");
        scanf("%d",&percent);
        printf("\n");
        gross_pay=basic+hra+(((percent/100)+da)*basic);
        printf("Gross income for Regular Employees is %f",gross_pay);
        break;
     }
    case 2:
        {
        printf("Wages Per Hour = ");
        scanf("%d",&wages_per_hour);
        printf("\n");
        printf("Number of Hours = ");
        scanf("%d",&number_of_hours);
        printf("\n");
        gross_pay=wages_per_hour*number_of_hours;
        printf("Gross income for Daily Wages Employees is %2f",gross_pay);
        break;
        }
    case 3:
        {
        printf("Fixed Amount = ");
        scanf("%d",&fixed_amount);
        printf("\n");
        gross_pay=fixed_amount;
        printf("Gross income for Consolidated Employees is %f",gross_pay);
        break;
        }
    default:
        printf("Invalid Action");
        break;
    }
}
