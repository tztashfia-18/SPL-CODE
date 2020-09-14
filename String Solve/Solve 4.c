#include <stdio.h>
#include <string.h>

int main()
{
   char s[100];
   int i,counter = 0;
   printf("\nEnter a String : \n");
   gets(s);

   for (i = 0; s[i] != '\0'; i++)
   {

        counter++;
   }

    printf("\nLength: %d\n", counter);

    main();

    return 0;
}


