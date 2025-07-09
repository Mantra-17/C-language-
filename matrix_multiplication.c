#include<stdio.h>

int main()
{
    int i,j,k,sum=0;
    int a[2][2],b[2][2],c[2][2];
    printf("Enter the elements of 1st matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("Multiplication is :\n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum=0;
            for(k=0;k<2;k++){
                sum = sum+a[i][k]*b[k][i];
            }
            c[i][j] = sum;

        }
    }
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
     }
    
}