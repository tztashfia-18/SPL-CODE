#include<stdio.h>

int main()
{
    char ch;
    int i;

    for(i=1; i<100; i++){
        scanf(" %c", &ch);

        if(ch == 'A')
            break;


        printf("Input%d: %c\n", i,ch);

        }

    return 0;
}
