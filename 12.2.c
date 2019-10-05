#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp1 = fopen("DATA1.txt", "r");
   FILE *fp2 = fopen("DATA2.txt", "r");
   FILE *fp3 = fopen("DATA.txt", "w");
   char c;
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Could not open files");
         exit(0);
   }
   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);
   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);
   printf("Merged DATA1.txt and DATA2.txt into DATA.txt");
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}

