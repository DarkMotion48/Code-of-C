#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50], str2[50];
    strcpy(str1,"This is source.");
    strcpy(str2,"This is destination.");
    strcat(str2,str1);
    printf("Final string is: %s\n",str2);

    int result;
    result = strcmp(str1, str2);
    printf("Comparing = %d\n", result);

    strcpy(str2,str1);
    printf("Copy: %s\n",str2);

    printf("Length of string1 = %d \n",strlen(str1));

    char *ret;
    ret = strstr(str1,str2);
    printf("The substring is: %s\n", ret);
    return(0);
}
