#include <stdio.h>
#include <string.h>

int main()
{
       char str[100], sub[100];
       int index, len, i = 0;

       printf("\nEnter a String : ");
       gets(str);

       printf("Enter Index And Length of Substring\n");
       scanf("%d%d", &index, &len);

       for(i = 0; i <= len; i++)
        {
          sub[i] = str[index + i - 1];
        }
       sub[i] = '\0';

       printf("The substring is: %s\n", sub);

       return 0;
}

