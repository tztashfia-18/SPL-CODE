#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], c;
    int i,count = 0;

    printf("\nEnter String : ");
    gets(s);

    printf("\nThe Charaacter is : ");
    c = getchar();

    for(i=0;s[i];i++)
    {
    	if(s[i] == c)
    	{
          count++;
		}
 	}

	printf("\nThe Character '%c' is %d Times in The String\n", c, count);



    return 0;
}
