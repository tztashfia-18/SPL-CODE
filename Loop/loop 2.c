#include<stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int j=1;
    int i=1;
    while(i<n)
    {

        if(i==1)
            printf("%d ", j);
        else
            printf("%d ", j+2);
        i++;
    }

    return 0;
}

