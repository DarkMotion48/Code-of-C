#include<stdio.h>
int main()
{
    int choice;
    printf("1.Regular Employees 2. Daily Wages 3. Consolidate\nGive your choice: ");
    scanf("%d",&choice);
    int basic,hra,wages_per_hour,number_of_hours,fixed_amount,da,percent;
    float gross_pay;
    switch(choice)
    {
    case 1:
     {
        printf("Basic = ");
        scanf("%d",&basic);
        printf("HRA = ");
        scanf("%d",&hra);
        printf("Daily Allowance = ");
        scanf("%d",&da);
        printf("Percentage of DA = ");
        scanf("%d",&percent);
        gross_pay=basic+hra+(((percent/100)+da)*basic);
        printf("Gross income for Regular Employees is %.2f",gross_pay);
        break;
     }
    case 2:
        {
        printf("Wages Per Hour = ");
        scanf("%d",&wages_per_hour);
        printf("Number of Hours = ");
        scanf("%d",&number_of_hours);
        gross_pay=wages_per_hour*number_of_hours;
        printf("Gross income for Daily Wages Employees is %2f",gross_pay);
        break;
        }
    case 3:
        {
        printf("Fixed Amount = ");
        scanf("%d",&fixed_amount);
        gross_pay=fixed_amount;
        printf("Gross income for Consolidated Employees is %f",gross_pay);
        break;
        }
    default:
        printf("Invalid Action");
        break;
    }
}
