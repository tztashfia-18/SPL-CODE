#include <stdio.h>
#include <string.h>

int main()
{
   char s[100];
   char d[100];
   int i;

   printf("\nEnter a string : ");
   gets(s);

   for (i = 0; s[i] != '\0'; i++)
    {
      d[i] = s[i];
    }

   puts(d);


   main();
   return 0;
}

