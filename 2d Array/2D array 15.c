#include<stdio.h>
int main()
{

    int m;
    printf("Enter size m\n");
    scanf("%d", &m);

    int n;
    printf("Enter size n\n");
    scanf("%d", &n);

    int A[m][n];

    int i, j;
    printf("Enter array\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int sum;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
           sum = sum + A[i][j];
        }

    }
    printf("%d\n", sum);


    return 0;
}
