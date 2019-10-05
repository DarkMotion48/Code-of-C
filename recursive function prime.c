#include <stdio.h>

int main()
{
   int num, i, j = 0;

   printf("Enter number: ");
   scanf("%d", &num);
   for (i = 1; i <= num; i++)
   {
      if ((num % i) == 0)
         {
            j++;
         }
   }

   if (j == 2)
      printf("%d is a prime number.", num);
   else
      printf("%d is not a prime number.", num);

   return 0;
}
