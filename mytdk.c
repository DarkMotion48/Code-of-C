#include<stdio.h>
#include<string.h>
int character(char a[]);
char back(char a[]);
int main()
{
    char a[758];
    gets(a);
    int count =0,backward,temp,i,j;
    count=character(a);
    printf("Number of character =%d\n",count);
    backward=back(a);
    printf("%s",a);
    return 0;

}
int character(char a[])
{
    int i,count=0;
    for(i=0;a[i]!='\0';i++){
            if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
                count++;
            }


    }
    return count;
}
char back(char a[])
{
    char temp,backward;
    int j=0,i;
    i=0;
    j=strlen(a)-1;


    while(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;

}
return backward;
}

