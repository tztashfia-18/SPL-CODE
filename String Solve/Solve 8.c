#include <stdio.h>
#include <string.h>

int main()
{
   char str1[100];
   char str2[100];
   char str3[100];
   int i;

   printf("\nEnter a string : ");
   gets(str1);
   printf("\nEnter a string : ");
   gets(str2);

   printf("\n");

   for (i = 0; str1[i] != '\0'; i++)
    {
      if(str1[i] == str2[i])
      {
          str3[i] = str1[i];
      }
      else if(str1[i] >= str2[i])
      {
          puts(str2);
      }
      else
      {
          puts(str1);
      }

   }
   if(strlen(str1) == strlen(str3))
   {
       printf("Both Equal\n");
   }


   return 0;
}

