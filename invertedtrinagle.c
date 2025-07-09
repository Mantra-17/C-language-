#include<stdio.h>

int main() {
    int n;
    printf("enter rows :");
    scanf("%d", &n);
//Inverted triangle 
    for(int i=1;i<=n;i++) {
        for(int j=i;j<=n;j++) {
        printf("*");
        }
        printf("\n");
    }
  for(int i=1;i<=n;i++) { //number inverted triangle
    for(int j=i;j<=n;j++){
        printf("%d", i);
    }
    printf("\n");
  }  
   for(int i=1;i<=n;i++) {
    for(int j=i;j<=n;j++) {
        printf("%d", j);
    }
    printf("\n");
  }  
  
  return 0;
} 