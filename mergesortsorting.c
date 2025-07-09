#include<stdio.h>

int main()
{
int i,j,k;
int l,m,n;
int A[100],B[100],C[200];

printf("Enter the number of element in A:\n");
scanf("%d", &m);
for(int i=0;i<m;i++){
    printf("Enter A[%d] element\n", i);
    scanf("%d", &A[i]);
}
printf("Enter the number of element in B:\n");
scanf("%d", &n);
for(int j=0;j<n;j++){
    printf("Enter B[%d] element\n", j);
    scanf("%d", &B[j]);
}
  while(i<m && j<n) {
        if(A[i] < B[j]) {
            C[k]=A[i];
            i++;
            k++;
        } else{
            C[k] = B[j];
            j++;
            k++;
        }
    } while(i<m) {
        C[k]=A[i];
        k++;
        i++;
    }
    while(j<n) {
        C[k]=B[j];
        j++;
        k++;
    }
  l=m+n;
  for(int k=0;k<l;k++) {
    printf("%d\t", C[k]);
  }
}