#include<stdio.h>

int main()
{
    int n,i,j=1;
    scanf("%d", &n);

    for(i=0; i<100; i++){

        j = n % 10;
        n = n / 10;

        if(j !=0)
            printf("%d", j);
    }



    return 0;
}
