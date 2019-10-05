#include<stdio.h>
#include<string.h>

void p_string(char ch[][80]);

int main()
{
    int i=0;
    char c[10][80];
    printf("Enter a string[or 'end' to stop]:");
    for(;;){
        scanf("%s",&c[i]);
        if(strcmp(c[i],"end")==0)
            break;
        i++;
    }
    printf("List of strings:\n");
    p_string(c);
}

void p_string(char ch[][80])
{
    int i=0;
    for(;;){
         if(strcmp(ch[i],"end")==0)
            break;
            printf("%s\t",ch[i]);
        i++;
    }
}
