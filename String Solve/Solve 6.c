#include <stdio.h>
#include <string.h>


int main()
{
    char str[100];
    int i;

    printf("\nEnter a String: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        else if(str[i] >= 'a' && str[i] <= 'z')
        {
             str[i] = str[i] - 32;
        }

    }

    printf("\nToggle of String : %s\n", str);

    main();
    return 0;
}
