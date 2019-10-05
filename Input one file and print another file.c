/**
@DarkMotion
*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    FILE *f1,*f2,*rf;
    char data,ld=' ';
    f1=fopen("file1.txt","a");
    f2=fopen("file2.txt","r");
    fprintf(f1,"%c\n",ld);
    while(data!='EOF'){
        data=fgetc(f2);
        fprintf(f1,"%c",data);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
