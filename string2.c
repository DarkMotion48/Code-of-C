#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int v=0,c=0,d=0,s=0,i;
    printf("Enter the String:");
    gets(ch);
    for(i=0;ch[i]!='\0';i++){
        if((ch[i]>='A'&&ch[i]<='Z') || (ch[i]>='a'&&ch[i]<='z')){
                if(ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'||ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
                    v++;
                }
                else{
                    c++;
                }

        }
        else if(ch[i]>='0'&&ch[i]<='9'){
            d++;
        }
        else if(ch[i]==' '){
            s++;
        }
    }
    printf("Vowel:%d\nConsonant:%d\nDigit:%d\nSpace:%d\n",v,c,d,s);
}
