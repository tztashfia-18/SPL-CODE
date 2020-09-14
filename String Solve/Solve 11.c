#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], sub[50];
    int m = 0, n = 0, i, j, flag;

    printf("\nEnter a String: ");
    gets(str);

    printf("\nEnter Substring: ");
    gets(sub);

    while (str[m] != '\0')
        m++;

    while (sub[n] != '\0')
        n++;

    for (i = 0; i <= m - n; i++)
    {
        for (j = i; j < i + n; j++)
        {
            flag = 1;
            if (str[j] != sub[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("\nSubstring");
    else
        printf("\nNot Substring");

    return 0;
}
