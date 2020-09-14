#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int x = (n/2)+1;
    int space = 0;
    int i,j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
            printf(" ");

        for(j=1;j<=x;j++)
            printf("*");

        printf("\n");

        if(i<(n/2)+1)
        {
            x--;
            space++;
        }
        else
        {
            x++;
            space--;
        }
    }

    return 0;
}
