#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i=1, j=1;

    for(i=1; i<=n; i++){

        if(i%2==1)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}
