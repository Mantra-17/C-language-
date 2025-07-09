#include<stdio.h>

void sorting(int *a3, int l)
{
    for(int i=0;i<l-1;i++){
        for(int j=0;j<l-1-i;j++){
            if(a3[j]>a3[j+1]){
                int temp = a3[j];
                a3[j] = a3[j+1];
                a3[j+1] = temp;
            }
        }
    }
}
int main(){
    int l;
    int n,m,a1[100],a2[100],a3[200];
    printf("enter the size of the 1st array =");
    scanf("%d",&n);
    printf("enter the elements of 1st array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    printf("enter the size of the 2nd array =");
    scanf("%d",&m);
    printf("enter the elements of 2st array :\n");
    for(int i=0;i<m;i++){
        scanf("%d",&a2[i]);
    }
    for(int i=0;i<n;i++){
        a3[i]=a1[i];
    }
    for(int i=0;i<m;i++){
        a3[i+n]=a2[i];
    }
    printf("The array a1 :\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a1[i]);
    }
    printf("The array a2 :\n");
    for(int i=0;i<m;i++){
        printf("%d\n",a2[i]);
    }
    l=m+n;
    printf("The merged array :\n");
    for(int i=0;i<(n+m);i++){
        printf("%d ",a3[i]);
    }
    printf("Sorted merged array is \n");
    sorting(a3,l);
    for(int i=0;i<l;i++){
        printf("%d\t", a3[i]);
    }
    return 0;
}