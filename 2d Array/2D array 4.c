#include <stdio.h>

int main()
{
    int n;
    printf("Enter Size\n");
    scanf("%d", &n);

    int A[n][n];

    int row, col;
    printf("Enter elements (%d X %d): \n", n,n);

    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    printf("\nMajor diagonal: ");

    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            if(row == col)
                printf(" %d", A[row][col]);
        }
    }

    printf("\nMinor diagonal: ");

    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            if(row+col == ((n+1)-2))
            {
                printf(" %d", A[row][col]);
            }
        }
    }
    return 0;
}
