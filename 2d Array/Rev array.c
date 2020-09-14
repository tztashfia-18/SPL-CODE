#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int A[n];
    int rev[n];
    j=n-1;


    printf("array input\n");
    for(i=0; i<n; i++){

        scanf("%d", &A[i]);
    }

   // rev
    for(i=0; i<n; i++){

        rev[i] = A[j];
        j--;
    }

     printf("array Rev\n");
     for(i=0; i<n; i++){

        printf("%d ", rev[i]);
    }


    return 0;
}
