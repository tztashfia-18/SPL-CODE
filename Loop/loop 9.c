#include<stdio.h>

int main()
{
    int n,i;
    float A,HW,CT,MT,TF;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f %f %f %f %f",&A,&HW,&CT,&MT,&TF);
        float total=A+HW+CT+(MT*0.6)+(TF*0.4);

        printf("Student %d : ",i);

        if(total>=90) printf("A\n");
        else if(total>=86) printf("A\n");
        else if(total>=86) printf("A-\n");
        else if(total>=82) printf("B+\n");
        else if(total>=78) printf("B\n");
        else if(total>=74) printf("B-\n");
        else if(total>=70) printf("C+\n");
        else if(total>=66) printf("C\n");
        else if(total>=62) printf("C-\n");
        else if(total>=58) printf("D+\n");
        else if(total>=55) printf("D\n");
        else printf("F\n");

    }
    return 0;
}
