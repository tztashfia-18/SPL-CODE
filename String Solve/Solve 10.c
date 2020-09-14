#include <stdio.h>
#include <string.h>

int main()
{
   char str1[100];
   char str2[100];
   char str3[100];

   printf("\nEnter str1 : \n");
   gets(str1);

   printf("\nEnter str2 : \n");
   gets(str2);

   int str1_len = strlen(str1);
   int str2_len = strlen(str2);

   int i, j;
   for(i = 0; i <= str1_len; i++)
    {
        str3[i] = str1[i];

    }

   for(j = 0; j <= str2_len; j++)
    {
        str3[str1_len + j] = str2[j];

    }
   str3[i + j] = '\0';

   puts(str3);


   main();
   return 0;
}

