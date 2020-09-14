#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i, len;
    int flag = 0;

    printf("\nEnter a string : ");
    gets(str);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {

        if(str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

        if (flag)
        {
            printf("\nNot Palindrome\n", str);
        }
        else
        {
            printf("\nPalindrome\n", str);
        }

    return 0;
}
