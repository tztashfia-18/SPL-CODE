#include <stdio.h>

int main()
{
    int n;
    printf("Enter Size\n");
    scanf("%d", &n);

    int A[n][n];

    int row, col;
    printf("The array is: \n");

    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            if(row == col)
                A[row][col]=1;
            else
                A[row][col]=0;
        }
    }

    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            printf(" %d", A[row][col]);
        }
        printf("\n");
    }


    return 0;
}
