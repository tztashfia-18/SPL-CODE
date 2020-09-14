#include <stdio.h>
#include <string.h>

int main()
{
   char str1[100];
   char str2[100];


   printf("\nEnter str1 : \n");
   gets(str1);

   int str1_len = strlen(str1);

   int i, j = 0;
   printf("\n");

   for(i = 0; i <= str1_len; i++)
   {
       if(str1[i] == ' ' || str1[i] == '\0')
       {
           str2[j] = '\0';
           puts(str2);
           j=0;
       }
       else
       {
           str2[j] = str1[i];
           j++;
       }
    }

   return 0;
}


