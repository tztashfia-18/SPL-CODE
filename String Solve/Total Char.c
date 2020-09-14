#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int j;

    printf("\nEnter String : ");
    gets(str);


    for(int i = 0; i < strlen(str); i++) {
        if(str[i] != ' ')
        j++;
    }


    printf("\nTotal number of characters in a string: %d\n", j);

    return 0;
}
