#include<stdio.h>
int main() // right trinagle upward
{
    int n;
    printf("enter rows:");
    scanf("%d", &n);
    for(int i=n;i>=1;i--) {
        for(int j=i;j<=n;j++){
            printf("*");
        }
        printf("\n");
    } 
      for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    } 
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=i;j++){
                printf("%d", i);
            }
            printf("\n");
        }
        // n=5
      for(int i=1;i<=n;i++) {//i=1 
        for(int j=1;j<=i;j++){//j=1
            printf("%d", j);
        }
        printf("\n");
    } 
     
   return 0;
}