#include<stdio.h>

int main()
{

    int row,col,n;
    scanf("%d",&n);

    for( row=n; row>=1; row--)
        {
        for( col=n; col>=row; col=col-1)
        {

            printf("%d",col);

        }
        printf("\n");
    }



    return 0;
}
