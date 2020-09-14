#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int val, avg=0, sum=0;

    int i=1;

    for(i=1; i<=n; i++){

        scanf("%d", &val);
        sum = sum + val;

    }
    avg = sum / n;
    printf("%d", avg);

    return 0;
}
