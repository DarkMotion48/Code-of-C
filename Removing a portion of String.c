#include <stdio.h>
#include <string.h>

void removeAll(char * str, const char rem)
{
    int i, j;
    int len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i] == rem)
        {
            for(j=i; j<len; j++)
                str[j] = str[j+1];
            len--;
            i--;
        }
    }
}

int main()
{
    char str[100];
    char rem;
    printf("Enter any string:\n");
    gets(str);
    printf("Enter character to remove from string:\n");
    rem = getchar();
    removeAll(str, rem);
    printf("String after removing '%c': %s\n", rem, str);
    return 0;
}
