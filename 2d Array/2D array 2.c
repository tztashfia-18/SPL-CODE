#include<stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int arr[m][n];
    int i, j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Row wise: ");
    for (i= 0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
    printf("Column wise: ");
    for (i =0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf("%d ", arr[j][i]);
        }
    }
    printf("\n");
    return 0;
}
