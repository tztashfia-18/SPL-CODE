#include <stdio.h>
#include <string.h>

int main() {

    char str1[100];
    char str2[100];

    printf("\nEnter a String : ");
    gets(str1);

    strcpy(str2, str1);

    printf("\n%s\n", str2);

    return 0;
}
