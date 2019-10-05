#include<stdio.h>
int main()
{
   int size, i, arr[30];
   int *ptr;
   ptr = &arr[0];
   printf("size of array :\n");
   scanf("%d", &size);
   printf("Enter elements of array:\n");
   for (i = 0; i < size; i++) {
      scanf("%d", ptr);
      ptr++;
   }
   ptr = &arr[size - 1];
   printf("Elements of array in reverse order are :\n");
   for (i = size - 1; i >= 0; i--) {
      printf("%d\n", *ptr);
      ptr--;
   }
return 0;
}
