/**
@DarkMotion
*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    FILE *m,*c;
    int limit;
    char data;
    m=fopen("main.txt","r");
    c=fopen("copy.txt","a");
    if(m==NULL){printf("problem.\n");}
    while(data!='EOF'){
        data=fgetc(m);
        fprintf(c,"%c",data);
    }
    fclose(m);
    fclose(c);
    return 0;
}
