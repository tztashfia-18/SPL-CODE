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

    int Max = A[0][0];
    int p, q;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(Max < A[i][j])
            {
                Max = A[i][j];
                p = i;
                q = j;
            }
        }
        printf("\n");
    }
    printf("The max value is: %d\n", Max);
    printf("The location is: [%d][%d]\n\n", p, q);

    return 0;
}
