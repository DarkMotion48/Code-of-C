#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000], letter;
    int i, frequency=0;
    printf("Enter the string:");
    gets(ch);
    printf("Given character to find frequency:");
    scanf("%c",&letter);
    for (i=0;ch[i]!='\0';i++)
    {
        if (letter==ch[i])
           {
               frequency++;
           }
    }
    printf("Number of occurence is %d", frequency);

}
