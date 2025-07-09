#include<stdio.h>

int main() 
{
    int a[3][3];
    int b[3][3];
   int  mul[3][3];
    

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("enter [%d] [%d] value :", i,j);
        scanf("%d", &a[i][j]);
    }
    }
    printf("enter value for second matrix :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter [%d][%d]value : ", i,j);
            scanf("%d", &b[i][j]);
        }
    }

    // for multiplication

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             mul[i][j]=0;
        for(int k=0;k<3;k++) 
        {
            mul[i][j]+=a[i][k]*b[k][j];
        }
        }
    }
       

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
