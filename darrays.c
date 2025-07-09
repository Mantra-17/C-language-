#include<stdio.h>

int main() {

    int matrix[3][3];

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++){
            printf("enter the value of matrix [%d][%d] :", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d\t", matrix[i][j]);
        }
}
printf("\n");
 printf("sum  is %d\n :", matrix[0][0]+matrix[0][1]+matrix[0][2]+matrix[1][0]+matrix[1][1]+matrix[1][2]+matrix[2][0]+matrix[2][1]+matrix[2][2]);
return 0;
}
