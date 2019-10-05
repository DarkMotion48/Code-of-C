#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j=0,n,m,l=0;
    printf("Enter Any String: ");
    gets(a);
    l=strlen(a);
    printf("Enter the required position of the character: ");
    scanf("%d",&n);
    printf("How many character you want to extract: ");
    scanf("%d",&m);
    if(l>m+n-1){
        for (i=n;i<m+n;i++){
            b[j++]=a[i];
            b[j]='\0';
        }
    printf("The extracted portion is: %s\n",b);
    }
    else{
        printf("To extract a portion is not possible.\n");
    }
    return 0;
}
