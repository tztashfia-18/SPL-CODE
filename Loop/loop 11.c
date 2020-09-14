#include <stdio.h>

int main()
{
    int i,n,a,b,s;
    a=1;
    b=2;
    s=0;
    scanf("%d", &n);
    for(i=1; i <= n; i++){
    s=s+a*a*b;
    a=a+1;
    b=b+1;
    }
    printf("%d", s);
    return 0;
}
