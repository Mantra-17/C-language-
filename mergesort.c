#include<stdio.h>

void printsort(int A[],low,mid,high) {
int i,j,k;
 int B[100];
 i = low;
 j = mid+1;
 k=low;

 while(i <=mid && j<=high) 
 {
     if(A[i]<A[j]) {
        B[k]=A[i];
        i++;
        k++;
    }
    else{
        B[k]=A[j];
        j++;
        k++;
    }
 }
 while(i<=mid) {
    B[k]=A[i];
    k++;
    i++;
 }
 while(j<=high) {
    B[k] = A[j];
    j++;
    k++;

 }
}

