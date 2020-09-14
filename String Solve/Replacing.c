#include<stdio.h>
#include<string.h>

int main()
{

    int i;
    char a,b,str[100];

    printf("\nEnter The string: \n");
    fgets(str,sizeof(str),stdin);

    printf("\nEnter The Character To Be Replaced : \n");
    scanf(" %c",&a);

    printf("\nEnter The Character to Replaced : \n");
    scanf(" %c",&b);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==a)
        {
        str[i] = b;
        }

    }
    printf("\nThe New String Is : \n");
    puts(str);

  return 0;

}
