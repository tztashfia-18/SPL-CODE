#include <stdio.h>
#include <string.h>

int main()
{
   char s[100];
   int i;
   printf("\nEnter a String : ");
   gets(s);

   for (i = 0; s[i] != '\0'; i++)
    {
      if(s[i] >= 'A' && s[i] <= 'Z')
      {
        s[i] = s[i] + 32;

        printf("\nOutput = %s", s);
      }
    else if(s[i] >= 'a' && s[i] <= 'z')
      {
        s[i] = s[i] - 32;

        printf("\nOutput = %s", s);
       }
    else
        printf("Wrong Input\n");
    }

    main();
    return 0;
}

