#include <stdio.h>
#define SIZE 200

void pass_string(char s[])	//keep square brackets in signature
{
	printf("%s",s);
}

int main()
{
	char a[SIZE];
	pass_string(a);	//specify only function name in calling statement
	return 0;
}
