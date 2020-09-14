#include <stdio.h>
#include <string.h>

int main()
{
   char s[100];
   int i; //j = 0;
   printf("\nEnter a String : \n");
   gets(s);

   for (i = 0; s[i] != '\0'; i++)
   {
      if(s[i] >= '0' && s[i] <= '9')
      {
          //j++;
        printf("\nOutput = %s\n", s);
      }
      else
        printf("\nWrong Input\n");
    }
//    if(j == strlen(s))
//       {
//        printf("\nOctal");
//    }
//

    return 0;
}


