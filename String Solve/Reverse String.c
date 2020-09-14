#include <stdio.h>
#include <string.h>

int main()
{
   char str[100];

   printf("\nEnter a string : \n");
   gets(str);

   strrev(str);

   printf("\nThe Reverse String : %s\n", str);

   return 0;
}
