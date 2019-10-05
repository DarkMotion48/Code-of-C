#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number(Out of 100): ");
    scanf("%d",&n);
    if( n>=40 && n<45){
        printf("Grade: D\nGrade Point: 2.00\n");
    }
    else if( n>=45 && n<50){
        printf("Grade: C\nGrade Point: 2.25\n");
    }
    else if( n>=50 && n<55){
        printf("Grade: C+\nGrade Point: 2.50\n");
    }
    else if( n>=55 && n<60){
        printf("Grade: B-\nGrade Point: 2.75\n");
    }
    else if( n>=60 && n<65){
        printf("Grade: B\nGrade Point: 3.00\n");
    }
    else if( n>=65 && n<70){
        printf("Grade: B+\nGrade Point: 3.25\n");
    }
    else if( n>=70 && n<75){
        printf("Grade: A-\nGrade Point: 3.5\n");
    }
    else if( n>=75 && n<80){
        printf("Grade: A\nGrade Point: 3.75\n");
    }
    else if( n>=80 && n<100){
        printf("Grade: A+\nGrade Point: 4.0\n");
    }
    else{
        printf("Grade: F\nGrade Point: 0.00\n");
    }
    return 0;
}
